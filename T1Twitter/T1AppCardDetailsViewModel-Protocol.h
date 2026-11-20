//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppCardDetailsViewModel_Protocol_h
#define T1AppCardDetailsViewModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, UIColor;

@protocol T1AppCardDetailsViewModel <NSObject>

@required

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *detailText;
@property (readonly, nonatomic) NSString *ratingsText;
@property (readonly, nonatomic) NSString *callToAction;
@property (readonly, nonatomic) double ratingScore;
@property (readonly, nonatomic) unsigned long long numberOfLinesPermittedInTitle;
@property (readonly, nonatomic) _Bool useFixedHeight;
@property (readonly, nonatomic) _Bool showStarsView;
@property (readonly, nonatomic) _Bool useSmallStars;
@property (readonly, nonatomic) _Bool showAppCategoryLabel;
@property (readonly, nonatomic) _Bool showSubtitleLabel;
@property (readonly, nonatomic) _Bool hideCTA;
@property (readonly, nonatomic) _Bool showLargerCTA;
@property (readonly, nonatomic) _Bool showSubtitle;
@property (readonly, nonatomic) _Bool rightAlignCallToAction;
@property (readonly, nonatomic) _Bool useSmallImage;
@property (readonly, nonatomic) _Bool useUnifiedDesign;
@property (readonly, nonatomic) _Bool hasAppCategory;
@property (readonly, nonatomic) double imageWidth;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) unsigned long long cardType;
@property (readonly, nonatomic) NSString *appCategory;
@property (readonly, nonatomic) UIColor *dominantColor;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *textDetailsColor;

/* required instance methods */
- (_Bool)shouldUseFixedHeight;
- (_Bool)shouldShowStarsView;
- (_Bool)shouldUseSmallStars;
- (_Bool)shouldShowAppCategoryLabel;
- (_Bool)shouldShowSubtitleLabel;
- (_Bool)shouldHideCTA;
- (_Bool)shouldShowLargerCTA;
- (_Bool)shouldShowSubtitle;
- (_Bool)shouldRightAlignCallToAction;
- (_Bool)shouldUseSmallImage;
- (_Bool)shouldUseUnifiedDesign;

@optional

@end

#endif /* T1AppCardDetailsViewModel_Protocol_h */
