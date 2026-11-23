//
#ifndef T1LiveEventAuthorAttributionTheme_Protocol_h
#define T1LiveEventAuthorAttributionTheme_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIColor, UIFont;

@protocol T1LiveEventAuthorAttributionTheme <NSObject>

@required

@property (readonly, copy, nonatomic) UIFont *authorUserFullnameFont;
@property (readonly, copy, nonatomic) UIColor *authorUserFullnameColor;
@property (readonly, copy, nonatomic) UIFont *authorUserHandleFont;
@property (readonly, copy, nonatomic) UIColor *authorUserHandleColor;

/* required instance methods */
- (double)avatarHeightWithLayoutMetrics:(id)metrics;
- (id)viewContainingAvatarImageView:(id)view fullNameLabel:(id)label badgesImageView:(id)view handleLabel:(id)label;

@optional

@end

#endif /* T1LiveEventAuthorAttributionTheme_Protocol_h */
