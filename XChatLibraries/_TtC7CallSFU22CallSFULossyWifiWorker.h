//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7CallSFU22CallSFULossyWifiWorker_h
#define _TtC7CallSFU22CallSFULossyWifiWorker_h
@import Foundation;

@class CallMedia.CallDiagnosticsStream, CallMedia.CallMediaSessionStream, CallMedia.CallMediaStatisticsStream, CallModels.CallConnectionStateStream, CallSFU.CallSFUIceRestartStream, CallSFU.CallSFULossyWifiStream, CallSFU.SFULossyWifiThresholds ?, Swift.Bool, _$s11XFoundation11AsyncWorkerCN;

@interface CallSFU.CallSFULossyWifiWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallSFU.SFULossyWifiThresholds ? thresholds;
    Swift.Bool isSteeringEnabled;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallMedia.CallMediaSessionStream callMediaSessionStream;
    CallMedia.CallMediaStatisticsStream callMediaStatisticsStream;
    CallSFU.CallSFUIceRestartStream callSFUIceRestartStream;
    CallSFU.CallSFULossyWifiStream callSFULossyWifiStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
}

@end

#endif /* _TtC7CallSFU22CallSFULossyWifiWorker_h */
