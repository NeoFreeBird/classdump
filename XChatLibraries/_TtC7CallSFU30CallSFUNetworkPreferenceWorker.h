//
#ifndef _TtC7CallSFU30CallSFUNetworkPreferenceWorker_h
#define _TtC7CallSFU30CallSFUNetworkPreferenceWorker_h
@import Foundation;

@class CallMedia.CallDiagnosticsStream, CallMedia.CallMediaStatisticsStream, CallMedia.CallNetworkPathStream, CallModels.CallConnectionStateStream, CallSFU.CallSFULossyWifiStream, CallSFU.CallSFUMediaSessionStream, CallSFU.SFUNetworkPreferenceConfiguration ?, _$s11XFoundation11AsyncWorkerCN;

@interface CallSFU.CallSFUNetworkPreferenceWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallSFU.SFUNetworkPreferenceConfiguration ? configuration;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallMedia.CallNetworkPathStream callNetworkPathStream;
    CallMedia.CallMediaStatisticsStream callMediaStatisticsStream;
    CallSFU.CallSFUMediaSessionStream callSFUMediaSessionStream;
    CallSFU.CallSFULossyWifiStream callSFULossyWifiStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
}

@end

#endif /* _TtC7CallSFU30CallSFUNetworkPreferenceWorker_h */
