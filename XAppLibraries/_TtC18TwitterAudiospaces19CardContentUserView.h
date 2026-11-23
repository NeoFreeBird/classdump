//
#ifndef _TtC18TwitterAudiospaces19CardContentUserView_h
#define _TtC18TwitterAudiospaces19CardContentUserView_h
@import Foundation;

@class TwitterAudiospaces.CardContentViewModel ?, UIView, _$s10TFNUISwift15BadgesImageViewCMn, _$sSo11UIStackViewCSg, _$sSo19TFNAvatarHeaderViewCSg, _$sSo7UILabelCSg, _$sSo8UIButtonC;

@interface TwitterAudiospaces.CardContentUserView : UIView { // (Swift)
    /* instance variables */
    __C.TFNAvatarHeaderView? $__lazy_storage_$_avatarHeaderView;
    __C.UILabel? $__lazy_storage_$_fullNameLabel;
    nominal type descriptor for TFNUISwift.BadgesImageView badgeImageView;
    __C.UIButton roleButton;
    __C.UIStackView? $__lazy_storage_$_stackView;
    TwitterAudiospaces.CardContentViewModel ? viewModel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)calculatedLayoutMetrics;

@end

#endif /* _TtC18TwitterAudiospaces19CardContentUserView_h */
