//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LockScreenManager_h
#define T1LockScreenManager_h
@import Foundation;

#include "T1LockScreenModel.h"
#include "TASSpaceModelObserver-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"

@class NSObject;

@interface T1LockScreenManager : NSObject <TAVPlaybackObserver, TASSpaceModelObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *_player;
    NSNumber"16@0:8 *_currentState;
    NSNumber"16@0:8 *_isDockedInBottomSegment;
    NSNumber"16@0:8 *_isExternalPlaybackActive;
    NSNumber"16@0:8 *stateQueue;
    NSNumber"16@0:8 *isActivated;
    NSNumber"16@0:8 *playbackCommandDelegate;
    NSNumber"16@0:8 *preferredTimescale;
    NSNumber"16@0:8 *artworkSize;
    NSNumber"16@0:8 *playbackDuration;
    NSNumber"16@0:8 *elapsedPlaybackTime;
    NSNumber"16@0:8 *artwork;
    NSNumber"16@0:8 *timeControlStatus;
}

@property (nonatomic, retain) T1LockScreenModel *model;

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)spaceModel:(id)model didUpdatePlayback:(id)playback;
- (void)spaceModelDidShutdown:(id)shutdown;
- (id)initWithPlayer:(id)player model:(id)model;
- (void)dealloc;
- (long long)handleLikeCommand:(id)command;
- (long long)handlePlayPauseCommand:(id)command;
- (long long)handlePlayCommand:(id)command;
- (long long)handlePauseCommand:(id)command;
- (long long)handleChangePlaybackPositionCommand:(id)command;
- (long long)handleSkipBackCommand:(id)command;
- (long long)handleSkipForwardCommand:(id)command;
- (id)init;

@end

#endif /* T1LockScreenManager_h */
