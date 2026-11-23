//
#ifndef _TtC14TwitterRewards11BenefitView_h
#define _TtC14TwitterRewards11BenefitView_h
@import Foundation;

@class UIView, _$sSo11UIStackViewC, _$sSo11UIStackViewCSg, _$sSo18TUIAvatarImageViewCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg;

@interface TwitterRewards.BenefitView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.UILabel? $__lazy_storage_$_descriptionLabel;
    __C.UILabel? $__lazy_storage_$_userHandleLabel;
    __C.UIView? benefitAssetView;
    __C.UIStackView? $__lazy_storage_$_userHandleStackView;
    __C.TUIAvatarImageView? $__lazy_storage_$_avatarImageView;
    __C.UIStackView? $__lazy_storage_$_userHandleAndAvatarStackView;
    __C.UIStackView stackView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14TwitterRewards11BenefitView_h */
