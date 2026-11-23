//
#ifndef XDSButtonSizeClass_h
#define XDSButtonSizeClass_h
@import Foundation;

@class NSObject, UIFont;

@interface XDSButtonSizeClass : NSObject // (Swift)

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) long long labelStyle;
@property (nonatomic, readonly) double iconSize;
@property (nonatomic, readonly) double hPaddingSmall;
@property (nonatomic, readonly) double hPaddingLarge;
@property (nonatomic, readonly) double hPaddingIcon;
@property (nonatomic, readonly) double spacing;
@property (nonatomic, readonly) double interButtonSpacing;
@property (nonatomic, readonly) UIFont *labelFont;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)xSmall;
+ (id)small;
+ (id)medium;
+ (id)large;
+ (id)xLarge;
+ (id)barItem;
+ (id)customWithHeight:(double)height labelStyle:(long long)style iconSize:(double)size hPaddingSmall:(double)small hPaddingLarge:(double)large hPaddingIcon:(double)icon spacing:(double)spacing interButtonSpacing:(double)spacing;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* XDSButtonSizeClass_h */
