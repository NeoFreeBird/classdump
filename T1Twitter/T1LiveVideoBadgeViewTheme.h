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
