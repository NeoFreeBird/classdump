//
#ifndef _TtC9XArticles25ArticleReaderSkeletonView_h
#define _TtC9XArticles25ArticleReaderSkeletonView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$s7Combine14AnyCancellableCMn ?, _$sSa -> XArticles.ArticleReaderSkeletonBlockView;

@interface XArticles.ArticleReaderSkeletonView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat topInset;
    Swift.Array -> XArticles.ArticleReaderSkeletonBlockView blockViews;
    nominal type descriptor for Combine.AnyCancellable ? reduceMotionCancellable;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;

@end

#endif /* _TtC9XArticles25ArticleReaderSkeletonView_h */
