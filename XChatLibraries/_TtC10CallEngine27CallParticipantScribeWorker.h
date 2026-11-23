//
#ifndef _TtC10CallEngine27CallParticipantScribeWorker_h
#define _TtC10CallEngine27CallParticipantScribeWorker_h
@import Foundation;

@class CallEngine.CallScribeEmitter, CallModels.CallParticipantsStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallParticipantScribeWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallParticipantsStream callParticipantsStream;
    CallEngine.CallScribeEmitter emitter;
}

@end

#endif /* _TtC10CallEngine27CallParticipantScribeWorker_h */
