//
#ifndef _TtC7CallSFU26CallOutgoingProgressWorker_h
#define _TtC7CallSFU26CallOutgoingProgressWorker_h
@import Foundation;

@class CallMedia.CallMediaSessionStream, CallMedia.CallStateChannelStream, CallModels.CallOutgoingProgressStream, CallModels.CallUserID ?, _$s11XFoundation13CombineWorkerCN;

@interface CallSFU.CallOutgoingProgressWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallUserID ? calleeUserID;
    CallMedia.CallStateChannelStream callStateChannelStream;
    CallMedia.CallMediaSessionStream callMediaSessionStream;
    CallModels.CallOutgoingProgressStream callOutgoingProgressStream;
}

@end

#endif /* _TtC7CallSFU26CallOutgoingProgressWorker_h */
