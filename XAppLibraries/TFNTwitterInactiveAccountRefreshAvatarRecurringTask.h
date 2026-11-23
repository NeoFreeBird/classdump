//
#ifndef TFNTwitterInactiveAccountRefreshAvatarRecurringTask_h
#define TFNTwitterInactiveAccountRefreshAvatarRecurringTask_h
@import Foundation;

#include "TFNTwitterGenericActiveAccountRecurringTask.h"

@interface TFNTwitterInactiveAccountRefreshAvatarRecurringTask : TFNTwitterGenericActiveAccountRecurringTask

/* instance methods */
- (void)triggerFromService:(id)service account:(id)account event:(id)event completion:(id /* block */)completion;
- (void)tfs_private_triggerRefreshOfAccounts:(id)accounts imagePipeline:(id)pipeline completion:(id /* block */)completion;

@end

#endif /* TFNTwitterInactiveAccountRefreshAvatarRecurringTask_h */
