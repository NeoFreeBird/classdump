//
#ifndef XDSButtonDisplayStyle_h
#define XDSButtonDisplayStyle_h
@import Foundation;

#include "XDSButtonBackground.h"
#include "XDSButtonBorder.h"

@class NSObject, UIColor;

@interface XDSButtonDisplayStyle : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 style;
}

@property (nonatomic, readonly) XDSButtonBackground *background;
@property (nonatomic, readonly) UIColor *foregroundColor;
@property (nonatomic, readonly) XDSButtonBorder *border;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)primaryFilled;
+ (id)primaryFilledLight;
+ (id)primaryFilledDark;
+ (id)secondaryFilled;
+ (id)outlined;
+ (id)transparent;
+ (id)transparentLight;
+ (id)transparentDark;
+ (id)destructiveFilled;
+ (id)destructiveOutlined;
+ (id)blurred;
+ (id)blurredLight;
+ (id)blurredDark;
+ (id)barItem;
+ (id)barItemWithTint:(id)tint foreground:(id)foreground;
+ (id)customWithBackground:(id)background foregroundColor:(id)color border:(id)border;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* XDSButtonDisplayStyle_h */
