//
#ifndef _TtC10CallEngine13CallEndWorker_h
#define _TtC10CallEngine13CallEndWorker_h
@import Foundation;

@class CallModels.CallConnectionStateStream, CallModels.CallSessionActionTriggerStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallEndWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
}

@end

#endif /* _TtC10CallEngine13CallEndWorker_h */
