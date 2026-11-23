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
