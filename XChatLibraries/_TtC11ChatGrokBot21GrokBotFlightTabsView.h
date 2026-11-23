//
#ifndef _TtC11ChatGrokBot21GrokBotFlightTabsView_h
#define _TtC11ChatGrokBot21GrokBotFlightTabsView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSa -> ChatGrokBot.GrokBotFlightTabPillView, _$sSaySSG, _$sSo12UIScrollViewC, _$sySScSg;

@interface ChatGrokBot.GrokBotFlightTabsView : UIView { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onSelect;
    __C.UIScrollView scrollView;
    Swift.Bool needsLeadingScroll;
    Swift.Array -> ChatGrokBot.GrokBotFlightTabPillView pillViews;
    [Swift.String] tabIDs;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)pick:(id)pick;

@end

#endif /* _TtC11ChatGrokBot21GrokBotFlightTabsView_h */
