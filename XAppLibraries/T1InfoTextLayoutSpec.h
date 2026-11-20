//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1InfoTextLayoutSpec_h
#define T1InfoTextLayoutSpec_h
@import Foundation;

#include "T1InfoTextLayoutSpec-Protocol.h"

@class NSObject, NSSet, NSString, UIColor, UIFont;

@interface T1InfoTextLayoutSpec : NSObject <T1InfoTextLayoutSpec>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *details;
@property (readonly, copy, nonatomic) NSSet *titleHyperlinks;
@property (readonly, copy, nonatomic) NSSet *detailsHyperlinks;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, copy, nonatomic) NSString *badgeName;
@property (readonly, nonatomic) UIColor *badgeFillColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } badgeSize;
@property (readonly, nonatomic) _Bool isTitleMultiline;
@property (readonly, nonatomic) _Bool renderFromRight;
@property (readonly, nonatomic) _Bool hasSponsorship;
@property (readonly, copy, nonatomic) NSString *sponsorshipScribeComponent;
@property (readonly, nonatomic) _Bool showCaretButton;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } caretButtonSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)layoutForViewModel:(id)model options:(unsigned long long)options willLayout:(_Bool)layout account:(id)account;
+ (id)layoutForViewModel:(id)model options:(unsigned long long)options willLayout:(_Bool)layout account:(id)account shouldSuppressShowingAdvertiser:(_Bool)advertiser;
+ (id)layoutForUserViewModel:(id)model options:(unsigned long long)options font:(id)font willLayout:(_Bool)layout;
+ (id)layoutForSetting:(id)setting options:(unsigned long long)options willLayout:(_Bool)layout;
+ (id)analyticsButtonLayoutForViewModel:(id)model options:(unsigned long long)options willLayout:(_Bool)layout;
+ (_Bool)shouldShowInfoTextForViewModel:(id)model options:(unsigned long long)options;

/* instance methods */
- (id)initWithBadgeName:(id)name badgeFillColor:(id)color title:(id)title details:(id)details titleHyperlinks:(id)hyperlinks detailsHyperlinks:(id)hyperlinks color:(id)color font:(id)font badgeSize:(struct CGSize { double x0; double x1; })size isTitleMultiline:(_Bool)multiline renderFromRight:(_Bool)right hasSponsorship:(_Bool)sponsorship sponsorshipScribeComponent:(id)component caretButtonSize:(struct CGSize { double x0; double x1; })size;
- (_Bool)isEqualToLayoutSpec:(id)spec;

@end

#endif /* T1InfoTextLayoutSpec_h */
