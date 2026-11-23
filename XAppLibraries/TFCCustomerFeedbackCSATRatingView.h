//
#ifndef TFCCustomerFeedbackCSATRatingView_h
#define TFCCustomerFeedbackCSATRatingView_h
@import Foundation;

#include "TFCCustomerFeedbackBaseRatingView.h"

@class NSArray, UILabel, UIStackView, UIView;

@interface TFCCustomerFeedbackCSATRatingView : TFCCustomerFeedbackBaseRatingView

@property (readonly, nonatomic) UIView *centerLine;
@property (readonly, nonatomic) UILabel *unsatisfiedLabel;
@property (readonly, nonatomic) UILabel *satisfiedLabel;
@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) NSArray *buttons;
@property (retain, nonatomic) NSArray *currentConstraints;
@property (nonatomic) double lastSetupWidth;

/* class methods */
+ (double)intrinsicHeightForWidth:(double)width;
+ (_Bool)shouldDisplayWideFormatForWidth:(double)width;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateConstraints;
- (unsigned long long)minValue;
- (unsigned long long)maxValue;
- (void)resetSelection;
- (void)_buttonTapped:(id)tapped;
- (double)_getButtonsRowSideMargins;

@end

#endif /* TFCCustomerFeedbackCSATRatingView_h */
