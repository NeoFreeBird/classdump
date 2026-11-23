//
#ifndef TFNDatePicker_h
#define TFNDatePicker_h
@import Foundation;

@class UIColor, UIDatePicker;

@interface TFNDatePicker : UIDatePicker

@property (retain, nonatomic) UIColor *labelTextColor;
@property (retain, nonatomic) UIColor *disabledLabelTextColor;
@property (retain, nonatomic) UIColor *selectionTextColor;
@property (retain, nonatomic) UIColor *selectionTodayTextColor;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)sizeToFitInputView;

@end

#endif /* TFNDatePicker_h */
