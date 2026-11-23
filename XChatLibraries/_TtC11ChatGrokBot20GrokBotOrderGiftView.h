//
#ifndef _TtC11ChatGrokBot20GrokBotOrderGiftView_h
#define _TtC11ChatGrokBot20GrokBotOrderGiftView_h
@import Foundation;

@class UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotOrderGiftView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel messageLabel;
    __C.UILabel receiptLabel;
    __C.UILabel recipientLabel;
    __C.UILabel timingLabel;
}

@property (nonatomic, readonly) UIView *viewForFirstBaselineLayout;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot20GrokBotOrderGiftView_h */
