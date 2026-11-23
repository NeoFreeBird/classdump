//
#ifndef _TtC9SWXMLHash13FullXMLParser_h
#define _TtC9SWXMLHash13FullXMLParser_h
@import Foundation;

#include "NSXMLParserDelegate-Protocol.h"

@class NSObject, SWXMLHash.ParsingError ?, SWXMLHash.Stack SWXMLHash.XMLElement, SWXMLHash.XMLElement, SWXMLHash.XMLHashOptions;

@interface SWXMLHash.FullXMLParser : NSObject <NSXMLParserDelegate> { // (Swift)
    /* instance variables */
    SWXMLHash.XMLElement root;
    SWXMLHash.Stack SWXMLHash.XMLElement parentStack;
    SWXMLHash.XMLHashOptions options;
    SWXMLHash.ParsingError ? parsingError;
}

/* instance methods */
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
- (void)parser:(id)parser foundCharacters:(id)characters;
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
- (void)parser:(id)parser foundCDATA:(id)cdata;
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;
- (id)init;

@end

#endif /* _TtC9SWXMLHash13FullXMLParser_h */
