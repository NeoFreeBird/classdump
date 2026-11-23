//
#ifndef TFNLegacyFormFieldSupplementaryTextView_h
#define TFNLegacyFormFieldSupplementaryTextView_h
@import Foundation;

#include "TFNLegacyFormAppearance.h"

@class UILabel, UIView;

@interface TFNLegacyFormFieldSupplementaryTextView : UIView

@property (readonly, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) TFNLegacyFormAppearance *appearance;

/* class methods */
+ (double)heightForText:(id)text withFormFieldWidth:(double)width appearance:(id)appearance layoutMetrics:(id)metrics;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;

@end

#endif /* TFNLegacyFormFieldSupplementaryTextView_h */
