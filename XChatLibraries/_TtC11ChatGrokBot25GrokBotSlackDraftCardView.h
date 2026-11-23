//
#ifndef _TtC11ChatGrokBot25GrokBotSlackDraftCardView_h
#define _TtC11ChatGrokBot25GrokBotSlackDraftCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardReceiptLineView, ChatGrokBot.GrokBotCardTitleBarView, ChatGrokBot.GrokBotDraftFieldListView, ChatGrokBot.GrokBotSlackDraftNote ?, Swift.Bool, UIView, _$s8Dispatch0A8WorkItemCMn ?, _$sSo11UIImageViewC, _$sSo7NSTimerCSg, _$sSo7UILabelC, _$sySbcSg, _$syycSg;

@interface ChatGrokBot.GrokBotSlackDraftCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton copyButton;
    ChatGrokBot.GrokBotCardButton discardButton;
    ChatGrokBot.GrokBotDraftFieldListView fieldListView;
    __C.UILabel noteLabel;
    ChatGrokBot.GrokBotCardReceiptLineView receiptLineView;
    ChatGrokBot.GrokBotCardButton sendButton;
    ChatGrokBot.GrokBotCardTitleBarView titleBarView;
    __C.UILabel titleLabel;
    __C.UIImageView titleMarkView;
    nominal type descriptor for Dispatch.DispatchWorkItem ? copiedResetWorkItem;
    Swift.Bool isSendInFlight;
    ChatGrokBot.GrokBotSlackDraftNote ? note;
    (() -> ())? onCopy;
    ((Swift.Bool) -> ())? onFocus;
    (() -> ())? onOpen;
    __C.NSTimer? retryTimer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* _TtC11ChatGrokBot25GrokBotSlackDraftCardView_h */
