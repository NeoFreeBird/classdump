//
#ifndef T1LiveEventCarouselTransitionViewDelegate_Protocol_h
#define T1LiveEventCarouselTransitionViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventCarouselTransitionViewDelegate <NSObject>

@required

/* required instance methods */
- (void)carouselTransitionViewDidCompleteTransition:(id)transition;
- (void)carouselTransitionViewDidTapReplay:(id)replay;
- (void)carouselTransitionViewDidTapExpand:(id)expand;

@optional

@end

#endif /* T1LiveEventCarouselTransitionViewDelegate_Protocol_h */
