//
#ifndef GADMonitorOwner_Protocol_h
#define GADMonitorOwner_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADMonitorOwner <NSObject>

@required

/* required instance methods */
- (void)addMonitor:(id)monitor;

@optional

@end

#endif /* GADMonitorOwner_Protocol_h */
