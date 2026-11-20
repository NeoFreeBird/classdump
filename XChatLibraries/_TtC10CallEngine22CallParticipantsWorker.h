//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine22CallParticipantsWorker_h
#define _TtC10CallEngine22CallParticipantsWorker_h
@import Foundation;

@class CallEngine.CallConnectionQualityStream, CallEngine.CallIdentityRosterStream, CallEngine.CallMediaTopologyStream, CallMedia.CallCaptureSessionStream, CallMedia.CallPeerStateStream, CallMedia.CallRemoteParticipantsStream, CallMedia.CallVideoTrackStream, CallModels.CallConnectionStateStream, CallModels.CallInviteesStream, CallModels.CallParticipantIdentity, CallModels.CallParticipantsStream, CallModels.LocalHandRaiseStream, CallModels.LocalMediaStateStream, _$s11XFoundation13CombineWorkerCN, _$sSi;

@interface CallEngine.CallParticipantsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallParticipantIdentity selfParticipant;
    CallMedia.CallRemoteParticipantsStream callRemoteParticipantsStream;
    CallMedia.CallVideoTrackStream callVideoTrackStream;
    CallMedia.CallPeerStateStream callPeerStateStream;
    CallEngine.CallIdentityRosterStream callIdentityRosterStream;
    CallModels.LocalMediaStateStream localMediaStateStream;
    CallModels.LocalHandRaiseStream localHandRaiseStream;
    CallModels.CallInviteesStream callInviteesStream;
    CallModels.CallParticipantsStream callParticipantsStream;
    CallEngine.CallMediaTopologyStream callMediaTopologyStream;
    CallMedia.CallCaptureSessionStream callCaptureSessionStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallEngine.CallConnectionQualityStream callConnectionQualityStream;
    Swift.Int fixedSlotCount;
}

@end

#endif /* _TtC10CallEngine22CallParticipantsWorker_h */
