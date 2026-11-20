//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
