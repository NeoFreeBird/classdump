//
#ifndef TTMAssetAnimatedImage_h
#define TTMAssetAnimatedImage_h
@import Foundation;

#include "NSItemProviderReading-Protocol.h"
#include "TTMAssetALAsset.h"
#include "TTMAssetHashable-Protocol.h"

@class NSArray, NSData, NSString, UIImage;

@interface TTMAssetAnimatedImage : TTMAssetALAsset <NSItemProviderReading, TTMAssetHashable>

@property (retain, nonatomic) NSData *sourceData;
@property (nonatomic) struct CGSize { double x0; double x1; } sourceImageDimensions;
@property (retain, nonatomic) UIImage *animatedImage;
@property (nonatomic) unsigned long long loopCount;
@property (retain, nonatomic) NSArray *frameDurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long hashableSource;

/* class methods */
+ (id)objectWithItemProviderData:(id)data typeIdentifier:(id)identifier error:(id *)error;
+ (id)readableTypeIdentifiersForItemProvider;

/* instance methods */
- (id)initWithData:(id)data imageDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (id)initWithData:(id)data imageDimensions:(struct CGSize { double x0; double x1; })dimensions localIdentifier:(id)identifier;
- (id)initWithAnimatedImage:(id)image loopCount:(unsigned long long)count frameDurations:(id)durations;
- (void)renderAnimatedGIFImageWithOptions:(id)options completion:(id /* block */)completion;
- (void)originalMediaDataWithCompletion:(id /* block */)completion;
- (struct CGSize { double x0; double x1; })assetDimensions;
- (unsigned long long)attachmentType;
- (struct CGSize { double x0; double x1; })estimatedPreviewSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)renderFinalDataWithOptions:(id)options completion:(id /* block */)completion;
- (void)_saveLocalBackupToFilePath:(id)path completion:(id /* block */)completion;
- (void)_didLoadBackupData:(id)data;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)supportsAltText;

@end

#endif /* TTMAssetAnimatedImage_h */
