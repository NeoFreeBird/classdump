//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9SWXMLHash13LazyXMLParser_h
#define _TtC9SWXMLHash13LazyXMLParser_h
@import Foundation;

#include "NSXMLParserDelegate-Protocol.h"

@class NSObject, SWXMLHash.Stack SWXMLHash.XMLElement, SWXMLHash.Stack _$sSS, SWXMLHash.XMLElement, SWXMLHash.XMLHashOptions, _$s10Foundation4DataVMn ?, _$sSa -> SWXMLHash.IndexOp;

@interface SWXMLHash.LazyXMLParser : NSObject <NSXMLParserDelegate> { // (Swift)
    /* instance variables */
    SWXMLHash.XMLElement root;
    SWXMLHash.Stack SWXMLHash.XMLElement parentStack;
    SWXMLHash.Stack Swift.String elementStack;
    nominal type descriptor for Foundation.Data ? data;
    Swift.Array -> SWXMLHash.IndexOp ops;
    SWXMLHash.XMLHashOptions options;
}

/* instance methods */
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
- (void)parser:(id)parser foundCharacters:(id)characters;
- (void)parser:(id)parser foundCDATA:(id)cdata;
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
- (id)init;

@end

#endif /* _TtC9SWXMLHash13LazyXMLParser_h */
