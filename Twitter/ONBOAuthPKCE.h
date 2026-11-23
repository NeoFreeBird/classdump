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
