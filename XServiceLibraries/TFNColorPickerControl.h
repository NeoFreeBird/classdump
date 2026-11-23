//
#ifndef TFNColorPickerControl_h
#define TFNColorPickerControl_h
@import Foundation;

@class NSArray, UIActivityIndicatorView, UIControl, UIGestureRecognizer, UIImageView;

@interface TFNColorPickerControl : UIControl {
    /* instance variables */
    NSArray *_colorViews;
    struct CGSize { double width; double height; } _colorViewSize;
    UIActivityIndicatorView *_unselectedBusyView;
    UIActivityIndicatorView *_selectedBusyView;
    UIImageView *_selectedView;
    UIGestureRecognizer *_tapRecognizer;
}

@property (copy, nonatomic) NSArray *colors;
@property (nonatomic) long long selectedColorIndex;
@property (nonatomic) _Bool busy;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)_tfn_addColorViewForColor:(id)color;
- (void)_tfn_updateSelectionAndBusyState;
- (void)_tfn_tapAction:(id)action;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (_Bool)isBusy;

@end

#endif /* TFNColorPickerControl_h */
