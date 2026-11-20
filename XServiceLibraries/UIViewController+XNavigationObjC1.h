//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIViewController_XNavigationObjC1_h
#define UIViewController_XNavigationObjC1_h
@import Foundation;

@interface UIViewController (XNavigationObjC1)

/* instance methods */
- (void)xnav_setNeedsNavigationConfigurationUpdateAnimated:(_Bool)animated;
- (void)xnav_setNeedsTabBarAccessoryUpdateAnimated:(_Bool)animated;

@end

#endif /* UIViewController_XNavigationObjC1_h */
