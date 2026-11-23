//
#ifndef T1AppealFreedomOfSpeechAuthorPivotViewModel_h
#define T1AppealFreedomOfSpeechAuthorPivotViewModel_h
@import Foundation;

#include "T1AppealFreedomOfSpeechAuthorPivotViewModelProtocol-Protocol.h"

@class NSObject, NSString, TFNAttributedActiveTextModel, TFSTwitterAppealable, UIColor;

@interface T1AppealFreedomOfSpeechAuthorPivotViewModel : NSObject <T1AppealFreedomOfSpeechAuthorPivotViewModelProtocol>

@property (retain, nonatomic) TFNAttributedActiveTextModel *labelTextModel;
@property (readonly, nonatomic) TFSTwitterAppealable *appealable;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } directionalLayoutMargins;
@property (readonly, nonatomic) double interItemSpacing;
@property (readonly, copy, nonatomic) NSString *accessibilityString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)shouldDisplayAuthorAppealPivotForStatusViewModel:(id)model account:(id)account;

/* instance methods */
- (id)initWithAppealable:(id)appealable;
- (struct CGSize { double x0; double x1; })preferredIconImageSize;
- (id)iconColor;
- (id)iconImageName;
- (id)iconImage;
- (id)textFont;
- (id)textColor;
- (id)_t1_buildLabelTextModel;
- (id)_t1_attributedActiveTextModelForRichText:(id)text;
- (_Bool)isEqual:(id)equal;

@end

#endif /* T1AppealFreedomOfSpeechAuthorPivotViewModel_h */
