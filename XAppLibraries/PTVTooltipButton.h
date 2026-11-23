//
#ifndef PTVTooltipButton_h
#define PTVTooltipButton_h
@import Foundation;

#include "PTVExtendedButton.h"
#include "PTVTooltip.h"
#include "PTVTooltipButtonGroup-Protocol.h"

@class NSTimer, UIActivityIndicatorView;

@interface PTVTooltipButton : PTVExtendedButton {
    /* instance variables */
    PTVTooltipButton *_weakSelf;
    NSTimer *_hideTooltipTimer;
    UIActivityIndicatorView *_loadingIndicator;
}

@property (weak, nonatomic) id <PTVTooltipButtonGroup> buttonGroup;
@property (nonatomic) _Bool isLoading;
@property (nonatomic) _Bool hasError;
@property (retain, nonatomic) PTVTooltip *tooltip;
@property (readonly, nonatomic) _Bool isTooltipVisible;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameForFittingTooltip;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } defaultFrameForFittingTooltip;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)commonInit;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (unsigned long long)state;
- (void)setSelected:(_Bool)selected;
- (void)layoutTooltip;
- (void)showTooltipAnimated:(_Bool)animated forDuration:(double)duration;
- (void)hideTooltipAnimated:(_Bool)animated afterDelay:(double)delay;
- (void)showTooltipAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)hideTooltipAnimated:(_Bool)animated;
- (void)willShowTooltip;
- (void)didShowTooltip;
- (void)willHideTooltip;
- (void)didHideTooltip;

@end

#endif /* PTVTooltipButton_h */
