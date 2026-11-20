//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8Payments28MoneyLikeTransferOverlayView_h
#define _TtC8Payments28MoneyLikeTransferOverlayView_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$s13XDesignSystem12RollingLabelCMn, _$s13XDesignSystem5GlassCMn ?, _$s6Lottie0A13AnimationViewCMn, _$s6Lottie0A9AnimationCMn ?, _$sSa -> __C.State _$s5state_So7UIImageCSg5imaget, _$sSo11UIImageViewCSgXw, _$sSo17NSNumberFormatterC, _$sSo6UIViewC, _$sSo6UIViewCSgXw, _$sSo7UILabelC, _$sSo8UIButtonCSgXw, _$sSo8UIWindowCSgXw;

@interface Payments.MoneyLikeTransferOverlayView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for Lottie.LottieAnimation ? pullAnimation;
    nominal type descriptor for Lottie.LottieAnimation ? releaseAnimation;
    nominal type descriptor for Lottie.LottieAnimationView animationView;
    __C.UIView scrimView;
    __C.UIView bubbleView;
    __C.UIView bubbleFillView;
    nominal type descriptor for XDesignSystem.RollingLabel amountLabel;
    __C.UIView cancelDockView;
    __C.UILabel cancelDockLabel;
    nominal type descriptor for XDesignSystem.Glass ? cancelDockGlass;
    __C.NSNumberFormatter formatter;
    weak __C.UIWindow? windowView;
    weak __C.UIButton? sourceButton;
    Swift.Array -> __C.State _$s5state_So7UIImageCSg5imaget sourceButtonImages;
    weak __C.UIImageView? sourceImageView;
    nominal type descriptor for CoreGraphics.CGFloat sourceImageAlpha;
    Swift.Bool sourceImageWasHidden;
    weak __C.UIView? recipientView;
    Swift.Bool showsHeart;
    Swift.Bool isCancelling;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC8Payments28MoneyLikeTransferOverlayView_h */
