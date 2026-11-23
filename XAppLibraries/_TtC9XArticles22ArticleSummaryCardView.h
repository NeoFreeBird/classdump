//
#ifndef _TtC9XArticles22ArticleSummaryCardView_h
#define _TtC9XArticles22ArticleSummaryCardView_h
@import Foundation;

@class UIView, XArticles.ArticleMarkdownHostView, XArticles.ArticleSummaryCardView.BodyContent, XArticles.ArticleSummaryHeaderView, _$sSo7UILabelC, _$syycSg;

@interface XArticles.ArticleSummaryCardView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onToggle;
    (() -> ())? onHeightInvalidated;
    XArticles.ArticleSummaryHeaderView headerView;
    XArticles.ArticleMarkdownHostView markdownView;
    __C.UILabel failureLabel;
    XArticles.ArticleSummaryCardView.BodyContent bodyContent;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTapHeader;
- (void)fontSizeDidChange;

@end

#endif /* _TtC9XArticles22ArticleSummaryCardView_h */
