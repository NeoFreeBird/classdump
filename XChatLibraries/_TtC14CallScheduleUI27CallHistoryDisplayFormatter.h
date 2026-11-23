//
#ifndef _TtC14CallScheduleUI27CallHistoryDisplayFormatter_h
#define _TtC14CallScheduleUI27CallHistoryDisplayFormatter_h
@import Foundation;

@class _$s10Foundation4DateV11FormatStyleVMn, _$s10Foundation8CalendarVMn, _$sSo15NSDateFormatterC, _$sSo25NSDateComponentsFormatterC, _TtCs12_SwiftObject;

@interface CallScheduleUI.CallHistoryDisplayFormatter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.Calendar calendar;
    nominal type descriptor for Foundation.Date.FormatStyle timeStyle;
    nominal type descriptor for Foundation.Date.FormatStyle weekdayTimeStyle;
    __C.NSDateFormatter relativeDayTimeFormatter;
    __C.NSDateComponentsFormatter minutesDurationFormatter;
    __C.NSDateComponentsFormatter hoursDurationFormatter;
}

@end

#endif /* _TtC14CallScheduleUI27CallHistoryDisplayFormatter_h */
