//
#ifndef _TtC10CallEngine25CallMediaPermissionWorker_h
#define _TtC10CallEngine25CallMediaPermissionWorker_h
@import Foundation;

@class CallEngine.CallMediaPermissionRequestStream, CallEngine.CallMediaPermissionStream, CallModels.CallSessionActionTriggerStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallMediaPermissionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallEngine.CallMediaPermissionStream callMediaPermissionStream;
    CallEngine.CallMediaPermissionRequestStream callMediaPermissionRequestStream;
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
}

@end

#endif /* _TtC10CallEngine25CallMediaPermissionWorker_h */
