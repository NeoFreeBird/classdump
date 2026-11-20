//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
