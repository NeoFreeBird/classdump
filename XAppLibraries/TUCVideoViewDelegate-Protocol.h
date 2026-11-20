//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCVideoViewDelegate_Protocol_h
#define TUCVideoViewDelegate_Protocol_h
@import Foundation;

@protocol TUCVideoViewDelegate

@required

/* required instance methods */
- (void)videoViewTapped:(id)tapped;
- (void)videoView:(id)view didPlayToEndWithCurrentPlaybackState:(id)state;

@optional

@end

#endif /* TUCVideoViewDelegate_Protocol_h */
