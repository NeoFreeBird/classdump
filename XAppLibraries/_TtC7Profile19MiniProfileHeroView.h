//
#ifndef _TtC7Profile19MiniProfileHeroView_h
#define _TtC7Profile19MiniProfileHeroView_h
@import Foundation;

@class Profile.MiniProfileBannerImageView, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$s13XDesignSystem6ButtonCMn, _$s13XDesignSystem9ButtonRowCMn, _$sSbycSg, _$sSo18TUIAvatarImageViewC, _$sSo6UIMenuCSgSo6UIViewCcSg, _$sSo6UIViewC, _$syycSg;

@interface Profile.MiniProfileHeroView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onBack;
    (() -> ())? onClose;
    (() -> ())? onAvatarTap;
    nominal type descriptor for CoreGraphics.CGFloat traySwipeUpExpansionContentInset;
    ((__C.UIView) -> __C.UIMenu?)? ellipsisMenuProvider;
    (() -> Swift.Bool)? ellipsisMenuAvailability;
    (() -> ())? ellipsisMenuWillDisplay;
    Profile.MiniProfileBannerImageView bannerImageView;
    __C.UIView avatarContainerView;
    __C.TUIAvatarImageView avatarImageView;
    __C.UIView avatarPlaceholderView;
    nominal type descriptor for XDesignSystem.Button backButton;
    nominal type descriptor for XDesignSystem.Button ellipsisButton;
    nominal type descriptor for XDesignSystem.Button closeButton;
    nominal type descriptor for XDesignSystem.ButtonRow trailingButtonRow;
    Swift.Bool showsBackButton;
    Swift.Bool showsCloseButton;
    Swift.Bool isEllipsisHidden;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didTapBack;
- (void)didTapClose;
- (void)didTapAvatar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7Profile19MiniProfileHeroView_h */
