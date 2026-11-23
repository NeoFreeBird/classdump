//
#ifndef UICalendarViewDelegate_Protocol_h
#define UICalendarViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UICalendarViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)calendarView:(id)view decorationForDateComponents:(id)components;
- (id)calendarView:(id)view decorationForDateComponents:(id)components;
- (void)calendarView:(id)view didChangeVisibleDateComponentsFrom:(id)from;

@end

#endif /* UICalendarViewDelegate_Protocol_h */
