//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
