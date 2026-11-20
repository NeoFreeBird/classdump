//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIViewController_TFNTabBar_h
#define UIViewController_TFNTabBar_h
@import Foundation;

@interface UIViewController (TFNTabBar)

/* instance methods */
- (_Bool)tfn_prefersTabBarShadowHidden;
- (_Bool)tfn_prefersTabBarPinned;
- (void)tfn_setNeedsTabBarStyleOverridesUpdate;

@end

#endif /* UIViewController_TFNTabBar_h */
