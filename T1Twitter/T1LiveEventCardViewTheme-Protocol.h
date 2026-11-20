//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventCardViewTheme_Protocol_h
#define T1LiveEventCardViewTheme_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIColor, UIFont;

@protocol T1LiveEventCardViewTheme <NSObject>

@required

@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } labelLayoutMargins;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double borderWidth;
@property (readonly, copy, nonatomic) UIFont *titleFont;
@property (readonly, copy, nonatomic) UIColor *titleColor;
@property (readonly, nonatomic) long long titleNumberOfLines;
@property (readonly, copy, nonatomic) UIFont *categoryFont;
@property (readonly, copy, nonatomic) UIColor *categoryColor;
@property (readonly, copy, nonatomic) UIFont *badgeFont;
@property (readonly, copy, nonatomic) UIColor *badgeColor;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } badgeLabelLayoutMargins;
@property (readonly, nonatomic) double labelSpacing;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } controlBarLayoutMargins;

@optional

@end

#endif /* T1LiveEventCardViewTheme_Protocol_h */
