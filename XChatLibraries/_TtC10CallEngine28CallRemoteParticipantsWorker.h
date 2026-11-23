//
#ifndef _TtC10CallEngine28CallRemoteParticipantsWorker_h
#define _TtC10CallEngine28CallRemoteParticipantsWorker_h
@import Foundation;

@class CallEngine.CallDownlinkAudioStream, CallEngine.CallMediaTopologyStream, CallMedia.CallMediaSessionControlling, CallMedia.CallRemoteParticipantsStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallRemoteParticipantsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallEngine.CallDownlinkAudioStream callDownlinkAudioStream;
    CallMedia.CallRemoteParticipantsStream callRemoteParticipantsStream;
    CallEngine.CallMediaTopologyStream callMediaTopologyStream;
}

@end

#endif /* _TtC10CallEngine28CallRemoteParticipantsWorker_h */
