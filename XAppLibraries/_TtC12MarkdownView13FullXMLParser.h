//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12MarkdownView13FullXMLParser_h
#define _TtC12MarkdownView13FullXMLParser_h
@import Foundation;

#include "NSXMLParserDelegate-Protocol.h"

@class MarkdownView.ParsingError ?, MarkdownView.Stack MarkdownView.XMLElement, MarkdownView.XMLElement, MarkdownView.XMLHashOptions, NSObject;

@interface MarkdownView.FullXMLParser : NSObject <NSXMLParserDelegate> { // (Swift)
    /* instance variables */
    MarkdownView.XMLElement root;
    MarkdownView.Stack MarkdownView.XMLElement parentStack;
    MarkdownView.XMLHashOptions options;
    MarkdownView.ParsingError ? parsingError;
}

/* instance methods */
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
- (void)parser:(id)parser foundCharacters:(id)characters;
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
- (void)parser:(id)parser foundCDATA:(id)cdata;
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;
- (id)init;

@end

#endif /* _TtC12MarkdownView13FullXMLParser_h */
