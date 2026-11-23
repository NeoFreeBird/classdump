//
#ifndef TAVAnalyticsErrorTracker_h
#define TAVAnalyticsErrorTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSError, NSObject, NSString;

@interface TAVAnalyticsErrorTracker : NSObject <TAVAnalyticsTracker>

@property (retain, nonatomic) NSError *lastFatalError;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)private_processFatalErrorFromState:(id)state;
- (void)processState:(id)state;

@end

#endif /* TAVAnalyticsErrorTracker_h */
