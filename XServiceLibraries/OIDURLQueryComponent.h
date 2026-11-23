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
