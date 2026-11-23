//
#ifndef PTVPreBroadcastHeaderView_h
#define PTVPreBroadcastHeaderView_h
@import Foundation;

#include "PTVExtendedButton.h"

@class UIView;

@interface PTVPreBroadcastHeaderView : UIView

@property (retain, nonatomic) PTVExtendedButton *backButton;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })calculateLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)updateBackButtonHitTestInsets;

@end

#endif /* PTVPreBroadcastHeaderView_h */
