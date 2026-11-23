//
#ifndef PTVDividerView_h
#define PTVDividerView_h
@import Foundation;

@class UIView;

@interface PTVDividerView : UIView

@property (nonatomic) long long dividerStyle;
@property (readonly, nonatomic) long long orientation;
@property (nonatomic) double thickness;

/* class methods */
+ (id)lightVerticalDivider;
+ (id)darkVerticalDivider;
+ (id)lightHorizontalDivider;
+ (id)darkHorizontalDivider;
+ (id)transparentHorizontalDivider;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithStyle:(long long)style orientation:(long long)orientation;
- (void)setupPTVDividerView;

@end

#endif /* PTVDividerView_h */
