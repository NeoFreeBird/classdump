//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLegacyFormFieldErrorView_h
#define TFNLegacyFormFieldErrorView_h
@import Foundation;

#include "TFNLegacyFormAppearance.h"

@class UILabel, UIView;

@interface TFNLegacyFormFieldErrorView : UIView

@property (readonly, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) TFNLegacyFormAppearance *appearance;

/* class methods */
+ (double)heightForMessage:(id)message withFormFieldWidth:(double)width appearance:(id)appearance layoutMetrics:(id)metrics;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)animateErrorViewMaskForLayoutMetrics:(id)metrics showError:(_Bool)error;
- (void)addErrorViewMaskWithVisibleHeight:(double)height layoutMetrics:(id)metrics replaceIfExists:(_Bool)exists;

@end

#endif /* TFNLegacyFormFieldErrorView_h */
