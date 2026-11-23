//
#ifndef T1LiveEventAuthorAttributionCardTheme_h
#define T1LiveEventAuthorAttributionCardTheme_h
@import Foundation;

#include "T1LiveEventAuthorAttributionTheme-Protocol.h"

@class NSObject, NSString, UIColor, UIFont;

@interface T1LiveEventAuthorAttributionCardTheme : NSObject <T1LiveEventAuthorAttributionTheme>

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

#endif /* T1LiveEventAuthorAttributionCardTheme_h */
