//
#ifndef _TtC11ChatGrokBot20GrokBotDraftCardView_h
#define _TtC11ChatGrokBot20GrokBotDraftCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardReceiptLineView, ChatGrokBot.GrokBotConnectHeaderView, ChatGrokBot.GrokBotDraftAttachmentListView, ChatGrokBot.GrokBotDraftFieldListView, ChatGrokBot.GrokBotDraftSignatureView, Swift.Bool, UIView, _$s8Dispatch0A8WorkItemCMn ?, _$sSo7UILabelC, _$sySbcSg, _$syycSg;

@interface ChatGrokBot.GrokBotDraftCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotDraftAttachmentListView attachmentListView;
    ChatGrokBot.GrokBotCardButton copyButton;
    ChatGrokBot.GrokBotCardButton discardButton;
    __C.UILabel failureLabel;
    ChatGrokBot.GrokBotDraftFieldListView fieldListView;
    ChatGrokBot.GrokBotConnectHeaderView headerView;
    ChatGrokBot.GrokBotCardReceiptLineView receiptLineView;
    ChatGrokBot.GrokBotCardButton sendButton;
    ChatGrokBot.GrokBotDraftSignatureView signatureView;
    nominal type descriptor for Dispatch.DispatchWorkItem ? copiedResetWorkItem;
    Swift.Bool isSendInFlight;
    (() -> ())? onCopy;
    ((Swift.Bool) -> ())? onFocus;
    (() -> ())? onOpen;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* _TtC11ChatGrokBot20GrokBotDraftCardView_h */
