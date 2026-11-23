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
