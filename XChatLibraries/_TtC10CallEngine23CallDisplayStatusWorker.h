//
#ifndef _TtC10CallEngine23CallDisplayStatusWorker_h
#define _TtC10CallEngine23CallDisplayStatusWorker_h
@import Foundation;

@class CallEngine.CallConnectionQualityStream, CallEngine.CallDisplayStatusStream, CallEngine.CallReconnectingToneStream, CallModels.CallConnectionStateStream, CallModels.CallOrigin, CallModels.CallOutgoingProgressStream, CallModels.CallParticipantsStream, CallModels.CallPhaseStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallDisplayStatusWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallOrigin origin;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallModels.CallPhaseStream callPhaseStream;
    CallModels.CallOutgoingProgressStream callOutgoingProgressStream;
    CallEngine.CallReconnectingToneStream callReconnectingToneStream;
    CallEngine.CallConnectionQualityStream callConnectionQualityStream;
    CallModels.CallParticipantsStream callParticipantsStream;
    CallEngine.CallDisplayStatusStream callDisplayStatusStream;
}

@end

#endif /* _TtC10CallEngine23CallDisplayStatusWorker_h */
