//
#ifndef TFNTitleView_h
#define TFNTitleView_h
@import Foundation;

#include "TFNNavigationViewHiding-Protocol.h"

@class NSString, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface TFNTitleView : UIView <TFNNavigationViewHiding>

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UIImageView *accessoryView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *subtitleColor;
@property (copy, nonatomic) NSString *subtitleAccessibilityHint;
@property (retain, nonatomic) UIImage *accessoryImage;
@property (nonatomic) unsigned long long accessoryImageLayout;
@property (nonatomic) _Bool adjustsTitleFontSizeToFitWidth;
@property (nonatomic) _Bool accessoryImageLockedToTitle;
@property (nonatomic) long long titleLineBreakMode;
@property (copy, nonatomic) NSString *accessibilityLabelOverride;

/* class methods */
+ (id)titleViewWithTitle:(id)title subtitle:(id)subtitle;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithCoder:(id)coder;
- (void)setTitle:(id)title subtitle:(id)subtitle accessoryImage:(id)image animated:(_Bool)animated;
- (void)_setText:(id)text forLabel:(id)label;
- (id)accessibilityLabel;
- (void)_updateAccessibility;
- (void)_updateAlphas;
- (void)setAlpha:(double)alpha;
- (void)tfn_setAlpha:(double)alpha;
- (void)layoutSubviews;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; })_t1_calculatedFramesInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })_t1_calculatedLabelAcessoryFramesWithLabelSize:(struct CGSize { double x0; double x1; })size accessorySize:(struct CGSize { double x0; double x1; })size inContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* TFNTitleView_h */
