//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XNavigation20NativeVerticalTabBar_h
#define _TtC11XNavigation20NativeVerticalTabBar_h
@import Foundation;

#include "UITabBarControllerDelegate-Protocol.h"

@class NSObject, Swift.Bool, XNavigation.NativeVerticalTabBar.PassthroughView, _$s12CoreGraphics7CGFloatVMn, _$sSD -> XNavigation.TabBarController.TabIdentifier XNavigation.TabBarController.TabBadge, _$sSa -> XNavigation.TabBarController.TabIdentifier, _$sSo18UITabBarControllerC, _$sSo7UIColorC;

@interface XNavigation.NativeVerticalTabBar : NSObject <UITabBarControllerDelegate> { // (Swift)
    /* instance variables */
    XNavigation.NativeVerticalTabBar.PassthroughView view;
    __C.UIColor badgeColor;
    nominal type descriptor for CoreGraphics.CGFloat bottomOffset;
    __C.UITabBarController controller;
    Swift.Bool drawsCountsAsDots;
    XNavigation.TabBarController.TabIdentifier function type (escaping) onTap;
    Swift.Array -> XNavigation.TabBarController.TabIdentifier identifiers;
    Swift.Dictionary -> XNavigation.TabBarController.TabIdentifier XNavigation.TabBarController.TabBadge badges;
}

/* instance methods */
- (_Bool)tabBarController:(id)controller shouldSelectViewController:(id)controller;
- (id)init;

@end

#endif /* _TtC11XNavigation20NativeVerticalTabBar_h */
