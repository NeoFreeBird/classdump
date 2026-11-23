//
#ifndef TAVAnalyticsPlaybackLapseTracker_h
#define TAVAnalyticsPlaybackLapseTracker_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsTracker-Protocol.h"

@class NSMutableDictionary, NSNotificationCenter, NSObject, NSString;
@protocol TAVPlaythroughID;

@interface TAVAnalyticsPlaybackLapseTracker : NSObject <TAVAnalyticsTracker>

@property (retain, nonatomic) NSMutableDictionary *playthroughs;
@property (copy, nonatomic) id <TAVPlaythroughID> playthroughID;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) id <TAVAnalyticsEventSink> sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)handleBillableViewNotification:(id)notification;
- (void)processState:(id)state;
- (void)finish;
- (id)private_createOrReturnPlaybackStateForPlaythroughID:(id)id;
- (void)private_updateDidFinishedPlaybackForPlaythroughID:(id)id;
- (void)private_emitPlaybackLapseForPlaythroughIDIfNeeded:(id)needed;

@end

#endif /* TAVAnalyticsPlaybackLapseTracker_h */
