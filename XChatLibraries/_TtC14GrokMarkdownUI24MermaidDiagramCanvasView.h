//
#ifndef _TtC14GrokMarkdownUI24MermaidDiagramCanvasView_h
#define _TtC14GrokMarkdownUI24MermaidDiagramCanvasView_h
@import Foundation;

@class GrokMarkdownCore.MermaidDiagram, GrokMarkdownCore.MermaidDiagram.Palette, UIView, _$s12CoreGraphics7CGFloatVMn;

@interface GrokMarkdownUI.MermaidDiagramCanvasView : UIView { // (Swift)
    /* instance variables */
    GrokMarkdownCore.MermaidDiagram diagram;
    GrokMarkdownCore.MermaidDiagram.Palette palette;
    nominal type descriptor for CoreGraphics.CGFloat magnification;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14GrokMarkdownUI24MermaidDiagramCanvasView_h */
