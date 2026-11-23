//
#ifndef _TtC9XArticles18ArticleTextRunView_h
#define _TtC9XArticles18ArticleTextRunView_h
@import Foundation;

@class UIView, XArticles.ArticleTextRunView.TextCacheEntry ?, XArticles.ArticleTextView, XArticles.ArticleTypography.RunStyles ?, _$sSa -> XArticles.ArticleTextRunElement;

@interface XArticles.ArticleTextRunView : UIView { // (Swift)
    /* instance variables */
    XArticles.ArticleTextView textView;
    Swift.Array -> XArticles.ArticleTextRunElement elements;
    XArticles.ArticleTextRunView.TextCacheEntry ? textCacheEntry;
    XArticles.ArticleTypography.RunStyles ? renderedStyles;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)fontSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XArticles18ArticleTextRunView_h */
