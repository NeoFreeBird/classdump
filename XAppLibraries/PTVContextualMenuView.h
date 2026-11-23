//
#ifndef PTVContextualMenuView_h
#define PTVContextualMenuView_h
@import Foundation;

#include "PTVContextualMenu.h"

@class NSLayoutConstraint, UIImpactFeedbackGenerator, UIStackView, UIView;

@interface PTVContextualMenuView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) _Bool isBeingDismissed;
@property (readonly, nonatomic) PTVContextualMenu *menu;

/* class methods */
+ (id)showMenu:(id)menu inSuperview:(id)superview belowView:(id)view;

/* instance methods */
- (id)initWithMenu:(id)menu;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)showInSuperview:(id)superview belowView:(id)view;
- (void)tapOnButton:(id)button;
- (void)dismiss;

@end

#endif /* PTVContextualMenuView_h */
