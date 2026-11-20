//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventCarouselTransitionObserver_Protocol_h
#define T1LiveEventCarouselTransitionObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventCarouselTransitionObserver <NSObject>

@required

/* required instance methods */
- (void)carouselTransitionHandler:(id)handler didCompleteTransitionToCarouselEntry:(id)entry;
- (void)carouselTransitionHandlerDidRequestReplayOfCurrentItem:(id)item;

@optional

@end

#endif /* T1LiveEventCarouselTransitionObserver_Protocol_h */
