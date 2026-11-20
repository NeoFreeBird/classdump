//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMMutableAssetRenderingOptions_h
#define TTMMutableAssetRenderingOptions_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TTMAssetRenderingOptions.h"

@class NSObject, TIPImagePipeline;

@interface TTMMutableAssetRenderingOptions : TTMAssetRenderingOptions

@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (copy, nonatomic) NSObject<NSCoding, NSCopying> *editParameters;
@property (nonatomic) long long maxDimension;
@property (nonatomic) unsigned long long maxAllowedFileSize;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) _Bool allowsLosslessCompression;
@property (nonatomic) _Bool prefersOriginalDataForGrokImagineImage;
@property (nonatomic) _Bool excludeDirectFileExport;
@property (nonatomic) _Bool validatesVideoSource;
@property (nonatomic) _Bool recoversFromMediaServicesReset;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ authenticateRequestHandler;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TTMMutableAssetRenderingOptions_h */
