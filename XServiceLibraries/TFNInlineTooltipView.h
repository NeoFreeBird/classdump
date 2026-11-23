//
#ifndef TFNInlineTooltipView_h
#define TFNInlineTooltipView_h
@import Foundation;

#include "TFNInlineTooltipConfiguration.h"

@class UIView;

@interface TFNInlineTooltipView : UIView { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 $__lazy_storage_$_anchorView;
    B24@0:8@"NSString"16 $__lazy_storage_$_imageView;
    B24@0:8@"NSString"16 $__lazy_storage_$_titleLabel;
    B24@0:8@"NSString"16 $__lazy_storage_$_closeButton;
    B24@0:8@"NSString"16 $__lazy_storage_$_closeButtonView;
    B24@0:8@"NSString"16 $__lazy_storage_$_contentStackView;
    B24@0:8@"NSString"16 viewConstraints;
    B24@0:8@"NSString"16 tooltipTapRecognizer;
}

@property (nonatomic, retain) TFNInlineTooltipConfiguration *configuration;
@property (nonatomic) _Bool isClosed;

/* class methods */
+ (double)heightForWidth:(double)width configuration:(id)configuration estimated:(_Bool)estimated;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)tfn_fontSizeChanged;
- (void)handleTooltipViewTap:(id)tap;
- (void)layoutSubviews;

@end

#endif /* TFNInlineTooltipView_h */
