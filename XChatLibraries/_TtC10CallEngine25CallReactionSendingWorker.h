//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine25CallReactionSendingWorker_h
#define _TtC10CallEngine25CallReactionSendingWorker_h
@import Foundation;

@class CallModels.CallCapabilityStream, CallModels.CallReactionStream, CallModels.CallSessionActionTriggerStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallReactionSendingWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
    CallModels.CallCapabilityStream callCapabilityStream;
    CallModels.CallReactionStream callReactionStream;
}

@end

#endif /* _TtC10CallEngine25CallReactionSendingWorker_h */
