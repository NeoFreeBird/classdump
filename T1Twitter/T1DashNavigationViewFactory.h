//
#ifndef T1DashNavigationViewFactory_h
#define T1DashNavigationViewFactory_h
@import Foundation;

@class NSObject;

@interface T1DashNavigationViewFactory : NSObject // (Swift)

/* class methods */
+ (id)buildDashViewControllerForAccount:(id)account dashContentController:(id)controller;

/* instance methods */
- (id)init;

@end

#endif /* T1DashNavigationViewFactory_h */
