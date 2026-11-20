//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14CallScheduleUI24ScheduleDisplayFormatter_h
#define _TtC14CallScheduleUI24ScheduleDisplayFormatter_h
@import Foundation;

@class CallSchedule.ScheduleAllDayCalendar, CallSchedule.ScheduleRecurrenceRule, _$s10Foundation8CalendarVMn, _$sSo15NSDateFormatterC, _$sSo17NSNumberFormatterC, _$sSo23NSDateIntervalFormatterC, _$sSo25NSDateComponentsFormatterC, _TtCs12_SwiftObject;

@interface CallScheduleUI.ScheduleDisplayFormatter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.Calendar calendar;
    CallSchedule.ScheduleAllDayCalendar allDayCalendar;
    CallSchedule.ScheduleRecurrenceRule recurrenceRule;
    __C.NSDateFormatter timeFormatter;
    __C.NSDateFormatter dayFormatter;
    __C.NSDateFormatter weekdayFormatter;
    __C.NSDateFormatter monthDayFormatter;
    __C.NSDateFormatter untilFormatter;
    __C.NSNumberFormatter ordinalFormatter;
    __C.NSDateFormatter relativeDayFormatter;
    __C.NSDateFormatter absoluteDayFormatter;
    __C.NSDateComponentsFormatter reminderFormatter;
    __C.NSDateComponentsFormatter durationFormatter;
    __C.NSDateComponentsFormatter countdownFormatter;
    __C.NSDateIntervalFormatter timeIntervalFormatter;
}

@end

#endif /* _TtC14CallScheduleUI24ScheduleDisplayFormatter_h */
