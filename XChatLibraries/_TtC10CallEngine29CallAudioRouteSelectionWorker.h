//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine29CallAudioRouteSelectionWorker_h
#define _TtC10CallEngine29CallAudioRouteSelectionWorker_h
@import Foundation;

@class CallEngine.CallAudioRouting, CallMedia.CallAudioSessionConfigurationStream, CallModels.CallAudioRouteStream, CallModels.CallAudioSessionStateStream, CallModels.CallSessionActionTriggerStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallAudioRouteSelectionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallEngine.CallAudioRouting callAudioRouter;
    CallModels.CallAudioRouteStream callAudioRouteStream;
    CallMedia.CallAudioSessionConfigurationStream callAudioSessionConfigurationStream;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
}

@end

#endif /* _TtC10CallEngine29CallAudioRouteSelectionWorker_h */
