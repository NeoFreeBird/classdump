//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
