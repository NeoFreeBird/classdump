//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBotP33_1C4387B75147CDCE1658677F20ABD1AA29GrokBotMarkdownTableBlockView_h
#define _TtC11ChatGrokBotP33_1C4387B75147CDCE1658677F20ABD1AA29GrokBotMarkdownTableBlockView_h
@import Foundation;

@class UIView;

@interface ChatGrokBot.(GrokBotMarkdownTableBlockView in _1C4387B75147CDCE1658677F20ABD1AA) : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 onEntityLongPress;
    @40@0:8:16@24@32 onEntityTap;
    @40@0:8:16@24@32 scrollView;
    @40@0:8:16@24@32 cells;
    @40@0:8:16@24@32 color;
    @40@0:8:16@24@32 mentionTargets;
    @40@0:8:16@24@32 rowViews;
    @40@0:8:16@24@32 columnWidthRanges;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBotP33_1C4387B75147CDCE1658677F20ABD1AA29GrokBotMarkdownTableBlockView_h */
