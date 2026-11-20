//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6CallWS25WSCallMediaSessionFactory_h
#define _TtC6CallWS25WSCallMediaSessionFactory_h
@import Foundation;

@class CallMedia.CallDiagnosticsStream, CallMedia.CallWebSocketCredentialsProviding, CallModels.CallAudioSessionStateStream, CallModels.CallTransportRequest, CallWS.WSCallAudioSession, CallWS.WSCallEndStream, CallWS.WSCallMicrophoneStream, CallWS.WSVoiceAudioEngineControlling _$sSgyYbc, CallWS.WSVoiceSocketing _$s_p _$s10Foundation10URLRequestVMn _$sYbc, _$sSS, _TtCs12_SwiftObject;

@interface CallWS.WSCallMediaSessionFactory : Swift._SwiftObject { // (Swift)
    /* instance variables */
    CallModels.CallTransportRequest transport;
    Swift.String accountID;
    Swift.String endpoint;
    CallMedia.CallWebSocketCredentialsProviding credentialsProvider;
    CallWS.WSVoiceSocketing _$s_p nominal type descriptor for Foundation.URLRequest _$sYbc socketFactory;
    CallWS.WSVoiceAudioEngineControlling _$sSgyYbc audioEngineFactory;
    CallWS.WSCallAudioSession audioSession;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
    CallWS.WSCallMicrophoneStream microphoneStream;
    CallWS.WSCallEndStream endStream;
}

@end

#endif /* _TtC6CallWS25WSCallMediaSessionFactory_h */
