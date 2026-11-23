//
#ifndef TFNUIDefaultFontGroup_h
#define TFNUIDefaultFontGroup_h
@import Foundation;

#include "TFNUIFontGroup-Protocol.h"

@class NSObject, NSString, UIFont;

@interface TFNUIDefaultFontGroup : NSObject <TFNUIFontGroup>

@property (readonly, nonatomic) UIFont *subtext3Font;
@property (readonly, nonatomic) UIFont *subtext3MediumFont;
@property (readonly, nonatomic) UIFont *subtext3BoldFont;
@property (readonly, nonatomic) UIFont *subtext2Font;
@property (readonly, nonatomic) UIFont *subtext2MediumFont;
@property (readonly, nonatomic) UIFont *subtext2BoldFont;
@property (readonly, nonatomic) UIFont *subtext1Font;
@property (readonly, nonatomic) UIFont *subtext1MediumFont;
@property (readonly, nonatomic) UIFont *subtext1BoldFont;
@property (readonly, nonatomic) UIFont *bodyFont;
@property (readonly, nonatomic) UIFont *bodyMediumFont;
@property (readonly, nonatomic) UIFont *bodyBoldFont;
@property (readonly, nonatomic) UIFont *headline2Font;
@property (readonly, nonatomic) UIFont *headline2MediumFont;
@property (readonly, nonatomic) UIFont *headline2BoldFont;
@property (readonly, nonatomic) UIFont *headline2HeavyFont;
@property (readonly, nonatomic) UIFont *headline1Font;
@property (readonly, nonatomic) UIFont *headline1MediumFont;
@property (readonly, nonatomic) UIFont *headline1BoldFont;
@property (readonly, nonatomic) UIFont *headline1HeavyFont;
@property (readonly, nonatomic) UIFont *title4Font;
@property (readonly, nonatomic) UIFont *title4BoldFont;
@property (readonly, nonatomic) UIFont *title4HeavyFont;
@property (readonly, nonatomic) UIFont *title3Font;
@property (readonly, nonatomic) UIFont *title3BoldFont;
@property (readonly, nonatomic) UIFont *title3HeavyFont;
@property (readonly, nonatomic) UIFont *title2Font;
@property (readonly, nonatomic) UIFont *title2BoldFont;
@property (readonly, nonatomic) UIFont *title2HeavyFont;
@property (readonly, nonatomic) UIFont *title1Font;
@property (readonly, nonatomic) UIFont *title1BoldFont;
@property (readonly, nonatomic) UIFont *title1HeavyFont;
@property (readonly, nonatomic) UIFont *fixedSubtext3Font;
@property (readonly, nonatomic) UIFont *fixedSubtext3MediumFont;
@property (readonly, nonatomic) UIFont *fixedSubtext3BoldFont;
@property (readonly, nonatomic) UIFont *fixedSubtext2Font;
@property (readonly, nonatomic) UIFont *fixedSubtext2MediumFont;
@property (readonly, nonatomic) UIFont *fixedSubtext2BoldFont;
@property (readonly, nonatomic) UIFont *fixedSubtext1Font;
@property (readonly, nonatomic) UIFont *fixedSubtext1MediumFont;
@property (readonly, nonatomic) UIFont *fixedSubtext1BoldFont;
@property (readonly, nonatomic) UIFont *fixedBodyFont;
@property (readonly, nonatomic) UIFont *fixedBodyMediumFont;
@property (readonly, nonatomic) UIFont *fixedBodyBoldFont;
@property (readonly, nonatomic) UIFont *fixedHeadline2Font;
@property (readonly, nonatomic) UIFont *fixedHeadline2MediumFont;
@property (readonly, nonatomic) UIFont *fixedHeadline2BoldFont;
@property (readonly, nonatomic) UIFont *fixedHeadline2HeavyFont;
@property (readonly, nonatomic) UIFont *fixedHeadline1Font;
@property (readonly, nonatomic) UIFont *fixedHeadline1MediumFont;
@property (readonly, nonatomic) UIFont *fixedHeadline1BoldFont;
@property (readonly, nonatomic) UIFont *fixedHeadline1HeavyFont;
@property (readonly, nonatomic) UIFont *fixedTitle4Font;
@property (readonly, nonatomic) UIFont *fixedTitle4BoldFont;
@property (readonly, nonatomic) UIFont *fixedTitle4HeavyFont;
@property (readonly, nonatomic) UIFont *fixedTitle3Font;
@property (readonly, nonatomic) UIFont *fixedTitle3BoldFont;
@property (readonly, nonatomic) UIFont *fixedTitle3HeavyFont;
@property (readonly, nonatomic) UIFont *fixedTitle2Font;
@property (readonly, nonatomic) UIFont *fixedTitle2BoldFont;
@property (readonly, nonatomic) UIFont *fixedTitle2HeavyFont;
@property (readonly, nonatomic) UIFont *fixedTitle1Font;
@property (readonly, nonatomic) UIFont *fixedTitle1BoldFont;
@property (readonly, nonatomic) UIFont *fixedTitle1HeavyFont;
@property (readonly, nonatomic) UIFont *xSmallFont;
@property (readonly, nonatomic) UIFont *xSmallBoldFont;
@property (readonly, nonatomic) UIFont *smallFont;
@property (readonly, nonatomic) UIFont *smallBoldFont;
@property (readonly, nonatomic) UIFont *normalFont;
@property (readonly, nonatomic) UIFont *normalBoldFont;
@property (readonly, nonatomic) UIFont *largeFont;
@property (readonly, nonatomic) UIFont *largeBoldFont;
@property (readonly, nonatomic) UIFont *xLargeFont;
@property (readonly, nonatomic) UIFont *xLargeBoldFont;
@property (readonly, nonatomic) UIFont *jumboFont;
@property (readonly, nonatomic) UIFont *jumboBoldFont;
@property (readonly, nonatomic) UIFont *fixedSmallFont;
@property (readonly, nonatomic) UIFont *fixedSmallBoldFont;
@property (readonly, nonatomic) UIFont *fixedNormalFont;
@property (readonly, nonatomic) UIFont *fixedNormalBoldFont;
@property (readonly, nonatomic) UIFont *fixedLargeFont;
@property (readonly, nonatomic) UIFont *fixedLargeBoldFont;
@property (readonly, nonatomic) UIFont *fixedXLargeFont;
@property (readonly, nonatomic) UIFont *fixedXLargeBoldFont;
@property (readonly, nonatomic) UIFont *fixedJumboFont;
@property (readonly, nonatomic) UIFont *fixedJumboBoldFont;
@property (readonly, nonatomic) UIFont *contentTitleFont;
@property (readonly, nonatomic) UIFont *contentDetailFont;
@property (readonly, nonatomic) UIFont *contentSubtextFont;
@property (readonly, nonatomic) UIFont *contentFooterFont;
@property (readonly, nonatomic) UIFont *navigationTitleFont;
@property (readonly, nonatomic) UIFont *navigationSubtitleFont;
@property (readonly, nonatomic) UIFont *navigationButtonFont;
@property (readonly, nonatomic) UIFont *userCellDetailFont;
@property (readonly, nonatomic) UIFont *userCellFullNameLargeFont;
@property (readonly, nonatomic) UIFont *pillControlFont;
@property (readonly, nonatomic) UIFont *tabBadgeFont;
@property (readonly, nonatomic) UIFont *tokenControlFont;
@property (readonly, nonatomic) UIFont *buttonMediumFont;
@property (readonly, nonatomic) UIFont *coverDetailTextFont;
@property (readonly, nonatomic) UIFont *coverPrimaryTextBoldFont;
@property (readonly, nonatomic) UIFont *coverPrimaryTextFont;
@property (readonly, nonatomic) UIFont *coverSecondaryTextBoldFont;
@property (readonly, nonatomic) UIFont *coverSecondaryTextFont;
@property (readonly, nonatomic) UIFont *formCharacterCounterFont;
@property (readonly, nonatomic) UIFont *formCustomDetailFont;
@property (readonly, nonatomic) UIFont *formDestructiveFont;
@property (readonly, nonatomic) UIFont *formEmphasizedTextFieldFont;
@property (readonly, nonatomic) UIFont *formFieldErrorFont;
@property (readonly, nonatomic) UIFont *formFieldFloatingHintFont;
@property (readonly, nonatomic) UIFont *formFieldPinCodeFont;
@property (readonly, nonatomic) UIFont *formFieldSupplementaryTextFont;
@property (readonly, nonatomic) UIFont *formFieldTitleFont;
@property (readonly, nonatomic) UIFont *formTextFieldFont;
@property (readonly, nonatomic) UIFont *promptSeparatorFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedFontGroup;

/* instance methods */
- (id)fontOfSize:(double)size;
- (id)mediumFontOfSize:(double)size;
- (id)boldFontOfSize:(double)size;
- (id)heavyFontOfSize:(double)size;
- (id)monospacedDigitFontOfSize:(double)size weight:(double)weight;

@end

#endif /* TFNUIDefaultFontGroup_h */
