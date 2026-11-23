//
#ifndef _TtC11ChatGrokBot28GrokBotCalendarEventCardView_h
#define _TtC11ChatGrokBot28GrokBotCalendarEventCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCalendarEventDetailsView, ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardReceiptLineView, ChatGrokBot.GrokBotConnectHeaderView, GrokBotRelay.SandCalendarEvent ?, UIView, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotCalendarEventCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCalendarEventDetailsView detailsView;
    __C.UILabel failureLabel;
    ChatGrokBot.GrokBotConnectHeaderView headerView;
    ChatGrokBot.GrokBotCardReceiptLineView receiptLineView;
    ChatGrokBot.GrokBotCardButton sendButton;
    GrokBotRelay.SandCalendarEvent ? event;
    (() -> ())? onOpen;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot28GrokBotCalendarEventCardView_h */
