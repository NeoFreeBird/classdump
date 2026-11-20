//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBackgroundStackView_h
#define PTVBackgroundStackView_h
@import Foundation;

@class UIStackView, UIView;

@interface PTVBackgroundStackView : UIStackView

@property (readonly, nonatomic) UIView *backgroundView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)hideBackgroundView;
- (void)showBackgroundView;

@end

#endif /* PTVBackgroundStackView_h */
