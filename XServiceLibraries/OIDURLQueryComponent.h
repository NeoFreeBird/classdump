//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OIDURLQueryComponent_h
#define OIDURLQueryComponent_h
@import Foundation;

@class NSArray, NSDictionary, NSMutableDictionary, NSObject;

@interface OIDURLQueryComponent : NSObject

@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

/* class methods */
+ (id)URLParamValueAllowedCharacters;

/* instance methods */
- (id)init;
- (id)initWithURL:(id)url;
- (id)valuesForParameter:(id)parameter;
- (void)addParameter:(id)parameter value:(id)value;
- (void)addParameters:(id)parameters;
- (id)queryItems;
- (id)percentEncodedQueryString;
- (id)URLEncodedParameters;
- (id)URLByReplacingQueryInURL:(id)url;
- (id)description;

@end

#endif /* OIDURLQueryComponent_h */
