//
#ifndef _TtC12CallSchedule25ScheduleDaySectionsWorker_h
#define _TtC12CallSchedule25ScheduleDaySectionsWorker_h
@import Foundation;

@class CallSchedule.ScheduleDayGrouper, CallSchedule.ScheduleDaySectionsStream, CallSchedule.ScheduleNowTickStream, CallSchedule.ScheduledCallsStream, _$s11XFoundation13CombineWorkerCN;

@interface CallSchedule.ScheduleDaySectionsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallSchedule.ScheduleDayGrouper grouper;
    CallSchedule.ScheduledCallsStream scheduledCallsStream;
    CallSchedule.ScheduleNowTickStream scheduleNowTickStream;
    CallSchedule.ScheduleDaySectionsStream scheduleDaySectionsStream;
}

@end

#endif /* _TtC12CallSchedule25ScheduleDaySectionsWorker_h */
