//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
