//
#ifndef AVAssetImageGenerator_TFNAdditions_h
#define AVAssetImageGenerator_TFNAdditions_h
@import Foundation;

@interface AVAssetImageGenerator (TFNAdditions)

/* class methods */
+ (void)tfn_generateImageAsynchronouslyWithAsset:(id)asset videoComposition:(id)composition maxSize:(long long)size time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time completion:(id /* block */)completion;

@end

#endif /* AVAssetImageGenerator_TFNAdditions_h */
