//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UINavigationBar_XNavigation_h
#define UINavigationBar_XNavigation_h
@import Foundation;

@interface UINavigationBar (XNavigation)

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;
+ (double)tfn_standardHeightForInterfaceOrientation:(long long)orientation compressHeightWhenVerticallyCompact:(_Bool)compact;

/* instance methods */
- (_Bool)xnav_ownsHorizontalPans;

@end

#endif /* UINavigationBar_XNavigation_h */
