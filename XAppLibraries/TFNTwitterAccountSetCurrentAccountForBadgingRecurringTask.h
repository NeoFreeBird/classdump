//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterAccountSetCurrentAccountForBadgingRecurringTask_h
#define TFNTwitterAccountSetCurrentAccountForBadgingRecurringTask_h
@import Foundation;

#include "TFNTwitterGenericActiveAccountRecurringTask.h"

@interface TFNTwitterAccountSetCurrentAccountForBadgingRecurringTask : TFNTwitterGenericActiveAccountRecurringTask

/* instance methods */
- (void)tfs_priorityForEvent:(id)event complete:(id /* block */)complete;
- (void)triggerFromService:(id)service account:(id)account event:(id)event completion:(id /* block */)completion;

@end

#endif /* TFNTwitterAccountSetCurrentAccountForBadgingRecurringTask_h */
