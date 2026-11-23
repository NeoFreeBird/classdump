//
#ifndef _TtC14TwitterUISwift28TTMAssetNativePickerLoadable_h
#define _TtC14TwitterUISwift28TTMAssetNativePickerLoadable_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TTMAsset.h"
#include "TTMAssetRenderingOptions.h"
#include "TTMPersistentStringConvertible-Protocol.h"

@class Swift.Bool, _$sSS, _$sSo14NSItemProviderC, _$sSo8TTMAssetCSg, _$sySdcSg, _$sySo8TTMAssetCcSg;

@interface TwitterUISwift.TTMAssetNativePickerLoadable : TTMAsset { // (Swift)
    /* instance variables */
    __C.NSItemProvider itemProvider;
    Swift.String assetIdentifier;
    Swift.Bool allowLivePhoto;
    ((Swift.Double) -> ())? progressHandler;
    Swift.Bool isInFlight;
    Swift.Bool isLoadRequested;
}

@property (nonatomic, retain) TTMAsset *loadedAsset;
@property (nonatomic, copy) id /* block */ didLoadAsset;
@property (nonatomic, readonly) id <NSCoding, NSCopying, TTMPersistentStringConvertible> objectIdentifier;
@property (nonatomic, readonly) unsigned long long attachmentType;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } assetDimensions;
@property (nonatomic, readonly) _Bool hasProvisionalDimensions;
@property (nonatomic, readonly) _Bool isLoadingAsset;
@property (nonatomic, readonly) _Bool hasValidAsset;

/* class methods */
+ (void)loadAssetsOfLoadables:(id)loadables timeout:(double)timeout completion:(id /* block */)completion;

/* instance methods */
- (id)initWithItemProvider:(id)provider assetIdentifier:(id)identifier allowLivePhoto:(_Bool)photo;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })estimatedPreviewSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)renderPreviewWithOptions:(TTMAssetRenderingOptions *)options completion:(id /* block */)completion;
- (void)loadAssetImmediately;
- (void)renderFinalDataWithOptions:(TTMAssetRenderingOptions *)options completion:(id /* block */)completion;
- (id)init;

@end

#endif /* _TtC14TwitterUISwift28TTMAssetNativePickerLoadable_h */
