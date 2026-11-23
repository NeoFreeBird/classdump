//
#ifndef _TtC14GrokMarkdownUI18MermaidDiagramView_h
#define _TtC14GrokMarkdownUI18MermaidDiagramView_h
@import Foundation;

@class GrokMarkdownCore.MarkdownTheme, GrokMarkdownRenderer.ViewHierarchy.ViewComponent, GrokMarkdownUI.MermaidDiagramCanvasView, UIView;

@interface GrokMarkdownUI.MermaidDiagramView : UIView { // (Swift)
    /* instance variables */
    GrokMarkdownRenderer.ViewHierarchy.ViewComponent component;
    GrokMarkdownUI.MermaidDiagramCanvasView canvas;
    GrokMarkdownCore.MarkdownTheme theme;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (_Bool)accessibilityActivate;
- (void)presentFullscreenViewer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14GrokMarkdownUI18MermaidDiagramView_h */
