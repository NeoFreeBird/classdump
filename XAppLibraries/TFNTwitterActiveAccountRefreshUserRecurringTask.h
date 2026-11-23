//
#ifndef TFNTwitterActiveAccountRefreshUserRecurringTask_h
#define TFNTwitterActiveAccountRefreshUserRecurringTask_h
@import Foundation;

#include "TFNTwitterGenericActiveAccountRecurringTask.h"

@interface TFNTwitterActiveAccountRefreshUserRecurringTask : TFNTwitterGenericActiveAccountRecurringTask

/* instance methods */
- (void)triggerFromService:(id)service account:(id)account event:(id)event completion:(id /* block */)completion;

@end

#endif /* TFNTwitterActiveAccountRefreshUserRecurringTask_h */
