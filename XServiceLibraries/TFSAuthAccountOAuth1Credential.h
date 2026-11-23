//
#ifndef TFSAuthAccountOAuth1Credential_h
#define TFSAuthAccountOAuth1Credential_h
@import Foundation;

@class NSObject, NSString;

@interface TFSAuthAccountOAuth1Credential : NSObject

@property (copy, nonatomic) NSString *oAuthToken;
@property (copy, nonatomic) NSString *oAuthTokenSecret;

/* instance methods */
- (id)initWithOAuthToken:(id)token oAuthTokenSecret:(id)secret;
- (_Bool)hasTokens;

@end

#endif /* TFSAuthAccountOAuth1Credential_h */
