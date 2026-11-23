//
#ifndef _TtC12CallSchedule18ScheduleRSVPWorker_h
#define _TtC12CallSchedule18ScheduleRSVPWorker_h
@import Foundation;

@class CallModels.CallUserID, CallSchedule.ScheduleRSVPFailureStream, CallSchedule.ScheduleRSVPTriggerStream, CallSchedule.ScheduleRefreshTriggerStream, CallSchedule.ScheduledCallsRepositoryProtocol, CallSchedule.ScheduledCallsStream, _$s11XFoundation11AsyncWorkerCN;

@interface CallSchedule.ScheduleRSVPWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallSchedule.ScheduledCallsRepositoryProtocol repository;
    CallSchedule.ScheduleRSVPTriggerStream scheduleRSVPTriggerStream;
    CallSchedule.ScheduleRSVPFailureStream scheduleRSVPFailureStream;
    CallSchedule.ScheduledCallsStream scheduledCallsStream;
    CallSchedule.ScheduleRefreshTriggerStream scheduleRefreshTriggerStream;
    CallModels.CallUserID viewerUserID;
}

@end

#endif /* _TtC12CallSchedule18ScheduleRSVPWorker_h */
