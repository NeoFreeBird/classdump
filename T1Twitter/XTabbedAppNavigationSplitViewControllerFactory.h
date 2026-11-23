//
#ifndef XTabbedAppNavigationSplitViewControllerFactory_h
#define XTabbedAppNavigationSplitViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface XTabbedAppNavigationSplitViewControllerFactory : NSObject

/* class methods */
+ (id)splitViewControllerWithDashContentController:(id)controller contentViewController:(id)controller account:(id)account;

@end

#endif /* XTabbedAppNavigationSplitViewControllerFactory_h */
