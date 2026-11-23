//
#ifndef TFNActivityIndicatorButton_h
#define TFNActivityIndicatorButton_h
@import Foundation;

#include "TFNButton.h"

@class UIActivityIndicatorView, UIColor;

@interface TFNActivityIndicatorButton : TFNButton {
    /* instance variables */
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (nonatomic) _Bool activityIndicatorVisible;
@property (retain, nonatomic) UIColor *activityIndicatorColor;

/* instance methods */
- (id)initWithStyle:(long long)style sizeClass:(long long)_class;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;

@end

#endif /* TFNActivityIndicatorButton_h */
