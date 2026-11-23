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
