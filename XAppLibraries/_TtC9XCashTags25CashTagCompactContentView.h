//
#ifndef _TtC9XCashTags25CashTagCompactContentView_h
#define _TtC9XCashTags25CashTagCompactContentView_h
@import Foundation;

#include "TIPImageViewFetchHelperDataSource-Protocol.h"
#include "TIPImageViewFetchHelperDelegate-Protocol.h"

@class Swift.Bool, UIView, XCashTags.CashTagAssetData ?, XCashTags.CashTagAttachmentSource, XCashTags.CashTagChartSeries ?, XCashTags.CashTagContentViewDelegate ?, XCashTags.CashTagTradeChin ?, _$s10Foundation3URLVMn ?, _$s10TFNUISwift11ShimmerViewCMn ?, _$sSo11UIImageViewC, _$sSo11UIStackViewCSg, _$sSo12CAShapeLayerC, _$sSo13UILayoutGuideC, _$sSo15CAGradientLayerC, _$sSo16TIPImagePipelineC, _$sSo18NSLayoutConstraintCSg, _$sSo23UIActivityIndicatorViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XCashTags.CashTagCompactContentView : UIView <TIPImageViewFetchHelperDelegate, TIPImageViewFetchHelperDataSource> { // (Swift)
    /* instance variables */
    XCashTags.CashTagContentViewDelegate ? contentDelegate;
    __C.TIPImagePipeline imagePipeline;
    XCashTags.CashTagAttachmentSource source;
    Swift.Bool isActive;
    XCashTags.CashTagTradeChin ? tradeChin;
    __C.UILayoutGuide bodyLayoutGuide;
    nominal type descriptor for Foundation.URL ? logoURL;
    nominal type descriptor for Foundation.URL ? chainLogoURL;
    XCashTags.CashTagAssetData ? currentAssetData;
    XCashTags.CashTagChartSeries ? currentOneDaySeries;
    Swift.Bool hasReceivedAssetResponse;
    Swift.Bool hasReceivedChartResponse;
    Swift.Bool hasTransitionedToFinalState;
    Swift.Bool skipNextTransitionAnimation;
    __C.UIImageView iconImageView;
    __C.UIImageView chainLogoImageView;
    __C.UILabel fallbackLabel;
    __C.UILabel nameLabel;
    __C.UILabel tickerLabel;
    __C.UILabel priceLabel;
    __C.UILabel changeLabel;
    __C.UIView chartContainer;
    __C.CAShapeLayer chartLineLayer;
    __C.CAGradientLayer chartGradientLayer;
    __C.CAGradientLayer chartFadeMask;
    __C.UIActivityIndicatorView chartActivityIndicator;
    __C.UILabel globalErrorLabel;
    nominal type descriptor for TFNUISwift.ShimmerView ? $__lazy_storage_$_shimmerView;
    __C.UIStackView? contentLabelsStack;
    __C.UIStackView? detailStack;
    Swift.Bool hasAnimatedChartAppearance;
    __C.NSLayoutConstraint? labelsTrailingConstraint;
}

/* instance methods */
- (void)tip_fetchHelper:(id)helper didUpdateDisplayedImageContainer:(id)container fromSourceDimensions:(struct CGSize { double x0; double x1; })dimensions isFinal:(_Bool)final;
- (void)tip_fetchHelper:(id)helper didLoadFinalImageFromSource:(long long)source;
- (void)tip_fetchHelper:(id)helper didFailToLoadFinalImage:(id)image;
- (id)tip_imageURLForFetchHelper:(id)helper;
- (id)tip_imagePipelineForFetchHelper:(id)helper;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XCashTags25CashTagCompactContentView_h */
