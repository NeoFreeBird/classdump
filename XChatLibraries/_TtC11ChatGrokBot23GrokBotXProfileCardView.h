//
#ifndef _TtC11ChatGrokBot23GrokBotXProfileCardView_h
#define _TtC11ChatGrokBot23GrokBotXProfileCardView_h
@import Foundation;

#include "_TtC11ChatGrokBot21GrokBotCardChromeView.h"

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotXAvatarView, ChatGrokBot.GrokBotXFollowedByView, ChatGrokBot.GrokBotXLinkTextView, ChatGrokBot.GrokBotXNameView, ChatGrokBot.GrokBotXProfileCountsView, ChatGrokBot.GrokBotXProfileMetaView, ChatModels.ChatAvatarShape, ChatUI.ChatRemoteImageView, Swift.Bool, _$sSo7UILabelC, _$sSo9UIControlC, _$syycSg;

@interface ChatGrokBot.GrokBotXProfileCardView : ChatGrokBot.GrokBotCardChromeView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotXAvatarView avatarView;
    ChatUI.ChatRemoteImageView bannerView;
    ChatGrokBot.GrokBotXLinkTextView bioTextView;
    ChatGrokBot.GrokBotXProfileCountsView countsView;
    ChatGrokBot.GrokBotCardButton followButton;
    ChatGrokBot.GrokBotXFollowedByView followedByView;
    ChatGrokBot.GrokBotCardButton goToProfileButton;
    __C.UILabel handleLabel;
    ChatGrokBot.GrokBotXProfileMetaView metaView;
    ChatGrokBot.GrokBotCardButton moreButton;
    ChatGrokBot.GrokBotXNameView nameView;
    __C.UIControl openControl;
    ChatModels.ChatAvatarShape avatarShape;
    Swift.Bool isNarrowPane;
    (() -> ())? onOpenProfile;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot23GrokBotXProfileCardView_h */
