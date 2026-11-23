//
#ifndef PTVMessageGenerator_h
#define PTVMessageGenerator_h
@import Foundation;

#include "OS_dispatch_source-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVMessage.h"

@class NSObject;

@interface PTVMessageGenerator : NSObject {
    /* instance variables */
    PTVMessage *_pendingMuteMessage;
    long long _muteCountdown;
}

@property (retain, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *simulateChatTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *simulateHeartTimer;

/* instance methods */
- (id)initWithLoggedInUser:(id)user;
- (void)dealloc;
- (id)newTimerWithInterval:(double)interval handler:(id /* block */)handler;
- (void)beginChatGenerationAtInterval:(double)interval withHandler:(id /* block */)handler;
- (void)beginHeartGenerationAtInterval:(double)interval withHandler:(id /* block */)handler;
- (void)endGeneration;
- (id)randomDisplayName;
- (id)randomUsername;
- (id)randomRemoteID;
- (int)randomParticipantIndex;
- (id)randomBody;
- (id)randomProfileImageURL;
- (_Bool)randomBool;
- (void)possiblyMarkMessageForMute:(id)mute;
- (id)randomChat;
- (id)randomHeart;
- (id)muteForMessage:(id)message;
- (id)popPendingMuteMessage;
- (_Bool)decrementMuteCounterAndTestIfZero;

@end

#endif /* PTVMessageGenerator_h */
