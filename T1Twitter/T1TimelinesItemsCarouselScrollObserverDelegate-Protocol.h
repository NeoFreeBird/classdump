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
