//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppealFreedomOfSpeechAuthorPivotView_h
#define T1AppealFreedomOfSpeechAuthorPivotView_h
@import Foundation;

#include "T1AppealFreedomOfSpeechAuthorPivotViewDelegate-Protocol.h"
#include "T1AppealFreedomOfSpeechAuthorPivotViewModel.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class NSString, TFNAttributedTextView, TFNSolidColorView, UIImageView, UIStackView, UITapGestureRecognizer;

@interface T1AppealFreedomOfSpeechAuthorPivotView : TFNSolidColorView <TFNLayoutMetricsEnvironment, TFNAttributedTextViewDelegate>

@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) T1AppealFreedomOfSpeechAuthorPivotViewModel *authorPivotViewModel;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapRecognizer;
@property (retain, nonatomic) TFNAttributedTextView *displayTextLabel;
@property (weak, nonatomic) id <T1AppealFreedomOfSpeechAuthorPivotViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)preferredHeightForViewModel:(id)model appealPivotWidth:(double)width;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setViewModel:(id)model;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)_t1_didSingleTap:(id)tap;

@end

#endif /* T1AppealFreedomOfSpeechAuthorPivotView_h */
