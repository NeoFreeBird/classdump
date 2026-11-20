//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
