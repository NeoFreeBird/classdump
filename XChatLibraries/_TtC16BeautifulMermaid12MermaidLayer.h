//
#ifndef _TtC16BeautifulMermaid12MermaidLayer_h
#define _TtC16BeautifulMermaid12MermaidLayer_h
@import Foundation;

@class BeautifulMermaid.DiagramTheme, BeautifulMermaid.LayoutConfig, BeautifulMermaid.PreparedDiagram ?, CALayer, _$sSS, _$ss5ErrorMp ?, _$syycSg, __C.CGRect;

@interface BeautifulMermaid.MermaidLayer : CALayer { // (Swift)
    /* instance variables */
    Swift.String source;
    BeautifulMermaid.DiagramTheme theme;
    BeautifulMermaid.LayoutConfig layoutConfig;
    protocol descriptor for Swift.Error ? parseError;
    __C.CGRect diagramBounds;
    BeautifulMermaid.PreparedDiagram ? preparedDiagram;
    (() -> ())? onPrepareComplete;
}

/* instance methods */
- (id)init;
- (id)initWithLayer:(id)layer;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC16BeautifulMermaid12MermaidLayer_h */
