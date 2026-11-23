//
#ifndef _TtC14T1TwitterSwift28ArticleAuthorFooterEmbedView_h
#define _TtC14T1TwitterSwift28ArticleAuthorFooterEmbedView_h
@import Foundation;

@class UIView, _$sSo10T1UserViewC, _$sSo17T1UserViewOptionsC, _$syycSg;

@interface T1TwitterSwift.ArticleAuthorFooterEmbedView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onHeightInvalidated;
    __C.T1UserView userView;
    __C.T1UserViewOptions userViewOptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)calculatedLayoutMetrics;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift28ArticleAuthorFooterEmbedView_h */
