//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BusinessAffiliatesViewControllerFactory_h
#define T1BusinessAffiliatesViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1BusinessAffiliatesViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerWithAccount:(id)account userID:(long long)id scribeContext:(id)context;

/* instance methods */
- (id)init;

@end

#endif /* T1BusinessAffiliatesViewControllerFactory_h */
