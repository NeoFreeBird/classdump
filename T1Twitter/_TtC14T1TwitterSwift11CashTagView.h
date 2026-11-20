//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift11CashTagView_h
#define _TtC14T1TwitterSwift11CashTagView_h
@import Foundation;

#include "TIPImageViewFetchHelperDataSource-Protocol.h"
#include "TIPImageViewFetchHelperDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.CashTagViewDelegate ?, UIView, _$s10Foundation3URLVMn ?, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$s9XCashTags18CashTagContentViewMp, _$s9XCashTags19CashTagDataProviderCMn, _$s9XCashTags20CashTagScribeContextVMn, _$s9XCashTags23CashTagViewDisplayStyleOMn, _$s9XCashTags36CashTagAttachmentCustomTimeframeDataVMn ?, _$sSS, _$sSa -> _$s14TFSTwitterCore23CashTagTradablePlatformVMn, _$sSo11UIImageViewC, _$sSo15CAGradientLayerC, _$sSo16TIPImagePipelineC, _$sSo17TFNTwitterAccountC, _$sSo6UIViewC, _$sSo8NSObject_pSg;

@interface T1TwitterSwift.CashTagView : UIView <TIPImageViewFetchHelperDelegate, TIPImageViewFetchHelperDataSource> { // (Swift)
    /* instance variables */
    nominal type descriptor for XCashTags.CashTagViewDisplayStyle displayStyle;
    nominal type descriptor for CoreGraphics.CGFloat ? fullTopPadding;
    Swift.String restId;
    Swift.Bool supportsOhlc;
    Swift.Bool isActive;
    Swift.Array -> nominal type descriptor for TFSTwitterCore.CashTagTradablePlatform tradablePlatforms;
    __C.TFNTwitterAccount account;
    nominal type descriptor for XCashTags.CashTagScribeContext scribeContext;
    nominal type descriptor for XCashTags.CashTagDataProvider dataProvider;
    nominal type descriptor for XCashTags.CashTagAttachmentCustomTimeframeData ? customTimeframeData;
    protocol descriptor for XCashTags.CashTagContentView contentView;
    __C.TIPImagePipeline imagePipeline;
    __C.UIImageView backgroundImageView;
    nominal type descriptor for Foundation.URL ? backgroundImageURL;
    Swift.Bool hasReceivedInitialAssetData;
    Swift.Bool isPollingActive;
    Swift.Bool isObservingDataProvider;
    __C.NSObject? screenshotObserver;
    Swift.Bool hasReceivedAssetData;
    Swift.Bool hasReceivedChartData;
    T1TwitterSwift.CashTagViewDelegate ? delegate;
    __C.UIView scrollEffectContainer;
    nominal type descriptor for CoreGraphics.CGFloat sideGradientProgress;
    __C.CAGradientLayer fadeMask;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (void)tip_fetchHelper:(id)helper didLoadFinalImageFromSource:(long long)source;
- (void)tip_fetchHelper:(id)helper didFailToLoadFinalImage:(id)image;
- (id)tip_imageURLForFetchHelper:(id)helper;
- (id)tip_imagePipelineForFetchHelper:(id)helper;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift11CashTagView_h */
