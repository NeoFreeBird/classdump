//
#ifndef _TtC11ChatGrokBot21GrokBotMessageRowView_h
#define _TtC11ChatGrokBot21GrokBotMessageRowView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class ChatConversationServices.MessageFooterView, ChatGrokBot.GrokBotAvatarHostView, ChatGrokBot.GrokBotBubbleView, ChatGrokBot.GrokBotFileAttachmentView, ChatGrokBot.GrokBotLinkListView, ChatGrokBot.GrokBotMediaGridView, ChatGrokBot.GrokBotMessageContextMenuInteraction ?, ChatGrokBot.GrokBotMessageSwipeHandler ?, ChatGrokBot.GrokBotPagePreviews ?, ChatGrokBot.GrokBotQuoteView, ChatGrokBot.GrokBotReactionsView, ChatGrokBot.GrokBotShoppingPicksView, ChatGrokBot.GrokBotTextEntityHit _$scSg ->, ChatGrokBot.GrokBotXPostCardView ?, ChatGrokBot.GrokBotXPostTap _$scSg ->, ChatModels.AudioPlaybackStream ?, ChatUI.MessageDoubleTapInteraction ?, ChatUI.ScrollViewAwareTapGestureRecognizer ?, Swift.Bool, UIView, _$s10Foundation3URLVMn ? ChatGrokBot.GrokBotMessageViewModel.Attachment _$sYacSg, _$sSa -> ChatGrokBot.GrokBotFileAttachmentView, _$sSa -> ChatGrokBot.GrokBotMessageViewModel.Attachment, _$sSa -> ChatGrokBot.GrokBotVoiceAttachmentView, _$sSo11UIImageViewC, _$sSo12UIScrollViewCSgXw, _$sSo28UILongPressGestureRecognizerCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo8UIButtonC, _$sySSSgcSg, _$sySS_So6UIViewCtcSg, _$sySScSg, _$sySi_S2iSo6UIViewCtcSg, _$sySicSg, _$sySo6UIViewCcSg, _$syycSg;

@interface ChatGrokBot.GrokBotMessageRowView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    ChatModels.AudioPlaybackStream ? audioPlaybackStream;
    (() -> ())? onDoubleTap;
    ChatGrokBot.GrokBotTextEntityHit _$scSg -> onEntityLongPress;
    ChatGrokBot.GrokBotTextEntityHit _$scSg -> onEntityTap;
    ((__C.UIView) -> ())? onExpand;
    (() -> ())? onExpandLinkList;
    nominal type descriptor for Foundation.URL ? ChatGrokBot.GrokBotMessageViewModel.Attachment _$sYacSg onLoadAudioFile;
    ((Swift.String?) -> ())? onLongPress;
    (() -> ())? onLongPressReactions;
    ((Swift.String) -> ())? onSendShoppingPrompt;
    (() -> ())? onSwipeLike;
    (() -> ())? onSwipeReply;
    (() -> ())? onTap;
    ((Swift.String, __C.UIView) -> ())? onTapAttachment;
    (() -> ())? onTapAvatar;
    (() -> ())? onTapPage;
    ChatGrokBot.GrokBotXPostTap _$scSg -> onTapPost;
    (() -> ())? onTapQuote;
    (() -> ())? onTapReplyCount;
    ((Swift.Int, Swift.Int, Swift.Int, __C.UIView) -> ())? onTapShoppingProduct;
    ((Swift.Int) -> ())? onTapShoppingResults;
    ChatGrokBot.GrokBotPagePreviews ? pagePreviews;
    weak __C.UIScrollView? scrollView;
    __C.UILabel authorNameLabel;
    ChatGrokBot.GrokBotAvatarHostView avatarHostView;
    ChatGrokBot.GrokBotBubbleView bubbleView;
    ChatConversationServices.MessageFooterView footerView;
    ChatGrokBot.GrokBotLinkListView linkListView;
    ChatGrokBot.GrokBotMediaGridView mediaGridView;
    ChatGrokBot.GrokBotFileAttachmentView pageView;
    ChatGrokBot.GrokBotQuoteView quoteView;
    ChatGrokBot.GrokBotReactionsView reactionsView;
    ChatGrokBot.GrokBotShoppingPicksView shoppingPicksView;
    __C.UIButton replyCountButton;
    __C.UIImageView likeIconView;
    __C.UIImageView replyIconView;
    __C.UIView swipeContentView;
    ChatGrokBot.GrokBotMessageContextMenuInteraction ? $__lazy_storage_$_bubbleContextMenuInteraction;
    ChatUI.MessageDoubleTapInteraction ? $__lazy_storage_$_bubbleDoubleTapInteraction;
    ChatUI.ScrollViewAwareTapGestureRecognizer ? $__lazy_storage_$_tapRecognizer;
    __C.UILongPressGestureRecognizer? $__lazy_storage_$_longPressRecognizer;
    ChatGrokBot.GrokBotMessageSwipeHandler ? $__lazy_storage_$_swipeHandler;
    Swift.Array -> ChatGrokBot.GrokBotMessageViewModel.Attachment fileAttachments;
    Swift.Array -> ChatGrokBot.GrokBotFileAttachmentView fileViews;
    Swift.Bool isFromUser;
    ChatGrokBot.GrokBotXPostCardView ? postCardView;
    Swift.Bool showsAvatarColumn;
    Swift.Array -> ChatGrokBot.GrokBotMessageViewModel.Attachment voiceAttachments;
    Swift.Array -> ChatGrokBot.GrokBotVoiceAttachmentView voiceViews;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTap;
- (void)didTapAvatar;
- (void)didTapReplyCount;

@end

#endif /* _TtC11ChatGrokBot21GrokBotMessageRowView_h */
