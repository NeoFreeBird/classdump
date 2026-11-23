//
#ifndef _TtC11LandingPage19LandingPageItemView_h
#define _TtC11LandingPage19LandingPageItemView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo11UIStackViewCSg, _$sSo7UILabelC, _$syycSg;

@interface LandingPage.LandingPageItemView : UIView { // (Swift)
    /* instance variables */
    __C.UIStackView? $__lazy_storage_$_containerStackView;
    __C.UIStackView textStackView;
    __C.UILabel titleLabel;
    __C.UILabel subtitleLabel;
    __C.UIImageView iconImageView;
    (() -> ())? accessibilityFocusHandler;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)accessibilityElementDidBecomeFocused;

@end

#endif /* _TtC11LandingPage19LandingPageItemView_h */
