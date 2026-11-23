//
#ifndef _TtC16BeautifulMermaid11MermaidView_h
#define _TtC16BeautifulMermaid11MermaidView_h
@import Foundation;

@class BeautifulMermaid.MermaidLayer, UIView;

@interface BeautifulMermaid.MermaidView : UIView { // (Swift)
    /* instance variables */
    BeautifulMermaid.MermaidLayer mermaidLayer;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16BeautifulMermaid11MermaidView_h */
