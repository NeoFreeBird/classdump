//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestBroadcastingVideoHandlerStatsCollector_h
#define PTVGuestBroadcastingVideoHandlerStatsCollector_h
@import Foundation;

#include "PTVGuestBroadcastingEndOfStreamStats.h"
#include "PTVGuestBroadcastingPeriodicStreamStats.h"
#include "PTVGuestCallerController.h"
#include "PTVGuestCallerSession.h"
#include "PTVJanusClient.h"
#include "PTVJanusClientObserver-Protocol.h"
#include "PTVJanusPluginHandlerProtocol-Protocol.h"
#include "PTVJanusVideoRoomPluginHandlerObserver-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"

@class NSDate, NSNumber, NSObject, NSString;

@interface PTVGuestBroadcastingVideoHandlerStatsCollector : NSObject <PTVJanusClientObserver, PTVJanusVideoRoomPluginHandlerObserver> {
    /* instance variables */
    PTVGuestBroadcastingVideoHandlerStatsCollector *_weakSelf;
}

@property (readonly, nonatomic) PTVGuestCallerController *guestCallerController;
@property (retain, nonatomic) PTVGuestBroadcastingPeriodicStreamStats *mostRecentPeriodicStats;
@property (readonly, nonatomic) NSDate *timeOfFirstFrame;
@property (readonly, nonatomic) NSDate *mediaStartTime;
@property (readonly, nonatomic) NSString *broadcastId;
@property (readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (readonly, nonatomic) NSString *publisherUserId;
@property (readonly, nonatomic) _Bool isPublisherTheMainBroadcaster;
@property (readonly, nonatomic) NSString *publisherGuestSessionUUID;
@property (readonly, nonatomic) PTVGuestCallerSession *publisherGuestCallerSession;
@property (readonly, nonatomic) _Bool isAudioOnly;
@property (readonly, nonatomic) PTVJanusClient *janusClient;
@property (readonly, nonatomic) id <PTVJanusPluginHandlerProtocol> videoHandler;
@property (readonly, nonatomic) NSString *janusRoomId;
@property (readonly, nonatomic) _Bool videoHandlerIsPublishing;
@property (readonly, nonatomic) long long slowLinkCount;
@property (readonly, nonatomic) NSNumber *timeToFirstFrameInSeconds;
@property (readonly, nonatomic) NSNumber *publishReadyTimeSeconds;
@property (nonatomic) _Bool isPrimary;
@property (readonly, nonatomic) NSDate *statsCollectionStartTime;
@property (readonly, nonatomic) PTVGuestBroadcastingEndOfStreamStats *endOfStreamStats;
@property (readonly, nonatomic) _Bool hasCollectedEndOfStreamStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoHandler:(id)handler janusClient:(id)client guestCallerController:(id)controller isPrimary:(_Bool)primary;
- (void)janusClient:(id)client didReceiveSlowLink:(id)link;
- (void)janusClient:(id)client didReceiveMedia:(id)media forVideoHandler:(id)handler;
- (void)videoRoomPluginHandler:(id)handler didUpdateRemoteMediaStream:(id)stream;
- (id)broadcast;
- (void)recordTimeOfFirstFrameIfNeeded;
- (void)onMedia:(id)media;
- (id)collectEndOfStreamStatsIfNeeded;
- (void)collectPeriodicStatsWithCompletion:(id /* block */)completion;

@end

#endif /* PTVGuestBroadcastingVideoHandlerStatsCollector_h */
