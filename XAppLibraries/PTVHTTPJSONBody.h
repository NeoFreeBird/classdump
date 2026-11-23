//
#ifndef PTVHTTPJSONBody_h
#define PTVHTTPJSONBody_h
@import Foundation;

@class NSObject;

@interface PTVHTTPJSONBody : NSObject

/* class methods */
+ (id)RequestWithURL:(id)url Method:(id)method Parameters:(id)parameters AdditionalHeaderFields:(id)fields Error:(id *)error;
+ (id)DictionaryByRemovingBadNumberValuesFromDictionary:(id)dictionary;
+ (id)ContentType;

@end

#endif /* PTVHTTPJSONBody_h */
