//
#ifndef TFNLayoutMetricsComputation_h
#define TFNLayoutMetricsComputation_h
@import Foundation;

#include "TFNLayoutMetricsInputs.h"
#include "TFNLayoutMetricsOutputs.h"

@class NSObject;

@interface TFNLayoutMetricsComputation : NSObject {
    /* instance variables */
    long long _parametersVersion;
}

@property (readonly, nonatomic) TFNLayoutMetricsInputs *inputs;
@property (readonly, nonatomic) TFNLayoutMetricsOutputs *outputs;

/* class methods */
+ (id)_computeOutputsForUncustomizedInputs:(id)inputs;
+ (void)_updateDerivativeValuesInOutputs:(id)outputs isBodyBelowAvatar:(_Bool)avatar extendedUsernamePadding:(double)padding;
+ (_Bool)_adjustOutputs:(id)outputs forCanvasWidthWithInputs:(id)inputs;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_computeHorizontalSafeAreaInsetsForCanvasWidth:(double)width window:(id)window traitCollection:(id)collection;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_computeBarItemInsetsForHorizontalSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets window:(id)window;
+ (double)_floorValue:(double)value displayScale:(double)scale minValue:(double)value;
+ (double)_ceilValue:(double)value displayScale:(double)scale;

/* instance methods */
- (id)initWithInputs:(id)inputs;
- (id)computationAdjustedForCustomInputs:(id)inputs;
- (void)_applyCustomizations;
- (_Bool)_applyCustomDisplayAreaInsetForLineLength;
- (_Bool)_applyCustomDisplayAreaEdgeInsets;
- (_Bool)_applyCustomHorizontalSafeAreaAndContentEdgeInsets;
- (_Bool)_applyCustomAvatarSize;
- (_Bool)_applyCustomAccessoryWidth;
- (_Bool)_applyCustomBodyBelowAvatar;

@end

#endif /* TFNLayoutMetricsComputation_h */
