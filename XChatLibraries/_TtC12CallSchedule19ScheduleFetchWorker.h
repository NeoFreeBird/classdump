//
#ifndef _TtC12CallSchedule19ScheduleFetchWorker_h
#define _TtC12CallSchedule19ScheduleFetchWorker_h
@import Foundation;

@class CallSchedule.ScheduleLoadStateStream, CallSchedule.ScheduleRefreshTriggerStream, CallSchedule.ScheduleScreenVisibilityStream, CallSchedule.ScheduleWindowPager, CallSchedule.ScheduleWindowStream, CallSchedule.ScheduledCallsRepositoryProtocol, CallSchedule.ScheduledCallsStream, _$s11XFoundation11AsyncWorkerCN;

@interface CallSchedule.ScheduleFetchWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallSchedule.ScheduledCallsRepositoryProtocol repository;
    CallSchedule.ScheduleWindowPager pager;
    CallSchedule.ScheduleRefreshTriggerStream scheduleRefreshTriggerStream;
    CallSchedule.ScheduleWindowStream scheduleWindowStream;
    CallSchedule.ScheduledCallsStream scheduledCallsStream;
    CallSchedule.ScheduleLoadStateStream scheduleLoadStateStream;
    CallSchedule.ScheduleScreenVisibilityStream scheduleScreenVisibilityStream;
}

@end

#endif /* _TtC12CallSchedule19ScheduleFetchWorker_h */
