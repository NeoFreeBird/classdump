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
