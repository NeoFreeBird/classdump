//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVCapturePhotoFileDataRepresentationCustomizer_Protocol_h
#define AVCapturePhotoFileDataRepresentationCustomizer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol AVCapturePhotoFileDataRepresentationCustomizer <NSObject>

@required

@optional

/* optional instance methods */
- (id)replacementMetadataForPhoto:(id)photo;
- (struct __CVBuffer *)replacementEmbeddedThumbnailPixelBufferWithPhotoFormat:(id *)format forPhoto:(id)photo;
- (id)replacementDepthDataForPhoto:(id)photo;
- (id)replacementPortraitEffectsMatteForPhoto:(id)photo;
- (id)replacementSemanticSegmentationMatteOfType:(id)type forPhoto:(id)photo;
- (id)replacementAppleProRAWCompressionSettingsForPhoto:(id)photo defaultSettings:(id)settings maximumBitDepth:(long long)depth;

@end

#endif /* AVCapturePhotoFileDataRepresentationCustomizer_Protocol_h */
