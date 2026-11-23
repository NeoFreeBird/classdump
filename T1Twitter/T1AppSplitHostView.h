//
#ifndef T1AppSplitHostView_h
#define T1AppSplitHostView_h
@import Foundation;

@class UIView;

@interface T1AppSplitHostView : UIView

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) UIView *shadowView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *hostedView;
@property (readonly, nonatomic) UIView *overlayView;
@property (nonatomic) _Bool hasBorder;
@property (nonatomic) _Bool hasDivider;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double cornerRadius;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame hostedView:(id)view hasDivider:(_Bool)divider;
- (void)layoutSubviews;
- (void)_t1_layout;
- (void)_t1_updateDivider;

@end

#endif /* T1AppSplitHostView_h */
