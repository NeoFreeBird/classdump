//
#ifndef PTVPillButton_h
#define PTVPillButton_h
@import Foundation;

#include "PTVButton.h"

@interface PTVPillButton : PTVButton

@property (nonatomic) double imageAlpha;
@property (nonatomic) unsigned long long contentInsetStyle;
@property (nonatomic) double spacingBetweenLeadingImageAndTitle;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)executeState;
- (void)updateImageAlpha;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForStyle:(unsigned long long)style;
- (void)updateInsets;
- (double)cornerRadiusFromCurrentState;
- (void)updateCornerRadius;

@end

#endif /* PTVPillButton_h */
