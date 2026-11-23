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
