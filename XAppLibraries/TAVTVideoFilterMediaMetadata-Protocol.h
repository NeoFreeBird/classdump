//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVTVideoFilterMediaMetadata_Protocol_h
#define TAVTVideoFilterMediaMetadata_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSDictionary;

@protocol TAVTVideoFilterMediaMetadata <NSObject>

@required

@property (nonatomic, readonly) NSDictionary *mediaMetadata;

@optional

/* optional instance methods */
- (struct CGSize { double x0; double x1; })outputDimensionsForSourceDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (struct CGSize { double x0; double x1; })outputDimensionsForSourceDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (id)outputPreviewImageForSourcePreviewImage:(id)image;
- (id)outputPreviewImageForSourcePreviewImage:(id)image;

@end

#endif /* TAVTVideoFilterMediaMetadata_Protocol_h */
