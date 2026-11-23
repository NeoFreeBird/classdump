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
