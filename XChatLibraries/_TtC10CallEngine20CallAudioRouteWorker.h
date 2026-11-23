//
#ifndef _TtC10CallEngine20CallAudioRouteWorker_h
#define _TtC10CallEngine20CallAudioRouteWorker_h
@import Foundation;

@class CallEngine.CallAudioRouting, CallModels.CallAudioRouteStream, CallModels.CallAudioSessionStateStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallAudioRouteWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallEngine.CallAudioRouting callAudioRouter;
    CallModels.CallAudioRouteStream callAudioRouteStream;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
}

@end

#endif /* _TtC10CallEngine20CallAudioRouteWorker_h */
