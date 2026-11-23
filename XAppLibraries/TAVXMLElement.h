//
#ifndef TAVXMLElement_h
#define TAVXMLElement_h
@import Foundation;

#include "NSXMLParserDelegate-Protocol.h"

@class NSArray, NSData, NSDictionary, NSError, NSMutableArray, NSMutableString, NSObject, NSString, NSURL;

@interface TAVXMLElement : NSObject <NSXMLParserDelegate> {
    /* instance variables */
    NSMutableArray *_mutableChildren;
    NSMutableString *_mutableText;
}

@property (retain, nonatomic) NSError *parseError;
@property (readonly, nonatomic) NSString *elementName;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) NSData *cdata;
@property (readonly, nonatomic) NSURL *cdataAsURL;
@property (readonly, weak, nonatomic) TAVXMLElement *parent;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSDictionary *elementNameToClassMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)rootElementWithParser:(id)parser elementNameToClassMap:(id)map;
+ (id)elementWithName:(id)name attributes:(id)attributes parent:(id)parent children:(id)children parser:(id)parser elementNameToClassMap:(id)map;
+ (Class)elementClassForName:(id)name elementNameToClassMap:(id)map;

/* instance methods */
- (id)dictionaryByConvertingKeysToLowercase:(id)lowercase;
- (id)initWithName:(id)name attributes:(id)attributes parent:(id)parent children:(id)children parser:(id)parser elementNameToClassMap:(id)map;
- (id)init;
- (void)didFinishParsingElement;
- (id)childrenOfClass:(Class)_class;
- (id)childrenWithName:(id)name;
- (id)childWithName:(id)name;
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
- (void)parser:(id)parser foundCDATA:(id)cdata;
- (void)parser:(id)parser foundCharacters:(id)characters;
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;
- (id)objectForKeyedSubscript:(id)subscript;

@end

#endif /* TAVXMLElement_h */
