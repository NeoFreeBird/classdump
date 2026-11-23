//
#ifndef TFNLegacyFormFieldCounterView_h
#define TFNLegacyFormFieldCounterView_h
@import Foundation;

#include "TFNLegacyFormAppearance.h"

@class UILabel, UIView;

@interface TFNLegacyFormFieldCounterView : UIView

@property (readonly, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) TFNLegacyFormAppearance *appearance;
@property (nonatomic) _Bool shouldUseDarkVariant;

/* class methods */
+ (struct CGSize { double x0; double x1; })fittingSizeWithLabelString:(id)string withAppearance:(id)appearance layoutMetrics:(id)metrics;

/* instance methods */
- (void)_t1_updateColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateCharacterCount:(long long)count withMaxCharacters:(long long)characters;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* TFNLegacyFormFieldCounterView_h */
