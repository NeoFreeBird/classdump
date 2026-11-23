//
#ifndef TFNTwitterFeatureSwitchUpdateRecurringTask_h
#define TFNTwitterFeatureSwitchUpdateRecurringTask_h
@import Foundation;

#include "TFNTwitterBaseTwitterRecurringTask.h"

@class NSString;

@interface TFNTwitterFeatureSwitchUpdateRecurringTask : TFNTwitterBaseTwitterRecurringTask {
    /* instance variables */
    double _lastRefreshRequestTime;
    NSString *_lastRefreshRequestAccountID;
    NSString *_awaitedRefreshAccountID;
}

@property (readonly, nonatomic) _Bool useActiveAccount;
@property (readonly, nonatomic) _Bool forceRefresh;

/* instance methods */
- (id)initWithTwitter:(id)twitter useActiveAccount:(_Bool)account forceRefresh:(_Bool)refresh;
- (_Bool)_tfn_shouldSkipRefreshForAccountID:(id)id;
- (void)_tfn_featureSwitchesConfigDidRefresh:(id)refresh;
- (void)_tfn_refreshDidEnd;
- (void)tfs_triggerFromService:(id)service event:(id)event completion:(id /* block */)completion;

@end

#endif /* TFNTwitterFeatureSwitchUpdateRecurringTask_h */
