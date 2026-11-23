//
#ifndef _TtC7CallSFU23CallSFUIceRestartWorker_h
#define _TtC7CallSFU23CallSFUIceRestartWorker_h
@import Foundation;

@class CallMedia.CallDiagnosticsStream, CallMedia.CallMediaLossStream, CallMedia.CallMediaSessionControlling, CallMedia.CallNetworkPathStream, CallMedia.CallRemoteParticipantsStream, CallMedia.UnfairLock, CallModels.CallConnectionStateStream, CallSFU.CallSFUIceRestartStream, CallSFU.CallSFUMediaSessionStream, CallSFU.SFUTCPEscapeConfiguration ?, Swift.Bool, _$s11XFoundation11AsyncWorkerCN, _$sSd, _$sSi;

@interface CallSFU.CallSFUIceRestartWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    Swift.Bool isRestartEnabled;
    Swift.Bool recoversInPlace;
    Swift.Double confirmationWindow;
    CallSFU.SFUTCPEscapeConfiguration ? tcpEscape;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallMedia.CallNetworkPathStream callNetworkPathStream;
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallMedia.CallRemoteParticipantsStream callRemoteParticipantsStream;
    CallMedia.CallMediaLossStream callMediaLossStream;
    CallSFU.CallSFUMediaSessionStream callSFUMediaSessionStream;
    CallSFU.CallSFUIceRestartStream callSFUIceRestartStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
    CallMedia.UnfairLock tcpEscapesInCallLock;
    Swift.Int tcpEscapesInCallStorage;
}

@end

#endif /* _TtC7CallSFU23CallSFUIceRestartWorker_h */
