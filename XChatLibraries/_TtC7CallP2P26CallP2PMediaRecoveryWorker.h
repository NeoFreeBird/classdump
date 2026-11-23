//
#ifndef _TtC7CallP2P26CallP2PMediaRecoveryWorker_h
#define _TtC7CallP2P26CallP2PMediaRecoveryWorker_h
@import Foundation;

@class CallMedia.CallDiagnosticsStream, CallMedia.CallDownlinkStream, CallMedia.CallMediaSessionControlling, CallMedia.CallNetworkPathStream, CallMedia.CallRemoteParticipantsStream, CallModels.CallConnectionStateStream, CallP2P.CallP2PIceRestartStream, CallP2P.CallP2PSessionStream, _$s11XFoundation11TimerStreamCMn, _$s11XFoundation13CombineWorkerCN;

@interface CallP2P.CallP2PMediaRecoveryWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallMedia.CallRemoteParticipantsStream callRemoteParticipantsStream;
    CallMedia.CallDownlinkStream callDownlinkStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
    CallP2P.CallP2PSessionStream callP2PSessionStream;
    CallP2P.CallP2PIceRestartStream callP2PIceRestartStream;
    nominal type descriptor for XFoundation.TimerStream timerStream;
    CallMedia.CallNetworkPathStream callNetworkPathStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
}

@end

#endif /* _TtC7CallP2P26CallP2PMediaRecoveryWorker_h */
