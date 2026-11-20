//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine20CallStatisticsWorker_h
#define _TtC10CallEngine20CallStatisticsWorker_h
@import Foundation;

@class CallEngine.CallClientEnvironmentProviding, CallMedia.CallApi, CallMedia.CallMediaSessionControlling, CallModels.CallConnectionStateStream, CallModels.CallIDStream, _$s11XFoundation11AsyncWorkerCN, _$sSd;

@interface CallEngine.CallStatisticsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallMedia.CallApi callApi;
    CallModels.CallIDStream callIDStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallEngine.CallClientEnvironmentProviding clientEnvironment;
    Swift.Double reportInterval;
}

@end

#endif /* _TtC10CallEngine20CallStatisticsWorker_h */
