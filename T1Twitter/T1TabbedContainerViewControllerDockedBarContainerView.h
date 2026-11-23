//
#ifndef T1TabbedContainerViewControllerDockedBarContainerView_h
#define T1TabbedContainerViewControllerDockedBarContainerView_h
@import Foundation;

@class NSLayoutConstraint, UIView;

@interface T1TabbedContainerViewControllerDockedBarContainerView : UIView

@property (readonly, nonatomic) NSLayoutConstraint *contentViewBottomLayoutConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *hiddenHeightConstraint;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long state;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithContentView:(id)view;
- (void)_t1_main_updateConstraints;

@end

#endif /* T1TabbedContainerViewControllerDockedBarContainerView_h */
