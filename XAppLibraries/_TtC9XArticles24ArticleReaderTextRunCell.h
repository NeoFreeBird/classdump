//
#ifndef _TtC9XArticles24ArticleReaderTextRunCell_h
#define _TtC9XArticles24ArticleReaderTextRunCell_h
@import Foundation;

@class UICollectionViewCell, XArticles.ArticleTextRunView;

@interface XArticles.ArticleReaderTextRunCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    XArticles.ArticleTextRunView textRunView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

#endif /* _TtC9XArticles24ArticleReaderTextRunCell_h */
