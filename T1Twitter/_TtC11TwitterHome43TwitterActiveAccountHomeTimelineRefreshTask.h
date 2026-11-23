//
#ifndef _TtC11TwitterHome43TwitterActiveAccountHomeTimelineRefreshTask_h
#define _TtC11TwitterHome43TwitterActiveAccountHomeTimelineRefreshTask_h
@import Foundation;

@class TFNTwitterGenericActiveAccountRecurringTask, TwitterHome.HomeTimelineTaskRefreshConfig _$sSo17TFNTwitterAccountCc, _$s10Foundation4DateVMn ?;

@interface TwitterHome.TwitterActiveAccountHomeTimelineRefreshTask : TFNTwitterGenericActiveAccountRecurringTask { // (Swift)
    /* instance variables */
    TwitterHome.HomeTimelineTaskRefreshConfig _$sSo17TFNTwitterAccountCc configProvider;
    nominal type descriptor for Foundation.Date ? lastForegroundRefreshDate;
}

/* instance methods */
- (void)triggerFromService:(id)service account:(id)account event:(id)event completion:(id /* block */)completion;
- (void)tfs_priorityForEvent:(id)event complete:(id /* block */)complete;
- (id)initWithTwitter:(id)twitter;

@end

#endif /* _TtC11TwitterHome43TwitterActiveAccountHomeTimelineRefreshTask_h */
