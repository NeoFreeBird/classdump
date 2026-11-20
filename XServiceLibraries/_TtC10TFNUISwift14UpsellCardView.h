//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift14UpsellCardView_h
#define _TtC10TFNUISwift14UpsellCardView_h
@import Foundation;

@class Swift.Bool, TFNUISwift.IndicatorLabel, TFNUISwift.UpsellCardConfiguration, UIView, _$sSaySo18NSLayoutConstraintCG, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo22UITapGestureRecognizerC, _$sSo29TFNTouchDownGestureRecognizerC, _$sSo7UILabelC;

@interface TFNUISwift.UpsellCardView : UIView { // (Swift)
    /* instance variables */
    TFNUISwift.UpsellCardConfiguration configuration;
    [__C.NSLayoutConstraint] currentConstraints;
    __C.UIStackView headlineHStackView;
    __C.UIStackView textVStackView;
    __C.UILabel headlineLabel;
    __C.UIImageView headlineIconImageView;
    TFNUISwift.IndicatorLabel headlineIndicatorLabel;
    __C.UILabel titleLabel;
    __C.UILabel detailLabel;
    __C.UIImageView splashImageView;
    __C.TFNTouchDownGestureRecognizer touchDownRecognizer;
    __C.UITapGestureRecognizer tapGesture;
    Swift.Bool highlighted;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)touchDownActionWithRecognizer:(id)recognizer;
- (void)tapActionWithRecognizer:(id)recognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10TFNUISwift14UpsellCardView_h */
