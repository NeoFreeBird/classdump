//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVJanusClient_h
#define PTVJanusClient_h
@import Foundation;

#include "PTVAudioMonitor.h"
#include "PTVGuestRoomConfiguration.h"
#include "PTVJanusClientHandlerFactoryProtocol-Protocol.h"
#include "PTVJanusPluginHandlerProtocol-Protocol.h"
#include "PTVJanusVideoRoomPluginHandler.h"
#include "PTVJanusVideoRoomPluginHandlerDelegate-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVWeakSet.h"
#include "PTVWebRTCClient-Protocol.h"
#include "PTVWebRTCClientDelegate-Protocol.h"
#include "PTVWebRTCClientNetworkHelperProtocol-Protocol.h"
#include "TNLCommunicationAgentObserver-Protocol.h"

@class NSArray, NSMutableDictionary, NSNumber, NSObject, NSString, NSTimer, RTCIceServer, RTCPeerConnectionFactory;

@interface PTVJanusClient : NSObject <PTVJanusVideoRoomPluginHandlerDelegate, TNLCommunicationAgentObserver, PTVWebRTCClient> {
    /* instance variables */
    PTVJanusClient *_weakSelf;
    PTVWeakSet *_observers;
}

@property (retain, nonatomic) PTVGuestRoomConfiguration *configuration;
@property (nonatomic) _Bool isWaitingForLongPollResponse;
@property (retain, nonatomic) NSTimer *pingJanusSessionTimer;
@property (nonatomic) unsigned long long janusSessionId;
@property (retain, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (retain, nonatomic) NSString *adminUserId;
@property (retain, nonatomic) RTCIceServer *iceServer;
@property (retain, nonatomic) RTCPeerConnectionFactory *peerConnectionFactory;
@property (nonatomic) _Bool disconnectedWithError;
@property (nonatomic) _Bool shouldIceRestart;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) unsigned long long publisherRole;
@property (retain, nonatomic) id <PTVJanusPluginHandlerProtocol> storedLoggedInUserHandlerForDestroy;
@property (readonly, nonatomic) NSMutableDictionary *videoRoomPluginHandlers;
@property (readonly, nonatomic) NSMutableDictionary *handlersPendingAttach;
@property (nonatomic) int receivingStatus;
@property (nonatomic) double lastReceivingStatusChange;
@property (nonatomic) long long reachabilityStatus;
@property (retain, nonatomic) id <PTVWebRTCClientNetworkHelperProtocol> networkHelper;
@property (retain, nonatomic) id <PTVJanusClientHandlerFactoryProtocol> handlerFactory;
@property (readonly, nonatomic) struct { unsigned long long x0; double x1; _Bool x2; _Bool x3; _Bool x4; _Bool x5; _Bool x6; _Bool x7; _Bool x8; _Bool x9; _Bool x10; _Bool x11; _Bool x12; _Bool x13; _Bool x14; } features;
@property (retain, nonatomic) PTVAudioMonitor *localAudioMonitor;
@property (readonly, nonatomic) NSString *roomId;
@property (readonly, nonatomic) unsigned long long numberOfVideoHandlers;
@property (readonly, nonatomic) NSArray *videoHandlers;
@property (readonly, nonatomic) PTVJanusVideoRoomPluginHandler *loggedInUserHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _Bool isWebRTCActive;
@property (readonly, nonatomic) long long state;
@property (readonly, weak, nonatomic) id <PTVWebRTCClientDelegate> delegate;
@property (readonly, nonatomic) NSNumber *loggedInUserJanusHandlerId;
@property (readonly, nonatomic) NSNumber *loggedInUserJanusPublisherId;

/* class methods */
+ (id)janusResponseParseError;
+ (id)janusResponseUnhandledError;

