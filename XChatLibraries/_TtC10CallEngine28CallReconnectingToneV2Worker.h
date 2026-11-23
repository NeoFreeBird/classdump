//
#ifndef _TtC10CallEngine28CallReconnectingToneV2Worker_h
#define _TtC10CallEngine28CallReconnectingToneV2Worker_h
@import Foundation;

@class CallEngine.CallPeerReconnectingStream, CallEngine.CallReconnectingAudioPlaying, CallEngine.CallReconnectingToneGate.Configuration, CallEngine.CallReconnectingToneStream, CallMedia.CallDownlinkStream, CallModels.CallAudioSessionStateStream, CallModels.CallConnectionStateStream, CallModels.CallPhaseStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallReconnectingToneV2Worker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallModels.CallPhaseStream callPhaseStream;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallMedia.CallDownlinkStream callDownlinkStream;
    CallEngine.CallPeerReconnectingStream callPeerReconnectingStream;
    CallEngine.CallReconnectingToneStream callReconnectingToneStream;
    CallEngine.CallReconnectingAudioPlaying player;
    CallEngine.CallReconnectingToneGate.Configuration gateConfiguration;
}

@end

#endif /* _TtC10CallEngine28CallReconnectingToneV2Worker_h */
