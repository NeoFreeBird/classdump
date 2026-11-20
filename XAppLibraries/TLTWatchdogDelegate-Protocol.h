//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLTWatchdogDelegate_Protocol_h
#define TLTWatchdogDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLTWatchdogDelegate <NSObject>

@required

/* required instance methods */
- (void)watchdog:(id)watchdog didChangeFromState:(unsigned long long)state toState:(unsigned long long)state;

@optional

@end

#endif /* TLTWatchdogDelegate_Protocol_h */
