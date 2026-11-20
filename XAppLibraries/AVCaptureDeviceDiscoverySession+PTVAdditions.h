//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
