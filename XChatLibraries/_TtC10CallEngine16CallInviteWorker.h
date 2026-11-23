//
#ifndef _TtC10CallEngine16CallInviteWorker_h
#define _TtC10CallEngine16CallInviteWorker_h
@import Foundation;

@class CallEngine.CallInviteFailureStream, CallMedia.CallApi, CallMedia.CallDiagnosticsStream, CallModels.CallIDStream, CallModels.CallSessionActionTriggerStream, _$s11XFoundation11AsyncWorkerCN;

@interface CallEngine.CallInviteWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallMedia.CallApi callApi;
    CallModels.CallIDStream callIDStream;
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
    CallEngine.CallInviteFailureStream callInviteFailureStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
}

@end

#endif /* _TtC10CallEngine16CallInviteWorker_h */
