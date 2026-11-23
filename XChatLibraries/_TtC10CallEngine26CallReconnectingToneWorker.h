//
#ifndef _TtC10CallEngine26CallReconnectingToneWorker_h
#define _TtC10CallEngine26CallReconnectingToneWorker_h
@import Foundation;

@class CallEngine.CallPeerReconnectingStream, CallEngine.CallReconnectingAudioPlaying, CallEngine.CallReconnectingToneStream, CallMedia.CallDownlinkStream, CallModels.CallAudioSessionStateStream, CallModels.CallConnectionStateStream, CallModels.CallPhaseStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallReconnectingToneWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallModels.CallPhaseStream callPhaseStream;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallMedia.CallDownlinkStream callDownlinkStream;
    CallEngine.CallPeerReconnectingStream callPeerReconnectingStream;
    CallEngine.CallReconnectingToneStream callReconnectingToneStream;
    CallEngine.CallReconnectingAudioPlaying player;
}

@end

#endif /* _TtC10CallEngine26CallReconnectingToneWorker_h */
