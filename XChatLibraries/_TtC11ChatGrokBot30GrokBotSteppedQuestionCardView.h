//
#ifndef _TtC11ChatGrokBot30GrokBotSteppedQuestionCardView_h
#define _TtC11ChatGrokBot30GrokBotSteppedQuestionCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotSteppedFooterView, UIView, _$sSa -> ChatGrokBot.GrokBotDecisionRowView, _$sSa -> ChatGrokBot.GrokBotSteppedReviewRowView, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotSteppedQuestionCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotSteppedFooterView footerView;
    __C.UILabel hintLabel;
    __C.UILabel promptLabel;
    __C.UIView reviewView;
    Swift.Array -> ChatGrokBot.GrokBotDecisionRowView optionRowViews;
    Swift.Array -> ChatGrokBot.GrokBotSteppedReviewRowView reviewRowViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* _TtC11ChatGrokBot30GrokBotSteppedQuestionCardView_h */
