//
#ifndef TFNTwitterInactiveAccountRefreshUserRecurringTask_h
#define TFNTwitterInactiveAccountRefreshUserRecurringTask_h
@import Foundation;

#include "TFNTwitterGenericActiveAccountRecurringTask.h"

@interface TFNTwitterInactiveAccountRefreshUserRecurringTask : TFNTwitterGenericActiveAccountRecurringTask

/* instance methods */
- (void)triggerFromService:(id)service account:(id)account event:(id)event completion:(id /* block */)completion;
- (void)tfs_private_triggerRefreshOfAccounts:(id)accounts completion:(id /* block */)completion;

@end

#endif /* TFNTwitterInactiveAccountRefreshUserRecurringTask_h */
