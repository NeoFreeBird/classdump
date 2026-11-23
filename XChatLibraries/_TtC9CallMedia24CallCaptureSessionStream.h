//
#ifndef _TtC9CallMedia24CallCaptureSessionStream_h
#define _TtC9CallMedia24CallCaptureSessionStream_h
@import Foundation;

@class _$s7Combine19CurrentValueSubjectCMn CallModels.CallCameraPosition _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySo13RTCVideoTrackCSg _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySo26AVCaptureVideoPreviewLayerCSg _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface CallMedia.CallCaptureSessionStream : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject  empty-list __C.AVCaptureVideoPreviewLayer? nominal type descriptor for Swift.Never previewLayerSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list __C.RTCVideoTrack? nominal type descriptor for Swift.Never cameraTrackSubject;
    nominal type descriptor for Combine.CurrentValueSubject CallModels.CallCameraPosition nominal type descriptor for Swift.Never appliedCameraPositionSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isCaptureInterruptedSubject;
}

@end

#endif /* _TtC9CallMedia24CallCaptureSessionStream_h */
