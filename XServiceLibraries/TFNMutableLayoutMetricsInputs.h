//
#ifndef TFNMutableLayoutMetricsInputs_h
#define TFNMutableLayoutMetricsInputs_h
@import Foundation;

#include "TFNLayoutMetricsInputs.h"

@interface TFNMutableLayoutMetricsInputs : TFNLayoutMetricsInputs

/* instance methods */
- (void)setCanvasWidth:(double)width;
- (void)setWindow:(id)window;
- (void)setVisibleWindowHeight:(double)height;
- (void)setTraitCollection:(id)collection;
- (void)setMetricsFont:(id)font;
- (void)setCustomInsetDisplayAreaForLineLength:(id)length;
- (void)setCustomDisplayAreaEdgeInsets:(id)insets;
- (void)setCustomContentEdgeInsets:(id)insets;
- (void)setCustomHorizontalSafeAreaInsets:(id)insets;
- (void)setCustomAccessoryWidth:(id)width;
- (void)setCustomAvatarSize:(id)size;
- (void)setCustomBodyBelowAvatar:(id)avatar;
- (void)setCustomUsernameExtendedPadding:(double)padding;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFNMutableLayoutMetricsInputs_h */
