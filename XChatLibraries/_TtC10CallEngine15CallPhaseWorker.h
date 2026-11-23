//
#ifndef _TtC10CallEngine15CallPhaseWorker_h
#define _TtC10CallEngine15CallPhaseWorker_h
@import Foundation;

@class CallMedia.CallDownlinkStream, CallModels.CallConfiguration, CallModels.CallConnectionStateStream, CallModels.CallParticipantsStream, CallModels.CallPhaseStream, Swift.Bool, _$s10Foundation4DateVMn _$syc, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallPhaseWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallConfiguration configuration;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallModels.CallParticipantsStream callParticipantsStream;
    CallMedia.CallDownlinkStream callDownlinkStream;
    CallModels.CallPhaseStream callPhaseStream;
    Swift.Bool isActiveOnDownlinkEnabled;
    nominal type descriptor for Foundation.Date _$syc now;
}

@end

#endif /* _TtC10CallEngine15CallPhaseWorker_h */
