//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
