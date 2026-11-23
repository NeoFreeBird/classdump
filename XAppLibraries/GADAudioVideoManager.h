//
#ifndef GADAudioVideoManager_h
#define GADAudioVideoManager_h
@import Foundation;

@class NSMapTable, NSMutableSet, NSObject;
@protocol GADAudioVideoManagerDelegate;

@interface GADAudioVideoManager : NSObject {
    /* instance variables */
    NSMutableSet *_playerIDsPlayingVideo;
    NSMutableSet *_playerIDsPlayingSound;
    NSMutableSet *_playerIDsPlayingUserInitiatedSound;
    NSMapTable *_playerIDsToPlayer;
}

@property (weak, nonatomic) id <GADAudioVideoManagerDelegate> delegate;
@property (nonatomic) _Bool audioSessionIsApplicationManaged;

/* instance methods */
- (id)init;
- (void)updateAudioSessionAfterAllVideoStopPlayingSound;
- (void)playerWithID:(id)id willChangeStateToPlaying:(_Bool)playing muted:(_Bool)muted userInitiated:(_Bool)initiated queue:(id)queue completionBlock:(id /* block */)block;
- (void)playerWithID:(id)id didChangeStateToPlaying:(_Bool)playing muted:(_Bool)muted userInitiated:(_Bool)initiated;
- (void)player:(id)player willChangeStateToPlaying:(_Bool)playing muted:(_Bool)muted userInitiated:(_Bool)initiated queue:(id)queue completionBlock:(id /* block */)block;
- (void)player:(id)player didChangeStateToPlaying:(_Bool)playing muted:(_Bool)muted userInitiated:(_Bool)initiated;
- (void)playerWillDealloc:(id)dealloc;

@end

#endif /* GADAudioVideoManager_h */
