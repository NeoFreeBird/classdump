//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppealPivotViewModelProtocol_Protocol_h
#define T1AppealPivotViewModelProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSAttributedString, NSString, UIColor, UIFont, UIImage;

@protocol T1AppealPivotViewModelProtocol <NSObject>

@required

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } directionalLayoutMargins;
@property (readonly, nonatomic) double interItemSpacing;
@property (readonly, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) UIFont *textFont;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, copy, nonatomic) NSAttributedString *formattedTextTitle;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredIconImageSize;
@property (readonly, copy, nonatomic) NSString *accessibilityString;
@property (readonly, copy, nonatomic) NSString *accessibilityHint;
@property (readonly, nonatomic) _Bool isAccessibilityElement;

@optional

@end

#endif /* T1AppealPivotViewModelProtocol_Protocol_h */
