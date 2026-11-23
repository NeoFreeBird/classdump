//
#ifndef TFSTwitterOAuth2TokenResponse_h
#define TFSTwitterOAuth2TokenResponse_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterOAuth2TokenResponse : NSObject

@property (readonly, copy, nonatomic) NSString *accessToken;

/* class methods */
+ (id)accessTokenResponseWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterOAuth2TokenResponse_h */
