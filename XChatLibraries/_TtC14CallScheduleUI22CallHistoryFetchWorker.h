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
