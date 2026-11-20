//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine29CallAudioReceivedScribeWorker_h
#define _TtC10CallEngine29CallAudioReceivedScribeWorker_h
@import Foundation;

@class CallEngine.CallScribeEmitter, CallMedia.CallMediaStatisticsStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallAudioReceivedScribeWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallMedia.CallMediaStatisticsStream callMediaStatisticsStream;
    CallEngine.CallScribeEmitter emitter;
}

@end

#endif /* _TtC10CallEngine29CallAudioReceivedScribeWorker_h */
