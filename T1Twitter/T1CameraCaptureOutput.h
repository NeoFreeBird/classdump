//
#ifndef T1CameraCaptureOutput_h
#define T1CameraCaptureOutput_h
@import Foundation;

#include "T1CameraCaptureCameraScribeValue.h"

@class NSData, NSObject, NSURL, TFSCameraVideoCompositorContext, TFSReferencedFile, TTMAsset, UIImage;

@interface T1CameraCaptureOutput : NSObject

@property (readonly, nonatomic) TFSReferencedFile *videoReferencedFile;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) UIImage *transitioningPreviewImage;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) TFSCameraVideoCompositorContext *videoCompositorContext;
@property (readonly, nonatomic) TTMAsset *attachment;
@property (readonly, nonatomic) T1CameraCaptureCameraScribeValue *cameraScribeValue;
@property (readonly, nonatomic) _Bool handsFreeRecording;

/* instance methods */
- (id)init;
- (id)initWithTransitioningPreviewImage:(id)image type:(unsigned long long)type;
- (id)initWithImageData:(id)data cameraScribeValue:(id)value;
- (id)initWithVideoURL:(id)url cameraScribeValue:(id)value handsFreeRecording:(_Bool)recording;
- (id)initWithVideoCompositorContext:(id)context;
- (id)initWithTwitterMediaAsset:(id)asset cameraScribeValue:(id)value;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (_Bool)isHandsFreeRecording;

@end

#endif /* T1CameraCaptureOutput_h */
