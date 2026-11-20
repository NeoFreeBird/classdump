//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetRemoteImage_h
#define TTMAssetRemoteImage_h
@import Foundation;

#include "TIPImageFetchDelegate-Protocol.h"
#include "TTMAsset.h"

@class NSString, NSURL;

@interface TTMAssetRemoteImage : TTMAsset <TIPImageFetchDelegate>

@property (retain, nonatomic) NSURL *imageURL;
@property (nonatomic) struct CGSize { double x0; double x1; } imageDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithImageURL:(id)url dimensions:(struct CGSize { double x0; double x1; })dimensions;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)renderPreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)renderFinalDataWithOptions:(id)options completion:(id /* block */)completion;
- (void)tip_imageFetchOperation:(id)operation didLoadFinalImage:(id)image;
- (struct CGSize { double x0; double x1; })assetDimensions;
- (unsigned long long)attachmentType;
- (struct CGSize { double x0; double x1; })estimatedPreviewSizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* TTMAssetRemoteImage_h */
