//
#ifndef TFSTwitterAttributionPostEventResponse_h
#define TFSTwitterAttributionPostEventResponse_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterAttributionPostEventResponse : NSObject

@property (readonly, nonatomic) NSString *deepLink;
@property (readonly, nonatomic) NSString *conversionValue;
@property (readonly, nonatomic) NSString *sessionToken;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* TFSTwitterAttributionPostEventResponse_h */
