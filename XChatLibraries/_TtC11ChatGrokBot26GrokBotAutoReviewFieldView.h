//
#ifndef _TtC11ChatGrokBot26GrokBotAutoReviewFieldView_h
#define _TtC11ChatGrokBot26GrokBotAutoReviewFieldView_h
@import Foundation;

@class ChatGrokBot.GrokBotAutoReviewFieldView.Layout, Swift.Bool, UIView, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotAutoReviewFieldView : UIView { // (Swift)
    /* instance variables */
    Swift.Bool isLeading;
    ChatGrokBot.GrokBotAutoReviewFieldView.Layout layoutStyle;
    __C.UIView separatorView;
    __C.UILabel titleLabel;
    __C.UILabel valueLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot26GrokBotAutoReviewFieldView_h */
