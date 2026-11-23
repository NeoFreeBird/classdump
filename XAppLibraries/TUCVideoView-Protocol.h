//
#ifndef TUCVideoView_Protocol_h
#define TUCVideoView_Protocol_h
@import Foundation;

#include "TAVPlaybackState.h"
#include "TUCImageView-Protocol.h"
#include "TUCVideoViewDelegate-Protocol.h"

@protocol TUCVideoView <TUCImageView>

@required

@property (nonatomic, weak) id <TUCVideoViewDelegate> delegate;
@property (nonatomic, readonly) TAVPlaybackState *playbackState;
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
