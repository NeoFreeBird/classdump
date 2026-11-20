//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC18TwitterAudiospaces25ClipCardContentHeaderView_h
#define _TtC18TwitterAudiospaces25ClipCardContentHeaderView_h
@import Foundation;

@class TwitterAudiospaces.ClipCardContentHeaderViewDelegate ?, TwitterAudiospaces.ClipCardContentViewModel ?, UIView, _$s10TFNUISwift15BadgesImageViewCMn, _$sSaySo6UIViewCGSg, _$sSo11UIStackViewCSg, _$sSo19TFNAvatarHeaderViewCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg, _$sSo8UIButtonCSg, _$sSo9TFNButtonCSg;

@interface TwitterAudiospaces.ClipCardContentHeaderView : UIView { // (Swift)
    /* instance variables */
    TwitterAudiospaces.ClipCardContentHeaderViewDelegate ? delegate;
    __C.TFNAvatarHeaderView? $__lazy_storage_$_avatarHeaderView;
    __C.UILabel? $__lazy_storage_$_fullNameLabel;
    nominal type descriptor for TFNUISwift.BadgesImageView badgeImageView;
    __C.UIButton? $__lazy_storage_$_caretButton;
    __C.TFNButton? $__lazy_storage_$_playAudioButton;
    __C.UIView? $__lazy_storage_$_spacerView;
    __C.UIStackView? $__lazy_storage_$_stackView;
    __C.UILabel? $__lazy_storage_$_errorMessageLabel;
    TwitterAudiospaces.ClipCardContentViewModel ? viewModel;
    [__C.UIView]? $__lazy_storage_$_actionViews;
}

/* instance methods */
- (void)handleTapOnCaret;
- (void)onPlayAudioTapWithButton:(id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)calculatedLayoutMetrics;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* _TtC18TwitterAudiospaces25ClipCardContentHeaderView_h */
