//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRecurringTask_Protocol_h
#define TFSTwitterRecurringTask_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterRecurringTask <NSObject>

@required

/* required instance methods */
- (void)tfs_triggerFromService:(id)service event:(id)event completion:(id /* block */)completion;
- (id)tfs_taskState;
- (id)tfs_errorDomain;

@optional

/* optional instance methods */
- (void)tfs_priorityForEvent:(id)event complete:(id /* block */)complete;

@end

#endif /* TFSTwitterRecurringTask_Protocol_h */
