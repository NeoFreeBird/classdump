//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
