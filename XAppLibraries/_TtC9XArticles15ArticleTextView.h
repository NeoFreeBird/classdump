//
#ifndef _TtC9XArticles15ArticleTextView_h
#define _TtC9XArticles15ArticleTextView_h
@import Foundation;

@class UITextView, XArticles.ArticleTextLinkHandler, _$sSD -> _$s12CoreGraphics7CGFloatVMn _$sAA;

@interface XArticles.ArticleTextView : UITextView { // (Swift)
    /* instance variables */
    XArticles.ArticleTextLinkHandler linkHandler;
    Swift.Dictionary -> nominal type descriptor for CoreGraphics.CGFloat _$sAA heightsByWidth;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame textContainer:(id)container;

@end

#endif /* _TtC9XArticles15ArticleTextView_h */
