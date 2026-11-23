//
#ifndef _TtC10CallEngine22CallStateSendingWorker_h
#define _TtC10CallEngine22CallStateSendingWorker_h
@import Foundation;

@class CallMedia.CallCaptureSessionStream, CallMedia.CallStateChannelStream, CallModels.CallReactionStream, CallModels.LocalHandRaiseStream, CallModels.LocalMediaStateStream, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallStateSendingWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.LocalMediaStateStream localMediaStateStream;
    CallModels.LocalHandRaiseStream localHandRaiseStream;
    CallMedia.CallStateChannelStream callStateChannelStream;
    CallMedia.CallCaptureSessionStream callCaptureSessionStream;
    CallModels.CallReactionStream callReactionStream;
}

@end

#endif /* _TtC10CallEngine22CallStateSendingWorker_h */
