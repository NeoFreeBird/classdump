//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
