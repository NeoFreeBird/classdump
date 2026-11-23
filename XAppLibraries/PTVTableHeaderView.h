//
#ifndef PTVTableHeaderView_h
#define PTVTableHeaderView_h
@import Foundation;

#include "YOView.h"

@class UIColor, UILabel, UIView;

@interface PTVTableHeaderView : YOView

@property (retain, nonatomic) UILabel *customLabel;
@property (retain, nonatomic) UIView *bottomBorder;
@property (nonatomic) _Bool labelCenteredVertically;
@property (retain, nonatomic) UIView *titleAccessoryView;
@property (nonatomic) _Bool titleAccessoryLeftAligned;
@property (retain, nonatomic) UIColor *labelColor;

/* class methods */
+ (id)LabelFont;
+ (double)HeightForHeaderView;

/* instance methods */
- (void)viewInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame label:(id)label;
- (id)initWithWidth:(double)width label:(id)label;
- (void)safeAreaInsetsDidChange;
- (void)setLabel:(id)label;
- (void)labelHidden:(_Bool)hidden;
- (void)setBottomBorderVisible:(_Bool)visible;

@end

#endif /* PTVTableHeaderView_h */
