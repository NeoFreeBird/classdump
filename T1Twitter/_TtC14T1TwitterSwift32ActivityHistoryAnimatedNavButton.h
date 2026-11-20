//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift32ActivityHistoryAnimatedNavButton_h
#define _TtC14T1TwitterSwift32ActivityHistoryAnimatedNavButton_h
@import Foundation;

#include "TFNCustomBarButtonItemView-Protocol.h"

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$s16XActivityHistory08ActivityB13NavButtonIconOMn, _$s6Lottie0A13AnimationViewCMn, _$s6Lottie0A9AnimationCMn ?, _$sSo11UIImageViewCSg;

@interface T1TwitterSwift.ActivityHistoryAnimatedNavButton : UIView <TFNCustomBarButtonItemView> { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat glyphSize;
    nominal type descriptor for XActivityHistory.ActivityHistoryNavButtonIcon currentIcon;
    nominal type descriptor for Lottie.LottieAnimationView animationView;
    __C.UIImageView? $__lazy_storage_$_settingsImageView;
    nominal type descriptor for Lottie.LottieAnimation ? searchToInfoAnimation;
    nominal type descriptor for Lottie.LottieAnimation ? infoToSearchAnimation;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (void)applyTintColor:(id)color;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift32ActivityHistoryAnimatedNavButton_h */
