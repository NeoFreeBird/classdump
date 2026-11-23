//
#ifndef TAVAnalyticsShortFormCompleteTracker_h
#define TAVAnalyticsShortFormCompleteTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSMutableDictionary, NSNotificationCenter, NSObject, NSString;

@interface TAVAnalyticsShortFormCompleteTracker : NSObject <TAVAnalyticsTracker>

@property (retain, nonatomic) NSMutableDictionary *playthroughStates;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)processState:(id)state;
- (void)handlePlaybackCompletionNotification:(id)notification;
- (id)playthroughStateForPlayThroughID:(id)id;

@end

#endif /* TAVAnalyticsShortFormCompleteTracker_h */
