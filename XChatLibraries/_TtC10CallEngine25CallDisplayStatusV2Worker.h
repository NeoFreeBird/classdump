//
#ifndef _TtC10CallEngine25CallDisplayStatusV2Worker_h
#define _TtC10CallEngine25CallDisplayStatusV2Worker_h
@import Foundation;

@class CallEngine.CallDisplayStatusStream, CallModels.CallConnectionStateStream, CallModels.CallOutgoingProgressStream, CallModels.CallPhaseStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallDisplayStatusV2Worker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallModels.CallPhaseStream callPhaseStream;
    CallModels.CallOutgoingProgressStream callOutgoingProgressStream;
    CallEngine.CallDisplayStatusStream callDisplayStatusStream;
}

@end

#endif /* _TtC10CallEngine25CallDisplayStatusV2Worker_h */
