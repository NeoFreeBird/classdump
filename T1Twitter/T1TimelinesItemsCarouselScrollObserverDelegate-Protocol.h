//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TimelinesItemsCarouselScrollObserverDelegate_Protocol_h
#define T1TimelinesItemsCarouselScrollObserverDelegate_Protocol_h
@import Foundation;

@protocol T1TimelinesItemsCarouselScrollObserverDelegate

@required

/* required instance methods */
- (void)scrollViewDidScrollFromInitialIndexPath:(id)path throughIndexPath:(id)path toIndexPath:(id)path endedScrolling:(_Bool)scrolling;

@optional

@end

#endif /* T1TimelinesItemsCarouselScrollObserverDelegate_Protocol_h */
