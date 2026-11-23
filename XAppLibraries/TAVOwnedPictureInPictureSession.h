//
#ifndef TAVOwnedPictureInPictureSession_h
#define TAVOwnedPictureInPictureSession_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"
#include "TAVPlayer.h"
#include "TAVPlayerView.h"

@class NSObject;

@interface TAVOwnedPictureInPictureSession : NSObject <TAVPlaybackObserver>

@property (readonly, nonatomic) TAVPlayerView *playerView;
@property (readonly, nonatomic) TAVPlayer *player;
@property (nonatomic) _Bool isActive;

/* instance methods */
- (id)initWithPlayerView:(id)view player:(id)player;
- (void)dealloc;
- (void)begin;
- (void)end;
- (id)currentHostView;
- (void)installIfNeeded;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)player:(id)player restoreInterfaceForNativePictureInPictureWithCompletion:(id /* block */)completion;

@end

#endif /* TAVOwnedPictureInPictureSession_h */
