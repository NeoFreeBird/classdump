//
#ifndef _TtC10CallEngine26CallFirstAudioScribeWorker_h
#define _TtC10CallEngine26CallFirstAudioScribeWorker_h
@import Foundation;

@class CallEngine.CallScribeEmitter, CallMedia.CallMediaSessionControlling, CallModels.CallPhaseStream, _$s11XFoundation11AsyncWorkerCN;

@interface CallEngine.CallFirstAudioScribeWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallModels.CallPhaseStream callPhaseStream;
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallEngine.CallScribeEmitter emitter;
}

@end

#endif /* _TtC10CallEngine26CallFirstAudioScribeWorker_h */
