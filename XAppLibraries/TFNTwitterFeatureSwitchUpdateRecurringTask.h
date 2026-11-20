//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterFeatureSwitchUpdateRecurringTask_h
#define TFNTwitterFeatureSwitchUpdateRecurringTask_h
@import Foundation;

#include "TFNTwitterBaseTwitterRecurringTask.h"

@interface TFNTwitterFeatureSwitchUpdateRecurringTask : TFNTwitterBaseTwitterRecurringTask

@property (readonly, nonatomic) _Bool useActiveAccount;
@property (readonly, nonatomic) _Bool forceRefresh;

/* instance methods */
- (id)initWithTwitter:(id)twitter useActiveAccount:(_Bool)account forceRefresh:(_Bool)refresh;
- (void)tfs_triggerFromService:(id)service event:(id)event completion:(id /* block */)completion;

@end

#endif /* TFNTwitterFeatureSwitchUpdateRecurringTask_h */
