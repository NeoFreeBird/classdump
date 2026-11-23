//
#ifndef PTVVideoSourcePreviewLayer_Protocol_h
#define PTVVideoSourcePreviewLayer_Protocol_h
@import Foundation;

@class AVCaptureConnection, AVCaptureSession, NSString;

@protocol PTVVideoSourcePreviewLayer

@required

@property (retain, nonatomic) AVCaptureSession *session;
@property (copy) NSString *videoGravity;
@property (readonly, nonatomic) AVCaptureConnection *connection;

/* required instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })captureVideoRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })captureVideoRectWithTraitCollection:(id)collection;
- (struct CGPoint { double x0; double x1; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x0; double x1; })point;

@optional

@end

#endif /* PTVVideoSourcePreviewLayer_Protocol_h */
