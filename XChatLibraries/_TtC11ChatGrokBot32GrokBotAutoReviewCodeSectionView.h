//
#ifndef _TtC11ChatGrokBot32GrokBotAutoReviewCodeSectionView_h
#define _TtC11ChatGrokBot32GrokBotAutoReviewCodeSectionView_h
@import Foundation;

@class ChatGrokBot.GrokBotAutoReviewCodeBlockView, UIView, _$s13XDesignSystem9ListGroupCMn, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotAutoReviewCodeSectionView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotAutoReviewCodeBlockView codeBlockView;
    __C.UILabel headerLabel;
    nominal type descriptor for XDesignSystem.ListGroup listGroup;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot32GrokBotAutoReviewCodeSectionView_h */
