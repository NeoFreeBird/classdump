//
#ifndef _TtC11ChatGrokBot30GrokBotCardQuestionReceiptView_h
#define _TtC11ChatGrokBot30GrokBotCardQuestionReceiptView_h
@import Foundation;

@class UIView, _$sSa -> ChatGrokBot.GrokBotDecisionMarkView, _$sSaySo7UILabelCG, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotCardQuestionReceiptView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel questionLabel;
    __C.UILabel statusLabel;
    [__C.UILabel] pickLabels;
    Swift.Array -> ChatGrokBot.GrokBotDecisionMarkView pickMarkViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot30GrokBotCardQuestionReceiptView_h */
