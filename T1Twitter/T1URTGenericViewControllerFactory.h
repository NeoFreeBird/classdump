//
#ifndef T1URTGenericViewControllerFactory_h
#define T1URTGenericViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1URTGenericViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerWithConfiguration:(id)configuration account:(id)account;
+ (id)viewControllerWithConfiguration:(id)configuration account:(id)account displayLocation:(long long)location;

/* instance methods */
- (id)init;

@end

#endif /* T1URTGenericViewControllerFactory_h */
