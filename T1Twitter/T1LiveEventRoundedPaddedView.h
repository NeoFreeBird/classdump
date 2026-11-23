//
#ifndef T1LiveEventRoundedPaddedView_h
#define T1LiveEventRoundedPaddedView_h
@import Foundation;

#include "T1LiveEventRoundedCornerView.h"

@class NSString, TASTalkingIndicatorView, UIColor, UIFont, UILabel, UIStackView, UIView;

@interface T1LiveEventRoundedPaddedView : UIView

@property (readonly, nonatomic) UIStackView *contentTypeStackView;
@property (readonly, nonatomic) UILabel *contentTypeLabel;
@property (readonly, nonatomic) TASTalkingIndicatorView *talkingIndicatorView;
@property (readonly, nonatomic) T1LiveEventRoundedCornerView *roundedCornerView;
@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) _Bool shouldDisplayTalkingIndicator;
@property (nonatomic) struct { double x0; double x1; double x2; double x3; } roundedCornerRadius;

/* class methods */
+ (id)_t1_defaultFont;
+ (struct CGSize { double x0; double x1; })preferredSizeForWidth:(double)width titleText:(id)text;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)_t1_defaultBackgroundColor;
- (id)_t1_defaultTitleColor;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tfn_fontSizeChanged;

@end

#endif /* T1LiveEventRoundedPaddedView_h */
