//
#ifndef _TtC14CallScheduleUI25CallHistorySnapshotWorker_h
#define _TtC14CallScheduleUI25CallHistorySnapshotWorker_h
@import Foundation;

@class CallSchedule.ScheduleConversationInfoStore, CallScheduleUI.CallHistoryConversationAudiencesStream, CallScheduleUI.CallHistoryDisplayFormatter, CallScheduleUI.CallHistorySnapshotStream, CallScheduleUI.CallHistoryStream, CallScheduleUI.ScheduleDisplayFormatter, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface CallScheduleUI.CallHistorySnapshotWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallScheduleUI.CallHistoryStream callHistoryStream;
    CallScheduleUI.CallHistoryConversationAudiencesStream conversationAudiencesStream;
    CallSchedule.ScheduleConversationInfoStore conversationInfoStore;
    CallScheduleUI.CallHistorySnapshotStream callHistorySnapshotStream;
    CallScheduleUI.CallHistoryDisplayFormatter formatter;
    CallScheduleUI.ScheduleDisplayFormatter scheduleFormatter;
    DispatchQueue queue;
}

@end

#endif /* _TtC14CallScheduleUI25CallHistorySnapshotWorker_h */
