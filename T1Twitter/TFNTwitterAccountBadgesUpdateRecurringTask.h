//
#ifndef TFNTwitterAccountBadgesUpdateRecurringTask_h
#define TFNTwitterAccountBadgesUpdateRecurringTask_h
@import Foundation;

@class TFNTwitterBaseTwitterRecurringTask;

@interface TFNTwitterAccountBadgesUpdateRecurringTask : TFNTwitterBaseTwitterRecurringTask

/* instance methods */
- (void)tfs_priorityForEvent:(id)event complete:(id /* block */)complete;
- (void)tfs_triggerFromService:(id)service event:(id)event completion:(id /* block */)completion;

@end

#endif /* TFNTwitterAccountBadgesUpdateRecurringTask_h */
