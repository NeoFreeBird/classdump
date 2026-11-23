//
#ifndef _TtC10CallEngine23CallActiveSpeakerWorker_h
#define _TtC10CallEngine23CallActiveSpeakerWorker_h
@import Foundation;

@class CallEngine.CallAudioLevelStream, CallMedia.CallPeerStateStream, CallMedia.CallRemoteParticipantsStream, CallModels.CallActiveSpeakerStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallActiveSpeakerWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallEngine.CallAudioLevelStream callAudioLevelStream;
    CallMedia.CallPeerStateStream callPeerStateStream;
    CallMedia.CallRemoteParticipantsStream callRemoteParticipantsStream;
    CallModels.CallActiveSpeakerStream callActiveSpeakerStream;
}

@end

#endif /* _TtC10CallEngine23CallActiveSpeakerWorker_h */
