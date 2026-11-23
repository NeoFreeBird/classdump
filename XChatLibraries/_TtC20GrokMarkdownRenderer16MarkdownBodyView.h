//
#ifndef _TtC20GrokMarkdownRenderer16MarkdownBodyView_h
#define _TtC20GrokMarkdownRenderer16MarkdownBodyView_h
@import Foundation;

@class GrokMarkdownRenderer.ContentLoader, UIView, _$sSSSg, _$sSa -> GrokCardsModels.GrokCard, _$sSi, _$sSo11UIStackViewC, _$sSo6UIViewC GrokCardsModels.GrokCard _$scSg, _$syycSg;

@interface GrokMarkdownRenderer.MarkdownBodyView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> GrokCardsModels.GrokCard cards;
    __C.UIView GrokCardsModels.GrokCard _$scSg makeCardView;
    (() -> ())? onContentSizeChanged;
    GrokMarkdownRenderer.ContentLoader loader;
    __C.UIStackView stack;
    Swift.String? appliedMarkdown;
    Swift.Int loadGeneration;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC20GrokMarkdownRenderer16MarkdownBodyView_h */
