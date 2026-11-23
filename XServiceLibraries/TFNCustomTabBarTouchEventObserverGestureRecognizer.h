//
#ifndef TFNCustomTabBarTouchEventObserverGestureRecognizer_h
#define TFNCustomTabBarTouchEventObserverGestureRecognizer_h
@import Foundation;

#include "TFNCustomTabBarTouchEventObserver-Protocol.h"

@class UIGestureRecognizer;

@interface TFNCustomTabBarTouchEventObserverGestureRecognizer : UIGestureRecognizer

@property (weak, nonatomic) id <TFNCustomTabBarTouchEventObserver> touchEventObserver;

/* instance methods */
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;

@end

#endif /* TFNCustomTabBarTouchEventObserverGestureRecognizer_h */
