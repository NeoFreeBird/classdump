//
#ifndef TUCVideoView_Protocol_h
#define TUCVideoView_Protocol_h
@import Foundation;

#include "TUCImageView-Protocol.h"

@class TAVPlaybackState;
@protocol TUCVideoViewDelegate;

@protocol TUCVideoView <TUCImageView>

@required

@property (weak, nonatomic) id <TUCVideoViewDelegate> delegate;
@property (readonly, nonatomic) TAVPlaybackState *playbackState;
@property (nonatomic) _Bool shouldLoopVideo;
@property (nonatomic) _Bool hideVanity;
@property (nonatomic) _Bool trimVanityZeroWidthCharacters;

/* required instance methods */
- (void)setMediaViewModel:(id)model;
- (void)play;
- (void)reset;
- (id)previewImage;
- (id)autoplayable;

@optional

@end

#endif /* TUCVideoView_Protocol_h */
