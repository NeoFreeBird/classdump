//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventCarouselTransitionViewControllerDelegate_Protocol_h
#define T1LiveEventCarouselTransitionViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventCarouselTransitionViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)carouselTransitionViewControllerDidCompleteTransition:(id)transition;
- (void)carouselTransitionViewControllerDidTapReplay:(id)replay;
- (void)carouselTransitionViewControllerDidTapExpand:(id)expand;

@optional

@end

#endif /* T1LiveEventCarouselTransitionViewControllerDelegate_Protocol_h */
