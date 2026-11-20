//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetRenderingOptions_h
#define TTMAssetRenderingOptions_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSObject, TIPImagePipeline;

@interface TTMAssetRenderingOptions : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, copy, nonatomic) NSObject<NSCoding, NSCopying> *editParameters;
@property (readonly, nonatomic) long long maxDimension;
@property (readonly, nonatomic) unsigned long long maxAllowedFileSize;
@property (readonly, nonatomic) unsigned long long retryCount;
@property (readonly, nonatomic) _Bool allowsLosslessCompression;
@property (readonly, nonatomic) _Bool prefersOriginalDataForGrokImagineImage;
@property (readonly, nonatomic) _Bool excludeDirectFileExport;
@property (readonly, nonatomic) _Bool validatesVideoSource;
@property (readonly, nonatomic) _Bool recoversFromMediaServicesReset;
@property (readonly, copy, nonatomic) id /* block */ progressHandler;
@property (readonly, copy, nonatomic) id /* block */ authenticateRequestHandler;

/* instance methods */
- (id)initWithImagePipeline:(id)pipeline editParameters:(id)parameters maxDimension:(long long)dimension maxAllowedFileSize:(unsigned long long)size retryCount:(unsigned long long)count allowsLosslessCompression:(_Bool)compression prefersOriginalDataForGrokImagineImage:(_Bool)image excludeDirectFileExport:(_Bool)_export progressHandler:(id /* block */)handler authenticateRequestHandler:(id /* block */)handler;
- (id)init;
- (id)initWithImagePipeline:(id)pipeline;
- (id)initWithOptions:(id)options;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@end

#endif /* TTMAssetRenderingOptions_h */
