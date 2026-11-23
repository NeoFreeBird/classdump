//
#ifndef TFNCustomTabBarLongPressFailedGestureRecognizer_h
#define TFNCustomTabBarLongPressFailedGestureRecognizer_h
@import Foundation;

@class UIGestureRecognizer;

@interface TFNCustomTabBarLongPressFailedGestureRecognizer : UIGestureRecognizer

/* instance methods */
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;

@end

#endif /* TFNCustomTabBarLongPressFailedGestureRecognizer_h */
