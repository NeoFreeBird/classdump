//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine28CallAudioSessionScribeWorker_h
#define _TtC10CallEngine28CallAudioSessionScribeWorker_h
@import Foundation;

@class CallEngine.CallScribeEmitter, CallModels.CallAudioSessionStateStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallAudioSessionScribeWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallEngine.CallScribeEmitter emitter;
}

@end

#endif /* _TtC10CallEngine28CallAudioSessionScribeWorker_h */
