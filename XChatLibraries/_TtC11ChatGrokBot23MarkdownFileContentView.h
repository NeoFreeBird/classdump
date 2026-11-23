//
#ifndef _TtC11ChatGrokBot23MarkdownFileContentView_h
#define _TtC11ChatGrokBot23MarkdownFileContentView_h
@import Foundation;

@class GrokMarkdownRenderer.ContentLoader, GrokMarkdownUI.MarkdownContentView, UIView, _$sSo12UIScrollViewC;

@interface ChatGrokBot.MarkdownFileContentView : UIView { // (Swift)
    /* instance variables */
    GrokMarkdownUI.MarkdownContentView contentView;
    GrokMarkdownRenderer.ContentLoader loader;
    __C.UIScrollView scrollView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot23MarkdownFileContentView_h */
