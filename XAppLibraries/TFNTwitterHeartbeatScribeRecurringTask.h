//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterHeartbeatScribeRecurringTask_h
#define TFNTwitterHeartbeatScribeRecurringTask_h
@import Foundation;

#include "TFNTwitterBaseTwitterRecurringTask.h"

@interface TFNTwitterHeartbeatScribeRecurringTask : TFNTwitterBaseTwitterRecurringTask

/* instance methods */
- (void)tfs_priorityForEvent:(id)event complete:(id /* block */)complete;
- (void)tfs_triggerFromService:(id)service event:(id)event completion:(id /* block */)completion;

@end

#endif /* TFNTwitterHeartbeatScribeRecurringTask_h */
