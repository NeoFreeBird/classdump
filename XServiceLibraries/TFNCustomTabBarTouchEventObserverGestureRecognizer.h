//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
