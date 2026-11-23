//
#ifndef T1MediaAppCardViewModel_h
#define T1MediaAppCardViewModel_h
@import Foundation;

#include "T1AppCardDetailsViewModel-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSArray, NSObject, NSString, TFCImageSpec, TFNTwitterCardContext, UIColor;

@interface T1MediaAppCardViewModel : NSObject <T1AppCardDetailsViewModel> {
    /* instance variables */
    _Bool _ratingsViewEnabled;
    double _minimumRatingThreshold;
}

@property (retain, nonatomic) id <TFSTwitterCanonicalUser> primaryUser;
@property (retain, nonatomic) TFCImageSpec *imageSpec;
@property (nonatomic) struct CGSize { double x0; double x1; } playerDimensionsOrAspectRatio;
@property (readonly, nonatomic) TFNTwitterCardContext *cardContext;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *ratingsText;
@property (readonly, nonatomic) NSString *detailText;
@property (readonly, nonatomic) NSString *callToAction;
@property (readonly, nonatomic) NSArray *starImages;
@property (readonly, nonatomic) NSString *callToActionEventType;
@property (readonly, nonatomic) NSString *imageTapEventType;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) long long displayMode;
@property (readonly, nonatomic) NSString *imageURLString;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mediaDimensions;
@property (readonly, nonatomic) double mediaAspectRatio;
@property (readonly, nonatomic) double videoDuration;
@property (readonly, nonatomic) NSString *userFullName;
@property (readonly, nonatomic) _Bool useRoundedCorners;
@property (nonatomic) _Bool shouldShowFullScreen;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCardContext:(id)context;
- (void)dealloc;
- (_Bool)shouldUseRoundedCorners;
- (_Bool)shouldShowSubtitleLabel;
- (_Bool)shouldUseSmallImage;
- (_Bool)shouldUseUnifiedDesign;
- (_Bool)shouldUseFixedHeight;
- (_Bool)shouldShowStarsView;
- (_Bool)shouldShowAppCategoryLabel;
- (_Bool)shouldUseSmallStars;
- (_Bool)shouldRightAlignCallToAction;
- (_Bool)shouldHideCTA;
- (_Bool)shouldShowLargerCTA;
- (_Bool)shouldShowSubtitle;
- (void)_userDidUpdate:(id)update;

@end

#endif /* T1MediaAppCardViewModel_h */
