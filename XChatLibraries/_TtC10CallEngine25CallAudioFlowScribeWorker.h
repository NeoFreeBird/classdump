//
#ifndef _TtC10CallEngine25CallAudioFlowScribeWorker_h
#define _TtC10CallEngine25CallAudioFlowScribeWorker_h
@import Foundation;

@class CallEngine.CallScribeEmitter, CallMedia.CallMediaSessionControlling, CallModels.CallConnectionStateStream, CallModels.CallPhaseStream, _$s11XFoundation11AsyncWorkerCN;

@interface CallEngine.CallAudioFlowScribeWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallModels.CallPhaseStream callPhaseStream;
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallEngine.CallScribeEmitter emitter;
}

@end

#endif /* _TtC10CallEngine25CallAudioFlowScribeWorker_h */
