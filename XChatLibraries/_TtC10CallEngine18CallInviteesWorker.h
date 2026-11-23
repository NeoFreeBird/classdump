//
#ifndef _TtC10CallEngine18CallInviteesWorker_h
#define _TtC10CallEngine18CallInviteesWorker_h
@import Foundation;

@class CallEngine.CallInviteFailureStream, CallMedia.CallMediaSessionControlling, CallModels.CallConfiguration, CallModels.CallInviteesStream, CallModels.CallSessionActionTriggerStream, _$s11XFoundation11TimerStreamCMn, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallInviteesWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallConfiguration configuration;
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
    CallEngine.CallInviteFailureStream callInviteFailureStream;
    CallModels.CallInviteesStream callInviteesStream;
    nominal type descriptor for XFoundation.TimerStream timerStream;
}

@end

#endif /* _TtC10CallEngine18CallInviteesWorker_h */
