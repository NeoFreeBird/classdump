//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot26GrokBotNavigationTitleView_h
#define _TtC11ChatGrokBot26GrokBotNavigationTitleView_h
@import Foundation;

@class ChatGrokBot.GrokBotBadgeRowView, Swift.Bool, UIView, _$s7SwiftUI19UIHostingControllerCMn _$s7SwiftUI7AnyViewVMn ?, _$sSo11UIImageViewC, _$sSo18UIVisualEffectViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg, __C.UIUserInterfaceStyle;

@interface ChatGrokBot.GrokBotNavigationTitleView : UIView { // (Swift)
    /* instance variables */
    __C.UIUserInterfaceStyle avatarUserInterfaceStyle;
    Swift.Bool isPillHidden;
    __C.UIView avatarContainerView;
    ChatGrokBot.GrokBotBadgeRowView badgeRowView;
    __C.UIVisualEffectView pillView;
    __C.UILabel titleLabel;
    __C.UILabel subtitleLabel;
    __C.UIImageView subtitleImageView;
    nominal type descriptor for SwiftUI.UIHostingController nominal type descriptor for SwiftUI.AnyView ? avatarHost;
    Swift.Bool isSubtitleVisible;
    (() -> ())? onTap;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)safeAreaInsetsDidChange;
- (void)didTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot26GrokBotNavigationTitleView_h */
