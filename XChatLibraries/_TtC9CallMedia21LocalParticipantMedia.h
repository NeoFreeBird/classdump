//
#ifndef _TtC9CallMedia21LocalParticipantMedia_h
#define _TtC9CallMedia21LocalParticipantMedia_h
@import Foundation;

@class Builtin.DefaultActorStorage, CallMedia.CallAudioSessionConfigurationStream, CallMedia.CallCameraCapturing ?, CallMedia.CallCaptureSessionStream, CallMedia.CallDiagnosticsStream, CallMedia.CallMediaRuntime, CallMedia.LocalParticipantMedia.Outgoing, CallMedia.LocalParticipantMedia.Tracks ?, CallModels.CallAudioSessionStateStream, CallModels.CallSessionOwner, CallModels.LocalMediaState, _$sSaySo8NSObject_pG, _$sSo16AVCaptureSessionCSg, _$sSo26AVCaptureVideoPreviewLayerCSg, _TtCs12_SwiftObject;

@interface CallMedia.LocalParticipantMedia : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    CallMedia.CallCaptureSessionStream captureSession;
    CallMedia.CallAudioSessionConfigurationStream audioSessionConfiguration;
    CallMedia.CallMediaRuntime runtime;
    CallModels.CallSessionOwner audioSessionOwner;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallMedia.CallDiagnosticsStream diagnostics;
    CallModels.LocalMediaState state;
    CallMedia.LocalParticipantMedia.Outgoing outgoing;
    CallMedia.LocalParticipantMedia.Tracks ? tracks;
    CallMedia.CallCameraCapturing ? capturer;
    __C.AVCaptureVideoPreviewLayer? previewLayer;
    __C.AVCaptureSession? observedCaptureSession;
    [__C.NSObject] interruptionObservers;
}

@end

#endif /* _TtC9CallMedia21LocalParticipantMedia_h */
