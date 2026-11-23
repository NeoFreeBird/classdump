//
#ifndef _TtC10CallEngine18CallBatchAdmission_h
#define _TtC10CallEngine18CallBatchAdmission_h
@import Foundation;

@class CallEngine.CallMediaTopologyStream, CallMedia.CallApi, CallMedia.CallBatchConnecting, CallMedia.CallBatchSettlement ?, CallMedia.CallDiagnosticsStream, CallMedia.CallMediaSessionControlling, CallModels.CallConfiguration, CallModels.CallConnectionStateStream, CallModels.CallIDStream, Swift.Bool, _$sSSSg, _$sSi, _TtCs12_SwiftObject;

@interface CallEngine.CallBatchAdmission : Swift._SwiftObject { // (Swift)
    /* instance variables */
    CallMedia.CallBatchSettlement ? pendingSettlement;
    CallModels.CallConfiguration configuration;
    CallMedia.CallApi callApi;
    CallMedia.CallBatchConnecting batchConnector;
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallModels.CallIDStream callIDStream;
    CallEngine.CallMediaTopologyStream callMediaTopologyStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
    Swift.Int connectTransportRetryCount;
    Swift.String? batchHTTP3Host;
    Swift.Bool startsNewBatchSession;
}

@end

#endif /* _TtC10CallEngine18CallBatchAdmission_h */
