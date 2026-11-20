//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
