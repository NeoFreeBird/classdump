//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TEKAuthSigner_h
#define TEKAuthSigner_h
@import Foundation;

@class NSDictionary, NSObject, NSString, NSURLRequest;

@interface TEKAuthSigner : NSObject

@property (copy, nonatomic) NSString *oAuthConsumerKey;
@property (copy, nonatomic) NSString *oAuthConsumerSecret;
@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) NSURLRequest *request;

/* instance methods */
- (id)initWithURLRequest:(id)urlrequest parameters:(id)parameters;
- (id)_baseSignedMutableURLRequest;
- (id)signedMutableURLRequest;

@end

#endif /* TEKAuthSigner_h */
