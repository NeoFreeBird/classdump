//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVVideoPreviewImageExtractor_TIPImagePipeline_h
#define TAVVideoPreviewImageExtractor_TIPImagePipeline_h
@import Foundation;

@interface TAVVideoPreviewImageExtractor (TIPImagePipeline)

/* class methods */
+ (id)imageExtractorForSource:(id)source account:(id)account;

@end

#endif /* TAVVideoPreviewImageExtractor_TIPImagePipeline_h */
