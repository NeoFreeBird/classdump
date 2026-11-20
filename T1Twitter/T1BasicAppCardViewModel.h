//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BasicAppCardViewModel_h
#define T1BasicAppCardViewModel_h
@import Foundation;

#include "T1AppCardDetailsViewModel-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSObject, NSString, TFCCardData, TFNTwitterAccount, UIColor;

@interface T1BasicAppCardViewModel : NSObject <T1AppCardDetailsViewModel>

@property (retain, nonatomic) TFCCardData *cardData;
@property (nonatomic) long long displayMode;
@property (retain, nonatomic) NSString *appCategory;
@property (retain, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *detailText;
@property (readonly, nonatomic) NSString *secondDetailText;
@property (readonly, nonatomic) _Bool showExpandedDetails;
@property (readonly, nonatomic) NSString *callToAction;
@property (readonly, nonatomic) NSString *callToActionEventType;
@property (readonly, nonatomic) _Bool showFullWidthButton;
@property (readonly, nonatomic) _Bool showAttribution;
@property (readonly, nonatomic) _Bool useDetailsView;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> primaryUser;
@property (readonly, nonatomic) NSString *userFullName;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) _Bool showDescription;
@property (readonly, nonatomic) _Bool shouldShowBorder;
@property (readonly, nonatomic) _Bool hasImageBackground;
@property (readonly, nonatomic) UIColor *dominantColor;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *textDetailsColor;
@property (readonly, nonatomic) NSString *imageURLString;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageDimensions;
@property (readonly, nonatomic) NSString *ratingsText;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)imageContentMode;

/* instance methods */
- (id)initWithCardContext:(id)context;
- (void)dealloc;
- (_Bool)shouldUseFixedHeight;
- (_Bool)shouldShowStarsView;
- (_Bool)shouldUseSmallStars;
- (_Bool)shouldShowSubtitleLabel;
- (_Bool)shouldRightAlignCallToAction;
- (_Bool)shouldUseSmallImage;
- (_Bool)shouldShowAppCategoryLabel;
- (_Bool)shouldUseUnifiedDesign;
- (_Bool)shouldHideCTA;
- (_Bool)shouldShowLargerCTA;
- (_Bool)shouldShowSubtitle;
- (void)_userDidUpdate:(id)update;
- (id)_textForPrice;

@end

#endif /* T1BasicAppCardViewModel_h */
