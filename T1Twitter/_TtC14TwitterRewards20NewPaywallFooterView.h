//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TwitterRewards20NewPaywallFooterView_h
#define _TtC14TwitterRewards20NewPaywallFooterView_h
@import Foundation;

@class TwitterRewards.NewPaywallFooterViewDelegate ?, UIView, _$sSo11UIStackViewCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg, _$sSo8UIButtonCSg;

@interface TwitterRewards.NewPaywallFooterView : UIView { // (Swift)
    /* instance variables */
    TwitterRewards.NewPaywallFooterViewDelegate ? delegate;
    __C.UIView? $__lazy_storage_$_topBorderView;
    __C.UIView? $__lazy_storage_$_socialProofContainerView;
    __C.UIStackView? $__lazy_storage_$_facepileStackView;
    __C.UILabel? $__lazy_storage_$_socialProofLabel;
    __C.UIButton? $__lazy_storage_$_subscribeButton;
    __C.UILabel? $__lazy_storage_$_termsLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapSubscribe;
- (void)didTapTerms;

@end

#endif /* _TtC14TwitterRewards20NewPaywallFooterView_h */
