//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine28CallAudioLevelSamplingWorker_h
#define _TtC10CallEngine28CallAudioLevelSamplingWorker_h
@import Foundation;

@class CallEngine.CallAudioLevelStream, CallMedia.CallMediaSessionControlling, CallModels.CallAudioSessionStateStream, CallModels.CallConnectionStateStream, _$s11XFoundation11AsyncWorkerCN;

@interface CallEngine.CallAudioLevelSamplingWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallMedia.CallMediaSessionControlling callMediaSessionStream;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallEngine.CallAudioLevelStream callAudioLevelStream;
}

@end

#endif /* _TtC10CallEngine28CallAudioLevelSamplingWorker_h */
