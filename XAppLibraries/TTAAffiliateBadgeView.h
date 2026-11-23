//
#ifndef TTAAffiliateBadgeView_h
#define TTAAffiliateBadgeView_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TIPImageViewFetchHelperDataSource-Protocol.h"

@class NSString, TFNAttributedTextView, TFNTappableHighlightView, TFSURTRichText, TIPImagePipeline, UIColor, UIImageView;

@interface TTAAffiliateBadgeView : TFNTappableHighlightView <TIPImageViewFetchHelperDataSource, TFNAttributedTextViewDelegate>

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) TFNAttributedTextView *descriptionView;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (copy, nonatomic) NSString *imageURLStr;
@property (copy, nonatomic) NSString *descriptionStr;
@property (copy, nonatomic) TFSURTRichText *descriptionRichText;
@property (copy, nonatomic) NSString *iconAssetStr;
@property (nonatomic) unsigned long long numberOfLines;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) id /* block */ affiliateBadgeViewTappedBlock;
@property (copy, nonatomic) id /* block */ affiliateBadgeViewLongPressedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })imageSize;
+ (double)imageToDescriptionPadding;
+ (double)preferredHeightForLayoutMetrics:(id)metrics;
+ (struct CGSize { double x0; double x1; })intrinsicContentSizeForWidth:(double)width maxNumberOfLines:(unsigned long long)lines imageUrlStr:(id)str descriptionStr:(id)str iconAssetStr:(id)str;
+ (id)iconAssetOfIconType:(long long)type;
+ (id)assetForLabelType:(long long)type;
+ (id)_t1_descriptionTextModelForDescription:(id)description numberOfLines:(unsigned long long)lines iconAssetStr:(id)str textColor:(id)color;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setImage:(id)image labelType:(long long)type;
- (void)_t1_updateDescription;
- (_Bool)isUserInteractionEnabled;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)calculatedLayoutMetrics;
- (id)accessibleValue;
- (id)accessibilityHint;
- (void)_t1_didPress;
- (void)_t1_didLongPress;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextView:(id)view didTapTruncationTokenAreaWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextViewDidTapInactiveArea:(id)area;
- (id)tip_imageFetchRequestForFetchHelper:(id)helper;
- (id)tip_imagePipelineForFetchHelper:(id)helper;

@end

#endif /* TTAAffiliateBadgeView_h */
