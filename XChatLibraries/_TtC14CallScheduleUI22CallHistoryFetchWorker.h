//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14CallScheduleUI22CallHistoryFetchWorker_h
#define _TtC14CallScheduleUI22CallHistoryFetchWorker_h
@import Foundation;

@class CallSchedule.CallHistoryRepositoryProtocol, CallScheduleUI.CallHistoryLoadTriggerStream, CallScheduleUI.CallHistoryStream, _$s11XFoundation11AsyncWorkerCN;

@interface CallScheduleUI.CallHistoryFetchWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallSchedule.CallHistoryRepositoryProtocol repository;
    CallScheduleUI.CallHistoryStream callHistoryStream;
    CallScheduleUI.CallHistoryLoadTriggerStream callHistoryLoadTriggerStream;
}

@end

#endif /* _TtC14CallScheduleUI22CallHistoryFetchWorker_h */
