//
#ifndef T1AppealPivotViewModel_h
#define T1AppealPivotViewModel_h
@import Foundation;

#include "T1AppealPivotViewModelProtocol-Protocol.h"

@class NSAttributedString, NSObject, NSString, UIColor, UIFont, UIImage;

@interface T1AppealPivotViewModel : NSObject <T1AppealPivotViewModelProtocol>

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)iconColor;
- (id)iconImageName;
- (id)linkableText;

@end

#endif /* T1AppealPivotViewModel_h */
