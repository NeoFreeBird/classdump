//
#ifndef TUCVideoCarouselObserver_Protocol_h
#define TUCVideoCarouselObserver_Protocol_h
@import Foundation;

@protocol TUCVideoCarouselObserver

@required

/* required instance methods */
- (void)videoDidPlayToEndWithCurrentPlaybackState:(id)state componentView:(id)view;
- (void)videoDidPlayToEndWithCurrentPlaybackState:(id)state componentView:(id)view;

@optional

@end

#endif /* TUCVideoCarouselObserver_Protocol_h */
