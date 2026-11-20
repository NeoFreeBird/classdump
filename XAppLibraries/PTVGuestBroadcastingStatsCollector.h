//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestBroadcastingStatsCollector_h
#define PTVGuestBroadcastingStatsCollector_h
@import Foundation;

#include "PTVGuestBroadcastingPeriodicPlaybackStats.h"
#include "PTVGuestBroadcastingStatsCollectorDelegate-Protocol.h"
#include "PTVGuestCallerController.h"
#include "PTVJanusClient.h"
#include "PTVJanusClientObserver-Protocol.h"

@class NSDate, NSMutableArray, NSObject, NSString, NSTimer;

@interface PTVGuestBroadcastingStatsCollector : NSObject <PTVJanusClientObserver> {
    /* instance variables */
    PTVGuestBroadcastingStatsCollector *_weakSelf;
}

@property (retain, nonatomic) NSTimer *periodicStatsTimer;
@property (readonly, nonatomic) NSDate *periodicPlaybackStatsStartTime;
@property (readonly, nonatomic) NSMutableArray *videoHandlerStatsCollectors;
@property (retain, nonatomic) PTVGuestBroadcastingPeriodicPlaybackStats *previousPeriodicPlaybackStats;
@property (retain, nonatomic) NSString *primaryUserId;
@property (weak, nonatomic) id <PTVGuestBroadcastingStatsCollectorDelegate> delegate;
@property (readonly, nonatomic) PTVGuestCallerController *guestCallerController;
@property (readonly, nonatomic) PTVJanusClient *janusClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate guestCallerController:(id)controller janusClient:(id)client primaryUserId:(id)id;
- (void)dealloc;
- (void)janusClient:(id)client didAddHandler:(id)handler;
- (void)janusClient:(id)client didRemoveHandler:(id)handler;
- (id)statsCollectorForVideoHandler:(id)handler;
- (void)startCollectingStatsForVideoHandler:(id)handler;
- (void)stopCollectingStatsForVideoHandler:(id)handler;
- (id)publishingStatsCollector;
- (_Bool)isCollectingPlaybackStats;
- (id)playbackStatsCollectors;
- (void)primaryViewDidChangeToUserWithId:(id)id;
- (_Bool)shouldCollectPeriodicStats;
- (_Bool)isCollectingPeriodicStats;
- (void)startOrStopCollectingPeriodicStatsIfNeeded;
- (void)startCollectingPeriodicStats;
- (void)stopCollectingPeriodicStats;
- (void)collectPeriodicStats;
- (void)collectPeriodicPublishingStatsIfNeeded;
- (void)didCollectPeriodicPublishingStats:(id)stats;
- (void)collectPeriodicPlaybackStatsIfNeeded;
- (void)didCollectPeriodicPlaybackStats:(id)stats;
- (void)collectEndOfStreamStatsForHandlerIfNeeded:(id)needed;
- (void)collectEndOfStreamStatsIfNeeded;
- (void)didCollectEndOfStreamStats:(id)stats;

@end

#endif /* PTVGuestBroadcastingStatsCollector_h */
