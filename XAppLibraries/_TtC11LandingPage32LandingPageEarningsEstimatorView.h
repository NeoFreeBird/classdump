//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11LandingPage32LandingPageEarningsEstimatorView_h
#define _TtC11LandingPage32LandingPageEarningsEstimatorView_h
@import Foundation;

@class LandingPage.FollowersUISlider ?, LandingPage.LandingPageEarningsEstimatorViewModel ?, UIView, _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo11UIStackViewCSg, _$sSo7UILabelCSg;

@interface LandingPage.LandingPageEarningsEstimatorView : UIView { // (Swift)
    /* instance variables */
    Swift.String disclaimerText;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    LandingPage.LandingPageEarningsEstimatorViewModel ? viewModel;
    __C.UIStackView? $__lazy_storage_$_containerStackView;
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.UIStackView? $__lazy_storage_$_amountStackView;
    __C.UILabel? $__lazy_storage_$_amountLabel;
    __C.UILabel? $__lazy_storage_$_perUnitLabel;
    LandingPage.FollowersUISlider ? $__lazy_storage_$_slider;
    __C.UILabel? $__lazy_storage_$_disclaimerLabel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)updateEarnings;
- (void)logEvent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11LandingPage32LandingPageEarningsEstimatorView_h */
