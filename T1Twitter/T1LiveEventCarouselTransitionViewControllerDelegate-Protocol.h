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
