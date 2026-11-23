//
#ifndef T1EditHistoryViewControllerFactory_h
#define T1EditHistoryViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1EditHistoryViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerWithAccount:(id)account tweetID:(unsigned long long)id scribeContext:(id)context;

/* instance methods */
- (id)init;

@end

#endif /* T1EditHistoryViewControllerFactory_h */
