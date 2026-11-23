//
#ifndef _TtC6CallWS18WSCallAudioSession_h
#define _TtC6CallWS18WSCallAudioSession_h
@import Foundation;

@class CallMedia.CallDiagnosticsStream, CallMedia.UnfairLock, CallModels.CallAudioSessionStateStream, CallModels.CallSessionOwner, CallWS.WSCallAudioSessionRuntime, Swift.Bool, _TtCs12_SwiftObject;

@interface CallWS.WSCallAudioSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    CallWS.WSCallAudioSessionRuntime runtime;
    CallModels.CallSessionOwner owner;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
    CallMedia.UnfairLock lock;
    Swift.Bool isActivated;
}

@end

#endif /* _TtC6CallWS18WSCallAudioSession_h */
