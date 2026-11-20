//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine18CallRingbackWorker_h
#define _TtC10CallEngine18CallRingbackWorker_h
@import Foundation;

@class CallEngine.CallRingbackAudioPlaying, CallEngine.CallRingbackWorker.Playback, CallModels.CallAudioSessionStateStream, CallModels.CallOrigin, CallModels.CallPhaseStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallRingbackWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallOrigin origin;
    CallModels.CallPhaseStream callPhaseStream;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallEngine.CallRingbackAudioPlaying player;
    CallEngine.CallRingbackWorker.Playback playback;
}

@end

#endif /* _TtC10CallEngine18CallRingbackWorker_h */
