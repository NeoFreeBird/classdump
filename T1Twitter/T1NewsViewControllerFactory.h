//
#ifndef T1NewsViewControllerFactory_h
#define T1NewsViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1NewsViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerWithAccount:(id)account tab:(_Bool)tab;

/* instance methods */
- (id)init;

@end

#endif /* T1NewsViewControllerFactory_h */
