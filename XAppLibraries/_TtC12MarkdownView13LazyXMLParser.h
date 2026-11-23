//
#ifndef _TtC12MarkdownView13LazyXMLParser_h
#define _TtC12MarkdownView13LazyXMLParser_h
@import Foundation;

#include "NSXMLParserDelegate-Protocol.h"

@class MarkdownView.Stack MarkdownView.XMLElement, MarkdownView.Stack _$sSS, MarkdownView.XMLElement, MarkdownView.XMLHashOptions, NSObject, _$s10Foundation4DataVMn ?, _$sSa -> MarkdownView.IndexOp;

@interface MarkdownView.LazyXMLParser : NSObject <NSXMLParserDelegate> { // (Swift)
    /* instance variables */
    MarkdownView.XMLElement root;
    MarkdownView.Stack MarkdownView.XMLElement parentStack;
    MarkdownView.Stack Swift.String elementStack;
    nominal type descriptor for Foundation.Data ? data;
    Swift.Array -> MarkdownView.IndexOp ops;
    MarkdownView.XMLHashOptions options;
}

/* instance methods */
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
- (void)parser:(id)parser foundCharacters:(id)characters;
- (void)parser:(id)parser foundCDATA:(id)cdata;
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
- (id)init;

@end

#endif /* _TtC12MarkdownView13LazyXMLParser_h */
