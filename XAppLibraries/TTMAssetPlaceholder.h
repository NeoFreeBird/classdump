//
#ifndef TTMAssetPlaceholder_h
#define TTMAssetPlaceholder_h
@import Foundation;

#include "TTMAsset.h"
#include "TTMAssetRemoteImage.h"

@class NSString;

@interface TTMAssetPlaceholder : TTMAsset

@property (copy, nonatomic) NSString *existingMediaId;
@property (retain, nonatomic) TTMAssetRemoteImage *remoteAsset;
@property (nonatomic) unsigned long long placeholderAttachmentAssetType;

/* instance methods */
- (id)initWithURL:(id)url mediaID:(id)id attachmentAssetType:(unsigned long long)type dimensions:(struct CGSize { double x0; double x1; })dimensions altText:(id)text;
- (id)init;
- (id)mediaId;
- (_Bool)needsUpload;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)renderPreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)renderFinalDataWithOptions:(id)options completion:(id /* block */)completion;
- (struct CGSize { double x0; double x1; })assetDimensions;
- (unsigned long long)attachmentType;
- (struct CGSize { double x0; double x1; })estimatedPreviewSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)mediaAssetUpload:(id)upload didStartWithAccountID:(id)id;
- (void)mediaAssetUpload:(id)upload didFinishSuccessfully:(_Bool)successfully error:(id)error;
- (void)mediaAssetUpload:(id)upload didUpdateProgress:(float)progress;
- (void)mediaAssetUpload:(id)upload didUpdateMediaInformation:(id)information expiryDate:(id)date;

@end

#endif /* TTMAssetPlaceholder_h */
