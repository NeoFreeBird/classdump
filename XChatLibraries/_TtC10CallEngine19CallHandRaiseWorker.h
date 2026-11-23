//
#ifndef _TtC10CallEngine19CallHandRaiseWorker_h
#define _TtC10CallEngine19CallHandRaiseWorker_h
@import Foundation;

@class CallModels.CallCapabilityStream, CallModels.CallSessionActionTriggerStream, CallModels.LocalHandRaiseStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallHandRaiseWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
    CallModels.CallCapabilityStream callCapabilityStream;
    CallModels.LocalHandRaiseStream localHandRaiseStream;
}

@end

#endif /* _TtC10CallEngine19CallHandRaiseWorker_h */
