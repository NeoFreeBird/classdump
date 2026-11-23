//
#ifndef TAVAnalyticsCTATracker_h
#define TAVAnalyticsCTATracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsSessionState.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSObject, NSString;

@interface TAVAnalyticsCTATracker : NSObject <TAVAnalyticsTracker> {
    /* instance variables */
    id _observer;
}

@property (copy, nonatomic) TAVAnalyticsSessionState *lastAnalyticsSessionState;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNotificationType:(id)type;
- (void)dealloc;
- (void)processNotification:(id)notification;
- (void)processState:(id)state;

@end

#endif /* TAVAnalyticsCTATracker_h */
