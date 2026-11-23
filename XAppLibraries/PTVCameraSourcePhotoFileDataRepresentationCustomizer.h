//
#ifndef PTVCameraSourcePhotoFileDataRepresentationCustomizer_h
#define PTVCameraSourcePhotoFileDataRepresentationCustomizer_h
@import Foundation;

#include "AVCapturePhotoFileDataRepresentationCustomizer-Protocol.h"

@class AVCapturePhoto, NSDictionary, NSObject, NSString;

@interface PTVCameraSourcePhotoFileDataRepresentationCustomizer : NSObject <AVCapturePhotoFileDataRepresentationCustomizer>

@property (readonly, nonatomic) AVCapturePhoto *photo;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPhoto:(id)photo metadata:(id)metadata;
- (id)replacementMetadataForPhoto:(id)photo;

@end

#endif /* PTVCameraSourcePhotoFileDataRepresentationCustomizer_h */
