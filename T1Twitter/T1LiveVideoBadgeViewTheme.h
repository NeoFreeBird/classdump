//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveVideoBadgeViewTheme_h
#define T1LiveVideoBadgeViewTheme_h
@import Foundation;

@class NSObject, UIColor, UIFont;

@interface T1LiveVideoBadgeViewTheme : NSObject

@property (readonly, nonatomic) UIColor *badgeTextColor;
@property (readonly, nonatomic) UIColor *badgeTextColorInLiveState;
@property (readonly, nonatomic) UIFont *badgeFont;
@property (readonly, nonatomic) UIFont *badgeFontInLiveState;
@property (readonly, nonatomic) UIColor *badgeBackgroundColor;
@property (readonly, nonatomic) UIColor *badgeBackgroundColorInLiveState;

/* class methods */
+ (id)defaultTheme;
+ (id)cardTheme;
+ (id)tileTheme;

@end

#endif /* T1LiveVideoBadgeViewTheme_h */
