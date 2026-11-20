//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UITabBarController_TFNAdditions_h
#define UITabBarController_TFNAdditions_h
@import Foundation;

@interface UITabBarController (TFNAdditions)

/* instance methods */
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;

@end

#endif /* UITabBarController_TFNAdditions_h */
