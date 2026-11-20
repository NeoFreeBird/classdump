//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCVideoView_Protocol_h
#define TUCVideoView_Protocol_h
@import Foundation;

#include "TAVPlaybackState.h"
#include "TUCImageView-Protocol.h"
#include "TUCVideoViewDelegate-Protocol.h"

@protocol TUCVideoView <TUCImageView>

@required

@property (nonatomic, retain) id <TUCVideoViewDelegate> delegate;
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
