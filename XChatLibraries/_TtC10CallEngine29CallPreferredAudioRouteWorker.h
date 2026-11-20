//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine29CallPreferredAudioRouteWorker_h
#define _TtC10CallEngine29CallPreferredAudioRouteWorker_h
@import Foundation;

@class CallEngine.CallAudioRouteStore, CallEngine.CallAudioRouting, CallModels.CallAudioSessionStateStream, CallModels.CallSessionActionTriggerStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallPreferredAudioRouteWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallEngine.CallAudioRouting callAudioRouter;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallEngine.CallAudioRouteStore callAudioRouteStore;
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
}

@end

#endif /* _TtC10CallEngine29CallPreferredAudioRouteWorker_h */
