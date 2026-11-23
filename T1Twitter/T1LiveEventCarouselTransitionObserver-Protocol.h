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
