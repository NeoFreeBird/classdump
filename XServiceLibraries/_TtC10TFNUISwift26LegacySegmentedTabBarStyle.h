//
#ifndef _TtC10TFNUISwift26LegacySegmentedTabBarStyle_h
#define _TtC10TFNUISwift26LegacySegmentedTabBarStyle_h
@import Foundation;

@class NSObject, Swift.Bool, UIColor, UIFont, _$s12CoreGraphics7CGFloatVMn, _$sSo6UIFontC, _$sSo7UIColorC;

@interface TFNUISwift.LegacySegmentedTabBarStyle : NSObject // (Swift)

@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIColor *deselectedTextColor;
@property (nonatomic, retain) UIColor *selectedTextColor;
@property (nonatomic, retain) UIColor *accessoryColor;
@property (nonatomic, retain) UIColor *highlightBarColor;
@property (nonatomic) double highlightBarHeight;
@property (nonatomic) _Bool showsHighlightBar;
@property (nonatomic) _Bool useEqualWidthTabsIfPossible;
@property (nonatomic) double minimumInterTabSpacing;
@property (nonatomic) double iconSize;
@property (nonatomic, readonly) UIFont *dynamicFont;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10TFNUISwift26LegacySegmentedTabBarStyle_h */
