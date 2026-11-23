//
#ifndef T1ProfileCalloutTextCell_h
#define T1ProfileCalloutTextCell_h
@import Foundation;

#include "T1ProfileCalloutArrowDecorationView.h"

@class TFNTextCell, UIButton;

@interface T1ProfileCalloutTextCell : TFNTextCell

@property (retain, nonatomic) T1ProfileCalloutArrowDecorationView *arrowView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (copy, nonatomic) id /* block */ dismissBlock;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)calculatedLayoutMetrics;
- (void)_dismissTapAction;
- (void)layoutSubviews;

@end

#endif /* T1ProfileCalloutTextCell_h */
