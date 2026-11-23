//
#ifndef ONBGoogleSignInRunner_h
#define ONBGoogleSignInRunner_h
@import Foundation;

@class NSObject;

@interface ONBGoogleSignInRunner : NSObject // (Swift)

/* class methods */
+ (void)signInWithWindow:(id)window clientID:(id)id scopes:(id)scopes willPresent:(id /* block */)present completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* ONBGoogleSignInRunner_h */
