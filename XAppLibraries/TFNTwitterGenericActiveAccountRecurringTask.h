//
#ifndef TFNTwitterGenericActiveAccountRecurringTask_h
#define TFNTwitterGenericActiveAccountRecurringTask_h
@import Foundation;

#include "TFNTwitterBaseTwitterRecurringTask.h"

@interface TFNTwitterGenericActiveAccountRecurringTask : TFNTwitterBaseTwitterRecurringTask

/* instance methods */
- (void)tfs_triggerFromService:(id)service event:(id)event completion:(id /* block */)completion;
- (void)triggerFromService:(id)service account:(id)account event:(id)event completion:(id /* block */)completion;

@end

#endif /* TFNTwitterGenericActiveAccountRecurringTask_h */
