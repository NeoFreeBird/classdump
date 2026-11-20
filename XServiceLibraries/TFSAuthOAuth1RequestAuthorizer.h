//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAuthOAuth1RequestAuthorizer_h
#define TFSAuthOAuth1RequestAuthorizer_h
@import Foundation;

#include "TFSAuthRequestAuthorizer-Protocol.h"

@class NSDate, NSObject, NSString;

@interface TFSAuthOAuth1RequestAuthorizer : NSObject <TFSAuthRequestAuthorizer>

@property (copy, nonatomic) NSString *OAuthNonce;
@property (retain, nonatomic) NSDate *OAuthTimestamp;
@property (copy, nonatomic) NSString *consumerKey;
@property (copy, nonatomic) NSString *consumerSecret;
@property (copy, nonatomic) NSString *OAuthToken;
@property (copy, nonatomic) NSString *OAuthTokenSecret;
@property (copy, nonatomic) NSString *callbackURLString;
@property (nonatomic) double clockDelta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)authorizationForURLRequest:(id)urlrequest context:(id)context error:(out id *)error;

@end

#endif /* TFSAuthOAuth1RequestAuthorizer_h */