/* instance methods */
- (void)dealloc;
- (void)videoRoomPluginHandler:(id)handler didCreateLocalVideoSource:(id)source;
- (void)videoRoomPluginHandler:(id)handler didReceiveLocalVideoTrack:(id)track;
- (void)videoRoomPluginHandler:(id)handler didReceiveLocalAudioTrack:(id)track;
- (void)videoRoomPluginHandler:(id)handler didUpdateRemoteMediaStream:(id)stream;
- (void)videoRoomPluginHandler:(id)handler didRemoveRemoteMediaStream:(id)stream;
- (void)videoRoomPluginHandler:(id)handler didReceiveRemoteAudioLevel:(id)level;
- (void)videoRoomPluginHandler:(id)handler didReceiveLocalAudioLevel:(id)level;
- (void)videoRoomPluginHandler:(id)handler didError:(id)error;
- (void)videoRoomPluginHandler:(id)handler didChangeState:(unsigned long long)state;
- (void)videoRoomPluginHandlerNeedsRestart:(id)restart;
- (void)videoRoomPluginHandler:(id)handler didAddLog:(id)log;
- (id)initWithConfiguration:(id)configuration delegate:(id)delegate loggedInUser:(id)user adminUserId:(id)id publisherRole:(unsigned long long)role networkHelper:(id)helper handlerFactory:(id)factory features:(struct { unsigned long long x0; double x1; _Bool x2; _Bool x3; _Bool x4; _Bool x5; _Bool x6; _Bool x7; _Bool x8; _Bool x9; _Bool x10; _Bool x11; _Bool x12; _Bool x13; _Bool x14; })features;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)notify:(id /* block */)notify;
- (_Bool)hasVideoHandlerForPeriscopeUserId:(id)id;
- (id)videoHandlerForPeriscopeUserId:(id)id;
- (id)videoHandlerWithHandlerId:(unsigned long long)id;
- (_Bool)isFullyConnectedToUserID:(id)id;
- (id)videoHandlerForMediaStream:(id)stream;
- (id)userIdForMediaStream:(id)stream;
- (id)videoHandlerForPollerResponse:(id)response;
- (void)addVideoHandler:(id)handler;
- (void)removeVideoHandler:(id)handler;
- (void)removeOtherUserVideoHandler:(id)handler;
- (void)join;
- (void)reconfigureWithVideoIfNeeded;
- (void)ping;
- (void)leaveWithError:(_Bool)error completion:(id /* block */)completion;
- (void)detachAndDestroySessionsWithVideoHandlers:(id)handlers loggedInUserHandler:(id)handler completion:(id /* block */)completion;
- (void)resume;
- (void)getIceServers;
- (void)initializePublisherHandler;
- (void)startJanusVideoRoomPollerIfNeeded;
- (void)pollStatus:(id /* block */)status;
- (void)restartJanusVideoRoomKeepAliveTimer;
- (void)onJoined:(id)joined;
- (void)onNewPublishers:(id)publishers;
- (void)addListenerHandlerForNewPublisher:(id)publisher;
- (void)onConfigured:(id)configured;
- (void)onStarted:(id)started;
- (void)onListenerAttached:(id)attached;
- (void)onHangUp:(id)up;
- (void)onLoggedInUserUnpublished:(id)unpublished;
- (void)onUnpublished:(id)unpublished;
- (void)handleUnpublishedEventForHandler:(id)handler fromPollResponse:(id)response;
- (void)onLoggedInUserLeaving:(id)leaving;
- (void)onLeaving:(id)leaving;
- (void)handleLeavingEventForHandler:(id)handler fromPollResponse:(id)response;
- (void)onLeft:(id)left;
- (void)onDetached:(id)detached;
- (void)onWebRtcUp:(id)up;
- (void)onMedia:(id)media;
- (void)checkLastReceivingTimeout;
- (_Bool)iceRestartForHandler:(id)handler ignoreState:(_Bool)state;
- (void)iceRestartForAllHandlersShouldNotify:(_Bool)notify ignoreState:(_Bool)state;
- (void)onSlowLink:(id)link;
- (void)onVideoRoomDestroyed:(id)destroyed;
- (void)onVideoRoomError:(id)error;
- (void)onJoinFailure:(id)failure;
- (void)tnl_communicationAgent:(id)agent didRegisterObserverWithInitialReachabilityFlags:(unsigned int)flags status:(long long)status carrierInfo:(id)info WWANRadioAccessTechnology:(id)technology captivePortalStatus:(long long)status;
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (id)subscribeTimerForHandler:(id)handler;
- (void)onSubscribeTimerFor:(id)_for;
- (void)reconnectHandler:(unsigned long long)handler;
- (void)reportErrorToDelegateIfNeeded:(id)needed shouldDisplayError:(_Bool)error;
- (void)reportErrorToDelegateIfNeeded:(id)needed shouldDisplayError:(_Bool)error withLogEntryFormat:(id)format;
- (void)displayLogWithFormat:(id)format;
- (void)displayErrorWithFormat:(id)format;
- (void)storeAndOutputLog:(id)log;
- (void)storeAndOutputError:(id)error;
- (void)logAction:(id)action element:(id)element;

@end

#endif /* PTVJanusClient_h */
