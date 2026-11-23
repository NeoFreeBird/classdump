//
#ifndef _TtC11ChatGrokBot25GrokBotDraftFieldListView_h
#define _TtC11ChatGrokBot25GrokBotDraftFieldListView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSSSg, _$sSa -> ChatGrokBot.GrokBotDraftFieldView, _$sSaySo6UIViewCG, _$syycSg;

@interface ChatGrokBot.GrokBotDraftFieldListView : UIView { // (Swift)
    /* instance variables */
    Swift.String? fieldAccessibilityHint;
    (() -> ())? onEditingChange;
    Swift.Bool showsLeadingRule;
    Swift.Array -> ChatGrokBot.GrokBotDraftFieldView fieldViews;
    [__C.UIView] ruleViews;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot25GrokBotDraftFieldListView_h */
