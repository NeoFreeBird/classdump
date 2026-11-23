//
#ifndef GADOMIDClock_h
#define GADOMIDClock_h
@import Foundation;

#include "GADOMIDClockProtocol-Protocol.h"

@class NSObject;

@interface GADOMIDClock : NSObject <GADOMIDClockProtocol>

/* instance methods */
- (id)date;

@end

#endif /* GADOMIDClock_h */
