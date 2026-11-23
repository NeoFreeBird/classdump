//
#ifndef _TtC11ChatGrokBot24GrokBotAvatarTitleButton_h
#define _TtC11ChatGrokBot24GrokBotAvatarTitleButton_h
@import Foundation;

@class ChatGrokBot.GrokBotAvatarTitleButtonSubtitleView, ChatGrokBot.GrokBotBadgeRowView, NSString, UIControl, _$s7SwiftUI19UIHostingControllerCMn _$s7SwiftUI7AnyViewVMn ?, _$sSo11UIStackViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotAvatarTitleButton : UIControl { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotBadgeRowView badgeRowView;
    ChatGrokBot.GrokBotAvatarTitleButtonSubtitleView subtitleView;
    __C.UIStackView textStackView;
    __C.UIStackView titleStackView;
    __C.UILabel titleLabel;
    __C.UIView avatarContainerView;
    nominal type descriptor for SwiftUI.UIHostingController nominal type descriptor for SwiftUI.AnyView ? avatarHost;
    (() -> ())? onTap;
}

@property (nonatomic) _Bool highlighted;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, copy) NSString *accessibilityLabel;

/* instance methods */
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTap;

@end

#endif /* _TtC11ChatGrokBot24GrokBotAvatarTitleButton_h */
