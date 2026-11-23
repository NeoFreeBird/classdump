//
#ifndef T1LiveEventCardViewCardTheme_h
#define T1LiveEventCardViewCardTheme_h
@import Foundation;

#include "T1LiveEventCardViewTheme-Protocol.h"

@class NSObject, NSString, UIColor, UIFont;

@interface T1LiveEventCardViewCardTheme : NSObject <T1LiveEventCardViewTheme>

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

#endif /* T1LiveEventCardViewCardTheme_h */
