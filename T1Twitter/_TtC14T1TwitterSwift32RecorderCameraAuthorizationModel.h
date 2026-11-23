//
#ifndef _TtC14T1TwitterSwift32RecorderCameraAuthorizationModel_h
#define _TtC14T1TwitterSwift32RecorderCameraAuthorizationModel_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.RecorderCameraAuthorizationModel.Status, _$s14XVideoRecorder23CameraAccessRequirementOMn, _$sSo23TSAAuthorizationManagerC, _$syycSg, _TtCs12_SwiftObject;

@interface T1TwitterSwift.RecorderCameraAuthorizationModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    (() -> ())? onChange;
    nominal type descriptor for XVideoRecorder.CameraAccessRequirement requirement;
    T1TwitterSwift.RecorderCameraAuthorizationModel.Status cameraStatus;
    T1TwitterSwift.RecorderCameraAuthorizationModel.Status microphoneStatus;
    Swift.Bool isRequesting;
    __C.TSAAuthorizationManager authorizationManager;
}

@end

#endif /* _TtC14T1TwitterSwift32RecorderCameraAuthorizationModel_h */
