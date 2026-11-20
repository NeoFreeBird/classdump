//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SoftInterventionPivotViewModel_h
#define T1SoftInterventionPivotViewModel_h
@import Foundation;

#include "T1SoftInterventionPivotViewModelProtocol-Protocol.h"

@class NSAttributedString, NSObject, NSString, TFNTwitterAccount, TFSTwitterForwardPivot, UIColor, UIFont, UIImage;

@interface T1SoftInterventionPivotViewModel : NSObject <T1SoftInterventionPivotViewModelProtocol>

@property (retain, nonatomic) TFSTwitterForwardPivot *forwardPivot;
@property (retain, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) _Bool isLimitedActionsNonCompliant;
@property (readonly, nonatomic) _Bool isQuotedTweet;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) double misinfoCornerRadius;
@property (readonly, nonatomic) UIImage *misinfoIconImage;
@property (readonly, nonatomic) UIColor *misinfoIconColor;
@property (readonly, copy, nonatomic) NSString *misinfoIconImageName;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } misinfoIconImageSize;
@property (readonly, copy, nonatomic) NSString *misinfoTitleText;
@property (readonly, copy, nonatomic) NSAttributedString *misinfoBodyText;
@property (readonly, nonatomic) UIFont *misinfoTitleFont;
@property (readonly, nonatomic) UIFont *misinfoBodyFont;
@property (readonly, nonatomic) UIColor *misinfoTitleTextColor;
@property (readonly, nonatomic) UIColor *misinfoBodyTextColor;
@property (readonly, nonatomic) long long maxNumberOfLines;
@property (readonly, nonatomic) _Bool shouldShowTitle;
@property (readonly, nonatomic) UIImage *misinfoChevronImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } misinfoChevronImageSize;
@property (readonly, nonatomic) _Bool shouldShowChevron;
@property (readonly, nonatomic) UIColor *horizontalLineColor;
@property (readonly, nonatomic) NSString *misinfoFooterText;
@property (readonly, nonatomic) UIFont *misinfoFooterTextFont;
@property (readonly, nonatomic) UIColor *misinfoFooterTextColor;
@property (readonly, nonatomic) _Bool shouldShowFooter;
@property (readonly, nonatomic) _Bool hasMisinfoImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredChevronImageSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredIconImageSize;
@property (readonly, nonatomic) double horizontalLineHeight;
@property (readonly, nonatomic) NSString *accessibilityString;
@property (readonly, nonatomic) UIColor *misinfoBorderColor;
@property (readonly, nonatomic) double misinfoBorderWidth;
@property (readonly, copy, nonatomic) NSString *landingUrlString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)shouldDisplaySoftInterventionPivotForStatusViewModel:(id)model account:(id)account;

/* instance methods */
- (id)initWithForwardPivot:(id)pivot account:(id)account;
- (id)initWithForwardPivot:(id)pivot account:(id)account restrictedActions:(unsigned long long)actions isQuoted:(_Bool)quoted;
- (id)init;
- (id)misinfoChevronColor;
- (_Bool)shouldShowRelatedMomentPivot;
- (_Bool)isEqual:(id)equal;

@end

#endif /* T1SoftInterventionPivotViewModel_h */
