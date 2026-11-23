//
#ifndef T1LiveEventAuthorAttributionHeaderTheme_h
#define T1LiveEventAuthorAttributionHeaderTheme_h
@import Foundation;

#include "T1LiveEventAuthorAttributionTheme-Protocol.h"

@class NSObject, NSString, UIColor, UIFont;

@interface T1LiveEventAuthorAttributionHeaderTheme : NSObject <T1LiveEventAuthorAttributionTheme>

@property (readonly, copy, nonatomic) UIFont *authorUserFullnameFont;
@property (readonly, copy, nonatomic) UIColor *authorUserFullnameColor;
@property (readonly, copy, nonatomic) UIFont *authorUserHandleFont;
@property (readonly, copy, nonatomic) UIColor *authorUserHandleColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (double)avatarHeightWithLayoutMetrics:(id)metrics;
- (id)viewContainingAvatarImageView:(id)view fullNameLabel:(id)label badgesImageView:(id)view handleLabel:(id)label;

@end

#endif /* T1LiveEventAuthorAttributionHeaderTheme_h */
