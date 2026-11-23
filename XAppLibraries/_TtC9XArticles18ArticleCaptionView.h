//
#ifndef _TtC9XArticles18ArticleCaptionView_h
#define _TtC9XArticles18ArticleCaptionView_h
@import Foundation;

@class UIView, XArticles.ArticleTextView, XArticles.ArticleTypography.TextStyle ?, _$sSS;

@interface XArticles.ArticleCaptionView : UIView { // (Swift)
    /* instance variables */
    Swift.String caption;
    XArticles.ArticleTextView textView;
    XArticles.ArticleTypography.TextStyle ? renderedStyle;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)fontSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XArticles18ArticleCaptionView_h */
