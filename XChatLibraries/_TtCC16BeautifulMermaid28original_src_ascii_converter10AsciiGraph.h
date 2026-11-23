//
#ifndef _TtCC16BeautifulMermaid28original_src_ascii_converter10AsciiGraph_h
#define _TtCC16BeautifulMermaid28original_src_ascii_converter10AsciiGraph_h
@import Foundation;

@class BeautifulMermaid.original_src_ascii_converter.AsciiConfig, _$sSDyS2iG, _$sSDySS BeautifulMermaid.original_src_ascii_converter.AsciiNode, _$sSa -> BeautifulMermaid.original_src_ascii_converter.AsciiEdge, _$sSa -> BeautifulMermaid.original_src_ascii_converter.AsciiNode, _$sSa -> BeautifulMermaid.original_src_ascii_converter.AsciiSubgraph, _$sSa -> BeautifulMermaid.original_src_ascii_converter.EdgeBundle, _$sSaySa -> BeautifulMermaid.original_src_ascii_converter.CharRole, _$sSaySaySJGG, _$sSi, _TtCs12_SwiftObject;

@interface BeautifulMermaid.original_src_ascii_converter.AsciiGraph : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> BeautifulMermaid.original_src_ascii_converter.AsciiNode nodes;
    Swift.Array -> BeautifulMermaid.original_src_ascii_converter.AsciiEdge edges;
    [[Swift.Character]] canvas;
    Swift.Array empty-list Swift.Array -> BeautifulMermaid.original_src_ascii_converter.CharRole roleCanvas;
    Swift.Dictionary empty-list Swift.String BeautifulMermaid.original_src_ascii_converter.AsciiNode grid;
    [Swift.Int : Swift.Int] columnWidth;
    [Swift.Int : Swift.Int] rowHeight;
    Swift.Array -> BeautifulMermaid.original_src_ascii_converter.AsciiSubgraph subgraphs;
    BeautifulMermaid.original_src_ascii_converter.AsciiConfig config;
    Swift.Int offsetX;
    Swift.Int offsetY;
    Swift.Array -> BeautifulMermaid.original_src_ascii_converter.EdgeBundle bundles;
}

@end

#endif /* _TtCC16BeautifulMermaid28original_src_ascii_converter10AsciiGraph_h */
