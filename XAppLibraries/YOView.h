//
#ifndef YOView_h
#define YOView_h
@import Foundation;

#include "YOLayout.h"

@class UIView;

@interface YOView : UIView

@property (retain, nonatomic) YOLayout *layout;

/* instance methods */
- (void)viewInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setNeedsLayout;
- (void)layoutView;

@end

#endif /* YOView_h */
