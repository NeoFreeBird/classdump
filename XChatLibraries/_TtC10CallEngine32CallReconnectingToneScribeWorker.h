//
#ifndef _TtC10CallEngine32CallReconnectingToneScribeWorker_h
#define _TtC10CallEngine32CallReconnectingToneScribeWorker_h
@import Foundation;

@class CallEngine.CallReconnectingToneStream, CallEngine.CallScribeEmitter, CallModels.CallConnectionStateStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallReconnectingToneScribeWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallEngine.CallReconnectingToneStream callReconnectingToneStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallEngine.CallScribeEmitter emitter;
}

@end

#endif /* _TtC10CallEngine32CallReconnectingToneScribeWorker_h */
