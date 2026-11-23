//
#ifndef TFSTwitterOAuthAccessTokenResponse_h
#define TFSTwitterOAuthAccessTokenResponse_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterOAuthAccessTokenResponse : NSObject

@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSString *tokenSecret;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, nonatomic) long long userID;

/* class methods */
+ (id)accessTokenResponseWithData:(id)data error:(id *)error;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)init;

@end

#endif /* TFSTwitterOAuthAccessTokenResponse_h */
