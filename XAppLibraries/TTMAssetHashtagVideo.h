//
#ifndef TTMAssetHashtagVideo_h
#define TTMAssetHashtagVideo_h
@import Foundation;

#include "TIPImageFetchDelegate-Protocol.h"
#include "TTMAsset.h"

@class NSString, NSURL, UIImage;

@interface TTMAssetHashtagVideo : TTMAsset <TIPImageFetchDelegate>

@property (readonly, nonatomic) NSString *videoMediaID;
@property (readonly, nonatomic) NSURL *previewVideoURL;
@property (readonly, nonatomic) NSURL *previewImageURL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } dimensions;
@property (retain, nonatomic) UIImage *cachedPreviewImage;
@property (readonly, nonatomic) NSString *hashtag;
@property (readonly, nonatomic) NSString *attributionString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoMediaID:(id)id previewVideoURL:(id)url previewImageURL:(id)url dimensions:(struct CGSize { double x0; double x1; })dimensions hashtag:(id)hashtag attributionString:(id)string;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)mediaId;
- (struct CGSize { double x0; double x1; })assetDimensions;
- (unsigned long long)attachmentType;
- (struct CGSize { double x0; double x1; })estimatedPreviewSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)renderPreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)renderPreviewPlayerMediaWithOptions:(id)options completion:(id /* block */)completion;
- (void)renderFinalDataWithOptions:(id)options completion:(id /* block */)completion;
- (_Bool)needsUpload;
- (void)mediaAssetUpload:(id)upload didStartWithAccountID:(id)id;
- (void)mediaAssetUpload:(id)upload didFinishSuccessfully:(_Bool)successfully error:(id)error;
- (void)mediaAssetUpload:(id)upload didUpdateProgress:(float)progress;
- (void)mediaAssetUpload:(id)upload didUpdateMediaInformation:(id)information expiryDate:(id)date;
- (void)tip_imageFetchOperation:(id)operation didLoadFinalImage:(id)image;

@end

#endif /* TTMAssetHashtagVideo_h */
