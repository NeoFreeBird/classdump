//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1OAuth2ConsentParams_h
#define T1OAuth2ConsentParams_h
@import Foundation;

@class NSObject, NSString;

@interface T1OAuth2ConsentParams : NSObject // (Swift)

@property (nonatomic, readonly) NSString *clientID;
@property (nonatomic, readonly) NSString *redirectURI;
@property (nonatomic, readonly) NSString *responseType;
@property (nonatomic, readonly) NSString *scope;
@property (nonatomic, readonly) NSString *state;
@property (nonatomic, readonly) NSString *codeChallenge;
@property (nonatomic, readonly) NSString *codeChallengeMethod;
@property (nonatomic, readonly) NSString *queryString;

/* instance methods */
- (id)initWithQueryString:(id)string;
- (id)initWithUrl:(id)url;
- (id)init;

@end

#endif /* T1OAuth2ConsentParams_h */
