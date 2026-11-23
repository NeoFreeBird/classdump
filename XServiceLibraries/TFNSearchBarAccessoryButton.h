//
#ifndef TFNSearchBarAccessoryButton_h
#define TFNSearchBarAccessoryButton_h
@import Foundation;

#include "TFNButton.h"

@interface TFNSearchBarAccessoryButton : TFNButton

@property (nonatomic) double fixedWidth;
@property (nonatomic) double tfn_alpha;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setAlpha:(double)alpha;

@end

#endif /* TFNSearchBarAccessoryButton_h */
