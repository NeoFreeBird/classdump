//
#ifndef TUCSwipeableMediaCarouselViewControllerDelegate_Protocol_h
#define TUCSwipeableMediaCarouselViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TAVScrollViewVisibilityDelegate-Protocol.h"

@protocol TUCSwipeableMediaCarouselViewControllerDelegate <NSObject, TAVScrollViewVisibilityDelegate>

@required

/* required instance methods */
- (void)carouselViewController:(id)controller didSelectItemAtIndexPath:(id)path eventType:(unsigned long long)type;
- (void)carouselViewController:(id)controller didDisplayItemAtIndex:(unsigned long long)index;
- (void)carouselViewController:(id)controller didAutoSwipeFrom:(unsigned long long)from to:(unsigned long long)to;
- (void)carouselViewController:(id)controller didManualSwipeFrom:(unsigned long long)from to:(unsigned long long)to;
- (id)carouselViewController:(id)controller didHapticTouchItemAtIndex:(unsigned long long)index;

@optional

@end

#endif /* TUCSwipeableMediaCarouselViewControllerDelegate_Protocol_h */
