//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCCarouselViewControllerDelegate_Protocol_h
#define TUCCarouselViewControllerDelegate_Protocol_h
@import Foundation;

@protocol TUCCarouselViewControllerDelegate

@required

/* required instance methods */
- (void)carouselViewController:(id)controller didUserSwipeFrom:(long long)from to:(long long)to;
- (void)carouselViewController:(id)controller didAutoAdvanceFrom:(long long)from to:(long long)to;
- (void)notifyAccessibilityPageScrolled;

@optional

@end

#endif /* TUCCarouselViewControllerDelegate_Protocol_h */
