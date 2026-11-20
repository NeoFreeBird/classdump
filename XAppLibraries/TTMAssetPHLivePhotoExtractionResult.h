//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetPHLivePhotoExtractionResult_h
#define TTMAssetPHLivePhotoExtractionResult_h
@import Foundation;

#include "TTMAssetAnimatedImage.h"
#include "TTMAssetImage.h"

@class NSObject;

@interface TTMAssetPHLivePhotoExtractionResult : NSObject

@property (readonly, nonatomic) TTMAssetImage *stillImage;
@property (readonly, nonatomic) TTMAssetAnimatedImage *animatedImage;

/* instance methods */
- (id)initWithStillImage:(id)image animatedImage:(id)image;

@end

#endif /* TTMAssetPHLivePhotoExtractionResult_h */
