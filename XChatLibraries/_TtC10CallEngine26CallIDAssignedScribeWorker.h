//
#ifndef _TtC10CallEngine26CallIDAssignedScribeWorker_h
#define _TtC10CallEngine26CallIDAssignedScribeWorker_h
@import Foundation;

@class CallEngine.CallScribeEmitter, CallModels.CallAudioSessionStateStream, CallModels.CallIDStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallIDAssignedScribeWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallIDStream callIDStream;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallEngine.CallScribeEmitter emitter;
}

@end

#endif /* _TtC10CallEngine26CallIDAssignedScribeWorker_h */
