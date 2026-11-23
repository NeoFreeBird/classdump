//
#ifndef _TtC9XArticles30ArticleReaderActionButtonsView_h
#define _TtC9XArticles30ArticleReaderActionButtonsView_h
@import Foundation;

@class UIView, _$s13XDesignSystem6ButtonCMn, _$sSo11UIStackViewC, _$syycSg;

@interface XArticles.ArticleReaderActionButtonsView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onListenTap;
    (() -> ())? onSummarizeTap;
    __C.UIStackView stackView;
    nominal type descriptor for XDesignSystem.Button listenButton;
    nominal type descriptor for XDesignSystem.Button summarizeButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapListen;
- (void)didTapSummarize;

@end

#endif /* _TtC9XArticles30ArticleReaderActionButtonsView_h */
