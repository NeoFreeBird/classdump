//
#ifndef _TtC16ChatConversation18MessageContentView_h
#define _TtC16ChatConversation18MessageContentView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class ChatConversation.MessageAttachmentStackView ?, ChatConversation.MessageAttachmentView _$s_ -> __C.CGPoint _$stcSg, ChatConversation.MessageAvatarView, ChatConversation.MessageBookingLinkCardView ?, ChatConversation.MessageCallToActionView ?, ChatConversation.MessageCallView ?, ChatConversation.MessageCellActionHandler ?, ChatConversation.MessageContextMenuInteraction ?, ChatConversation.MessageHeaderView, ChatConversation.MessageQuoteView ?, ChatConversation.MessageReactionView, ChatConversation.MessageSwipeInteraction ?, ChatConversation.MessageTextView, ChatConversationServices.MessageFooterView, ChatGrokBot.GrokBotCardSurfaceView ?, ChatModels.ChatMessageItem ?, ChatModels.ChatMessageItem _$s_ -> ChatModelsCore.AttachmentID _$sSgtcSg, ChatModels.ChatMessageItem _$scSg ->, ChatModels.MessageBookingLinkSelection ?, ChatUI.ChatColorProviding ?, ChatUI.ChatImageLoading ?, ChatUI.MessageDoubleTapInteraction ?, ChatUI.ScrollViewAwareTapGestureRecognizer ?, NSArray, Swift.Bool, UIView, _$s10Foundation4DateVMn, _$sSo12UIScrollViewCSgXw, _$sSo22UIAccessibilityElementCSg, _$sSo28UILongPressGestureRecognizerCSg, _$sSo6UIViewCSgXw;

@interface ChatConversation.MessageContentView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    ChatConversation.MessageAvatarView avatarView;
    ChatConversation.MessageHeaderView headerView;
    ChatConversation.MessageQuoteView ? quoteView;
    ChatConversation.MessageCallView ? callView;
    ChatConversation.MessageAttachmentStackView ? attachmentStackView;
    ChatConversation.MessageBookingLinkCardView ? bookingLinkCardView;
    ChatGrokBot.GrokBotCardSurfaceView ? bookingLinkSurfaceView;
    ChatConversation.MessageTextView textView;
    ChatConversation.MessageCallToActionView ? callToActionView;
    ChatConversation.MessageReactionView reactionView;
    ChatConversationServices.MessageFooterView footerView;
    ChatUI.ChatColorProviding ? colorProvider;
    weak __C.UIScrollView? scrollView;
    ChatConversation.MessageAttachmentView  first-element-marker  -> __C.CGPoint _$stcSg onAttachmentTap;
    ChatModels.ChatMessageItem  first-element-marker  -> ChatModelsCore.AttachmentID _$sSgtcSg onReplySwipe;
    ChatModels.ChatMessageItem _$scSg -> onInfoSwipe;
    ChatModels.ChatMessageItem _$scSg -> onLikeSwipe;
    Swift.Bool areInteractionsDisabled;
    ChatModels.ChatMessageItem ? message;
    ChatConversation.MessageCellActionHandler ? actionHandler;
    ChatUI.ChatImageLoading ? bookingLinkImageLoader;
    nominal type descriptor for Foundation.Date bookingLinkNow;
    ChatModels.MessageBookingLinkSelection ? bookingLinkSelection;
    Swift.Bool loadsBookingLinkTimes;
    ChatConversation.MessageContextMenuInteraction ? $__lazy_storage_$_textContextMenuInteraction;
    ChatConversation.MessageContextMenuInteraction ? $__lazy_storage_$_quoteContextMenuInteraction;
    ChatUI.MessageDoubleTapInteraction ? $__lazy_storage_$_textDoubleTapInteraction;
    ChatUI.MessageDoubleTapInteraction ? $__lazy_storage_$_quoteDoubleTapInteraction;
    ChatConversation.MessageContextMenuInteraction ? $__lazy_storage_$_bookingLinkContextMenuInteraction;
    ChatUI.MessageDoubleTapInteraction ? $__lazy_storage_$_bookingLinkDoubleTapInteraction;
    ChatConversation.MessageSwipeInteraction ? $__lazy_storage_$_bookingLinkSwipeInteraction;
    __C.UIAccessibilityElement? $__lazy_storage_$_messageAccessibilityElement;
    ChatConversation.MessageSwipeInteraction ? $__lazy_storage_$_attachmentSwipeInteraction;
    ChatConversation.MessageSwipeInteraction ? $__lazy_storage_$_textSwipeInteraction;
    ChatConversation.MessageSwipeInteraction ? $__lazy_storage_$_quoteSwipeInteraction;
    ChatUI.ScrollViewAwareTapGestureRecognizer ? $__lazy_storage_$_quoteTapRecognizer;
    ChatUI.ScrollViewAwareTapGestureRecognizer ? $__lazy_storage_$_cellTapRecognizer;
    ChatUI.ScrollViewAwareTapGestureRecognizer ? $__lazy_storage_$_seenStatusTapRecognizer;
    __C.UILongPressGestureRecognizer? $__lazy_storage_$_cellLongPressRecognizer;
    weak __C.UIView? swipeInteractionHostView;
}

@property (nonatomic, copy) NSArray *accessibilityCustomActions;

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)handleCellTap;
- (void)handleSeenStatusTap;
- (void)handleQuoteTap;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation18MessageContentView_h */
