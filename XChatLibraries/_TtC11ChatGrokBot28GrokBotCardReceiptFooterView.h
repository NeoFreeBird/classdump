//
#ifndef _TtC11ChatGrokBot28GrokBotCardReceiptFooterView_h
#define _TtC11ChatGrokBot28GrokBotCardReceiptFooterView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, UIView, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotCardReceiptFooterView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton actionButton;
    __C.UIImageView checkmarkView;
    __C.UILabel statusLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot28GrokBotCardReceiptFooterView_h */
