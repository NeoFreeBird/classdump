//
#ifndef _TtC12CallSchedule29ScheduleExternalRefreshWorker_h
#define _TtC12CallSchedule29ScheduleExternalRefreshWorker_h
@import Foundation;

@class CallSchedule.ScheduleRefreshTriggerStream, CallSchedule.ScheduleWindowPager, CallSchedule.ScheduledCallsRepositoryProtocol, _$s11XFoundation11AsyncWorkerCN;

@interface CallSchedule.ScheduleExternalRefreshWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallSchedule.ScheduledCallsRepositoryProtocol repository;
    CallSchedule.ScheduleWindowPager pager;
    CallSchedule.ScheduleRefreshTriggerStream scheduleRefreshTriggerStream;
}

@end

#endif /* _TtC12CallSchedule29ScheduleExternalRefreshWorker_h */
