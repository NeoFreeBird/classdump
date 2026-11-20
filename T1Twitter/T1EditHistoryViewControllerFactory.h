//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
