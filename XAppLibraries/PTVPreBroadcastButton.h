//
#ifndef PTVPreBroadcastButton_h
#define PTVPreBroadcastButton_h
@import Foundation;

#include "PTVTooltipButton.h"

@class UIView;

@interface PTVPreBroadcastButton : PTVTooltipButton

@property (retain, nonatomic) UIView *backgroundCircularView;

/* class methods */
+ (id)buttonWithImage:(id)image target:(id)target action:(SEL)action accessibilityLabel:(id)label accessibilityHint:(id)hint tooltipText:(id)text tooltipSelectedText:(id)text tooltipErrorText:(id)text;
+ (id)buttonWithImageNamed:(id)named target:(id)target action:(SEL)action accessibilityLabel:(id)label accessibilityHint:(id)hint tooltipText:(id)text tooltipSelectedText:(id)text tooltipErrorText:(id)text;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setImage:(id)image;
- (void)setUnselectedImage:(id)image;
- (void)setDisabledImage:(id)image;
- (void)setupBackgroundCircularView;
- (void)layoutSubviews;
- (void)updateBackgroundView;

@end

#endif /* PTVPreBroadcastButton_h */
