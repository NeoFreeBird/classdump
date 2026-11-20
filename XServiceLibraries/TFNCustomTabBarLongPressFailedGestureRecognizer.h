//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
