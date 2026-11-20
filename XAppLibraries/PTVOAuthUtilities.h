//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVOAuthUtilities_h
#define PTVOAuthUtilities_h
@import Foundation;

@class NSObject;

@interface PTVOAuthUtilities : NSObject

/* class methods */
+ (id)TwitterOAuthBearerTokenSignatureWithAccessToken:(id)token;
+ (id)TwitterOAuthSignatureForConsumerKey:(id)key consumerSecret:(id)secret authToken:(id)token authTokenSecret:(id)secret URL:(id)url HTTPMethod:(id)httpmethod Parameters:(id)parameters;
+ (id)private_oauthTimestamp;
+ (id)private_signatureWithSecret:(id)secret requestParameters:(id)parameters oauthParameters:(id)parameters URL:(id)url HTTPMethod:(id)httpmethod;
+ (id)private_signatureBaseWithParameters:(id)parameters oauthParameters:(id)parameters URL:(id)url HTTPMethod:(id)httpmethod;
+ (id)private_hostAndPortForURL:(id)url;
+ (id)private_percentEscapedQueryStringWithString:(id)string encoding:(unsigned long long)encoding;

@end

#endif /* PTVOAuthUtilities_h */
