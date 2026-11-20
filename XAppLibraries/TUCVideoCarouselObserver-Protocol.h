//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
