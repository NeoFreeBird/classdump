//
#ifndef _TtC9XArticles19ArticleReaderLayout_h
#define _TtC9XArticles19ArticleReaderLayout_h
@import Foundation;

@class Swift.Bool, UICollectionViewLayout, XArticles.ArticleReaderLayout.Column, XArticles.ArticleReaderLayoutDelegate ?, _$s12CoreGraphics7CGFloatVMn, _$sSa -> XArticles.ArticleReaderLayout.Row;

@interface XArticles.ArticleReaderLayout : UICollectionViewLayout { // (Swift)
    /* instance variables */
    XArticles.ArticleReaderLayoutDelegate ? delegate;
    nominal type descriptor for CoreGraphics.CGFloat coverSpacerHeight;
    Swift.Array -> XArticles.ArticleReaderLayout.Row rows;
    XArticles.ArticleReaderLayout.Column column;
    nominal type descriptor for CoreGraphics.CGFloat contentHeight;
    Swift.Bool needsRebuild;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

/* instance methods */
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)context;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)init;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC9XArticles19ArticleReaderLayout_h */
