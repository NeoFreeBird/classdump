//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1InfoTextLayoutSpec_Protocol_h
#define T1InfoTextLayoutSpec_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSSet, NSString, UIColor, UIFont;

@protocol T1InfoTextLayoutSpec <NSObject>

@required

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *details;
@property (nonatomic, readonly) NSSet *titleHyperlinks;
@property (nonatomic, readonly) NSSet *detailsHyperlinks;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic, readonly) NSString *badgeName;
@property (nonatomic, readonly) UIColor *badgeFillColor;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } badgeSize;
@property (nonatomic, readonly) _Bool isTitleMultiline;
@property (nonatomic, readonly) _Bool renderFromRight;
@property (nonatomic, readonly) _Bool hasSponsorship;
@property (nonatomic, readonly) NSString *sponsorshipScribeComponent;
@property (nonatomic, readonly) _Bool showCaretButton;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } caretButtonSize;

/* required instance methods */
- (_Bool)isEqualToLayoutSpec:(id)spec;
- (_Bool)isEqualToLayoutSpec:(id)spec;

@optional

@end

#endif /* T1InfoTextLayoutSpec_Protocol_h */
