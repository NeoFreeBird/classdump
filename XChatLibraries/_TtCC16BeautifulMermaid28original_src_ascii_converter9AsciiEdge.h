//
#ifndef _TtCC16BeautifulMermaid28original_src_ascii_converter9AsciiEdge_h
#define _TtCC16BeautifulMermaid28original_src_ascii_converter9AsciiEdge_h
@import Foundation;

@class BeautifulMermaid.original_src_ascii_converter.AsciiNode, BeautifulMermaid.original_src_ascii_converter.Direction, BeautifulMermaid.original_src_ascii_converter.EdgeBundle ?, Swift.Bool, _$sSS, _$sSSSg, _$sSa -> BeautifulMermaid.original_src_ascii_converter.GridCoord, _TtCs12_SwiftObject;

@interface BeautifulMermaid.original_src_ascii_converter.AsciiEdge : Swift._SwiftObject { // (Swift)
    /* instance variables */
    BeautifulMermaid.original_src_ascii_converter.AsciiNode from;
    BeautifulMermaid.original_src_ascii_converter.AsciiNode to;
    Swift.String text;
    Swift.Array -> BeautifulMermaid.original_src_ascii_converter.GridCoord path;
    Swift.Array -> BeautifulMermaid.original_src_ascii_converter.GridCoord labelLine;
    BeautifulMermaid.original_src_ascii_converter.Direction startDir;
    BeautifulMermaid.original_src_ascii_converter.Direction endDir;
    Swift.String? style;
    Swift.Bool hasArrowStart;
    Swift.Bool hasArrowEnd;
    BeautifulMermaid.original_src_ascii_converter.EdgeBundle ? bundle;
}

@end

#endif /* _TtCC16BeautifulMermaid28original_src_ascii_converter9AsciiEdge_h */
