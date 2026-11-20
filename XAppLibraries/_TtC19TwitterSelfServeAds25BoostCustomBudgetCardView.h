//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19TwitterSelfServeAds25BoostCustomBudgetCardView_h
#define _TtC19TwitterSelfServeAds25BoostCustomBudgetCardView_h
@import Foundation;

@class UIView, _$s13XDesignSystem6ButtonCMn, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface TwitterSelfServeAds.BoostCustomBudgetCardView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    (() -> ())? onClear;
    __C.UIView contentView;
    __C.UILabel reachLabel;
    __C.UILabel amountLabel;
    __C.UILabel captionLabel;
    nominal type descriptor for XDesignSystem.Button clearButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)accessibilityActivate;
- (void)didTapClear;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;

@end

#endif /* _TtC19TwitterSelfServeAds25BoostCustomBudgetCardView_h */
