//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1URTRetweetersViewControllerFactory_h
#define T1URTRetweetersViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1URTRetweetersViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerWithAccount:(id)account statusID:(long long)id userID:(long long)id enableRanking:(_Bool)ranking;

/* instance methods */
- (id)init;

@end

#endif /* T1URTRetweetersViewControllerFactory_h */
