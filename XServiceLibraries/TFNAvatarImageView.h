//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNAvatarImageView_h
#define TFNAvatarImageView_h
@import Foundation;

#include "TFNIntrinsicContentSizeErasable-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNPreviewSuppressing-Protocol.h"
#include "TFNPreviewable-Protocol.h"
#include "TFNTappableImageView.h"

@class CALayer, NSString, UIColor, UIImage, UIView;

@interface TFNAvatarImageView : TFNTappableImageView <TFNLayoutMetricsEnvironment, TFNPreviewSuppressing, TFNIntrinsicContentSizeErasable, TFNPreviewable> {
    /* instance variables */
    UIImage *_image;
    _Bool _imageIsUnclipped;
    struct CGSize { double width; double height; } _lastLayoutSize;
    CALayer *_circularShadowLayer;
    UIView *_pressedView;
    id _previewingTarget;
    SEL _previewingAction;
}

@property (nonatomic) long long size;
@property (nonatomic) long long style;
@property (nonatomic) double roundedCornerRadius;
@property (nonatomic) double proportionalCornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) _Bool shadowHidden;
@property (nonatomic) _Bool imageHidden;
@property (retain, nonatomic) UIImage *overrideImage;
@property (nonatomic) _Bool suppressesPreviewing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) _Bool eraseIntrinsicContentSize;

/* class methods */
+ (id)usePreClippedCircularImagesFeatureSwitch;
+ (void)setUsePreClippedCircularImagesBlock:(id /* block */)block;
+ (_Bool)usePreClippedCircularImages;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setPreviewingTarget:(id)target action:(SEL)action;
- (void)_tfn_updateImageAndBackgroundColor;
- (void)_tfn_updateLayer;
- (void)_tfn_updateHeaderView;
- (void)setImage:(id)image;
- (void)_tfn_setImage:(id)image unclipped:(_Bool)unclipped;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)tip_fetchedImage;
- (void)setTip_fetchedImage:(id)image;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)setPressed:(_Bool)pressed;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (_Bool)suppressesPreviewingAtLocation:(struct CGPoint { double x0; double x1; })location;
- (_Bool)isShadowHidden;
- (_Bool)isImageHidden;

@end

#endif /* TFNAvatarImageView_h */
