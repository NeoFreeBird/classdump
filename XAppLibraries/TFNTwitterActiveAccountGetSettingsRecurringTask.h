//
#ifndef TFNTwitterActiveAccountGetSettingsRecurringTask_h
#define TFNTwitterActiveAccountGetSettingsRecurringTask_h
@import Foundation;

#include "TFNTwitterGenericActiveAccountRecurringTask.h"

@interface TFNTwitterActiveAccountGetSettingsRecurringTask : TFNTwitterGenericActiveAccountRecurringTask

/* instance methods */
- (void)triggerFromService:(id)service account:(id)account event:(id)event completion:(id /* block */)completion;

@end

#endif /* TFNTwitterActiveAccountGetSettingsRecurringTask_h */
