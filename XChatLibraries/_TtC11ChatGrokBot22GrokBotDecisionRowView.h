//
#ifndef _TtC11ChatGrokBot22GrokBotDecisionRowView_h
#define _TtC11ChatGrokBot22GrokBotDecisionRowView_h
@import Foundation;

@class ChatGrokBot.GrokBotDecisionMarkView, Swift.Bool, UIControl, _$sSSSg, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotDecisionRowView : UIControl { // (Swift)
    /* instance variables */
    __C.UILabel descriptionLabel;
    ChatGrokBot.GrokBotDecisionMarkView markView;
    __C.UILabel titleLabel;
    Swift.Bool isHovered;
    (() -> ())? onTap;
    Swift.String? optionValue;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didHover:(id)hover;

@end

#endif /* _TtC11ChatGrokBot22GrokBotDecisionRowView_h */
