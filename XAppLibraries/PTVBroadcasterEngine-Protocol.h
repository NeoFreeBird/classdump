//
#ifndef PTVBroadcasterEngine_Protocol_h
#define PTVBroadcasterEngine_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "PTVBroadcast.h"

@class CLLocation;

@protocol PTVBroadcasterEngine <NSObject>

@required

@property (nonatomic, readonly) PTVBroadcast *broadcast;
@property (nonatomic, readonly) _Bool broadcastIsOnline;
@property (nonatomic) _Bool isAudioScopeSelected;
@property (nonatomic, retain) CLLocation *twitterLocation;
@property (nonatomic) _Bool isApplicationInBackground;

/* required instance methods */
- (void)startBroadcastCreation;
- (void)startBroadcastWithParams:(id)params;
- (void)startBroadcastWithParams:(id)params;
- (void)stopBroadcast;
- (void)forceStopBroadcast;
- (void)releasePublishingViewController;
- (void)flipCamera;
- (void)associateTweetIDWithCurrentBroadcast:(id)broadcast amplifyProgramID:(id)id;
- (void)associateTweetIDWithCurrentBroadcast:(id)broadcast amplifyProgramID:(id)id;
- (void)showInformationalChatMessage:(id)message;

@optional

@end

#endif /* PTVBroadcasterEngine_Protocol_h */
