//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine20CallConnectionWorker_h
#define _TtC10CallEngine20CallConnectionWorker_h
@import Foundation;

@class CallEngine.CallBatchAdmission, CallEngine.CallMediaTopologyStream, CallEngine.CallTransports, CallMedia.CallApi, CallMedia.CallDiagnosticsStream, CallMedia.CallMediaLossStream, CallMedia.CallMediaSessionControlling, CallMedia.CallNetworkPathStream, CallModels.CallConfiguration, CallModels.CallConnectionStateStream, CallModels.CallIDStream, CallModels.CallKitIntegration, CallModels.MediaSessionID ?, Swift.Bool, _$s10Foundation4UUIDVMn, _$s11XFoundation11AsyncWorkerCN, _$sSS, _$sSi;

@interface CallEngine.CallConnectionWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.UUID callUUID;
    Swift.String accountID;
    CallModels.CallConfiguration configuration;
    CallMedia.CallApi callApi;
    CallModels.CallKitIntegration callKitIntegration;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallModels.CallIDStream callIDStream;
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallMedia.CallMediaLossStream callMediaLossStream;
    CallMedia.CallNetworkPathStream callNetworkPathStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
    CallEngine.CallMediaTopologyStream callMediaTopologyStream;
    CallEngine.CallTransports callTransports;
    CallEngine.CallBatchAdmission batchAdmission;
    Swift.Int firstConnectRetryCount;
    Swift.Int connectTransportRetryCount;
    Swift.Bool recoversInPlace;
    Swift.Bool isGrokBotContactsEnabled;
    CallModels.MediaSessionID ? mediaSessionID;
}

@end

#endif /* _TtC10CallEngine20CallConnectionWorker_h */
