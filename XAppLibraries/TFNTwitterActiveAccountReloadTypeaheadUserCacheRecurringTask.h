//
#ifndef TFNTwitterActiveAccountReloadTypeaheadUserCacheRecurringTask_h
#define TFNTwitterActiveAccountReloadTypeaheadUserCacheRecurringTask_h
@import Foundation;

#include "TFNTwitterGenericActiveAccountRecurringTask.h"

@interface TFNTwitterActiveAccountReloadTypeaheadUserCacheRecurringTask : TFNTwitterGenericActiveAccountRecurringTask

/* instance methods */
- (void)triggerFromService:(id)service account:(id)account event:(id)event completion:(id /* block */)completion;

@end

#endif /* TFNTwitterActiveAccountReloadTypeaheadUserCacheRecurringTask_h */
