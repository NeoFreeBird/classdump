//
#ifndef _TtC9XArticles23ArticleMarkdownHostView_h
#define _TtC9XArticles23ArticleMarkdownHostView_h
@import Foundation;

@class UIView, _$s10Foundation3URLVMn _$scSg ->, _$s7SwiftUI19UIHostingControllerCMn XArticles.ArticleMarkdownContentView, _$sSS, _$syycSg, __C.CGSize ?;

@interface XArticles.ArticleMarkdownHostView : UIView { // (Swift)
    /* instance variables */
    Swift.String markdown;
    nominal type descriptor for Foundation.URL _$scSg -> onLinkTap;
    (() -> ())? onHeightInvalidated;
    nominal type descriptor for SwiftUI.UIHostingController XArticles.ArticleMarkdownContentView hostingController;
    __C.CGSize ? measuredSize;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)fontSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XArticles23ArticleMarkdownHostView_h */
