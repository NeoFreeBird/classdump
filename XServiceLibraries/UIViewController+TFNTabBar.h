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
