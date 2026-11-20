//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNHUDWindow_h
#define TFNHUDWindow_h
@import Foundation;

@class UIView, UIWindow;

@interface TFNHUDWindow : UIWindow

@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *blockingView;

/* instance methods */
- (void)layoutSubviews;

@end

#endif /* TFNHUDWindow_h */
