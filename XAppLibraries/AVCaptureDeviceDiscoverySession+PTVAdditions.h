//
#ifndef AVCaptureDeviceDiscoverySession_PTVAdditions_h
#define AVCaptureDeviceDiscoverySession_PTVAdditions_h
@import Foundation;

@interface AVCaptureDeviceDiscoverySession (PTVAdditions)

/* class methods */
+ (id)ptv_DiscoverySessionForMicrophone;
+ (id)ptv_DiscoverySessionForCameraWithPosition:(long long)position;

@end

#endif /* AVCaptureDeviceDiscoverySession_PTVAdditions_h */
