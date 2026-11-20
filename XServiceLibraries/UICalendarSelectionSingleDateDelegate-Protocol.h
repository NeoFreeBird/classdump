//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UICalendarSelectionSingleDateDelegate_Protocol_h
#define UICalendarSelectionSingleDateDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UICalendarSelectionSingleDateDelegate <NSObject>

@required

/* required instance methods */
- (void)dateSelection:(id)selection didSelectDate:(id)date;

@optional

/* optional instance methods */
- (_Bool)dateSelection:(id)selection canSelectDate:(id)date;

@end

#endif /* UICalendarSelectionSingleDateDelegate_Protocol_h */
