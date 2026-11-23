//
#ifndef PTVActionSheetHeaderView_h
#define PTVActionSheetHeaderView_h
@import Foundation;

@class UILabel, UIView;

@interface PTVActionSheetHeaderView : UIView

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIView *titleBackgroundView;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithAttributedTitle:(id)title;

@end

#endif /* PTVActionSheetHeaderView_h */
