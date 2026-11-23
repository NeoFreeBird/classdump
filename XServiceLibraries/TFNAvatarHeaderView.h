//
#ifndef TFNAvatarHeaderView_h
#define TFNAvatarHeaderView_h
@import Foundation;

#include "TFNAvatarImageView.h"
#include "TFNCustomHitTestView.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class NSNumber, NSString, UIImageView, UIView;

@interface TFNAvatarHeaderView : UIView <TFNLayoutMetricsEnvironment> {
    /* instance variables */
    NSNumber *_fixedImageInset;
    TFNCustomHitTestView *_overlayView;
    UIImageView *_overlayImageView;
}

@property (readonly, nonatomic) TFNAvatarImageView *imageView;
@property (readonly, nonatomic) long long overlay;
@property (nonatomic) double imageInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } imageEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })preferredSizeForLayoutMetrics:(id)metrics;
+ (struct CGSize { double x0; double x1; })preferredSizeForLayoutMetrics:(id)metrics overlay:(long long)overlay;
+ (double)preferredImageInsetForSize:(struct CGSize { double x0; double x1; })size;
+ (id)_tfn_overlayBackgroundColorForType:(long long)type;
+ (struct CGSize { double x0; double x1; })_tfn_sizeForOverlay:(long long)overlay withAvatarSize:(struct CGSize { double x0; double x1; })size;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForOverlay:(long long)overlay withAvatarSize:(struct CGSize { double x0; double x1; })size;

/* instance methods */
- (id)initWithImageView:(id)view;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setOverlay:(long long)overlay withImage:(id)image;
- (void)_tfn_addOverlayViewWithImage:(id)image;
- (void)resetImageInset;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setIsAccessibilityElement:(_Bool)element;
- (void)layoutMetricsDidChange:(id)change to:(id)to;

@end

#endif /* TFNAvatarHeaderView_h */
