//
#ifndef TFNCustomTabBarTouchEventObserver_Protocol_h
#define TFNCustomTabBarTouchEventObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNCustomTabBarTouchEventObserver <NSObject>

@required

/* required instance methods */
- (void)observeTouchesBegan:(id)began withEvent:(id)event;
- (void)observeTouchesMoved:(id)moved withEvent:(id)event;
- (void)observeTouchesEnded:(id)ended withEvent:(id)event;
- (void)observeTouchesCancelled:(id)cancelled withEvent:(id)event;

@optional

@end

#endif /* TFNCustomTabBarTouchEventObserver_Protocol_h */
