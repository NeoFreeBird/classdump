//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBOAuthPKCE_h
#define ONBOAuthPKCE_h
@import Foundation;

@class NSObject, NSString;

@interface ONBOAuthPKCE : NSObject // (Swift)

@property (nonatomic, readonly) NSString *codeVerifier;
@property (nonatomic, readonly) NSString *codeChallenge;

/* instance methods */
- (id)init;

@end

#endif /* ONBOAuthPKCE_h */
