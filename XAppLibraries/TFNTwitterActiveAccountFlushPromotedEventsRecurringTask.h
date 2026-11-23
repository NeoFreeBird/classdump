//
#ifndef TFNTwitterActiveAccountFlushPromotedEventsRecurringTask_h
#define TFNTwitterActiveAccountFlushPromotedEventsRecurringTask_h
@import Foundation;

#include "TFNTwitterGenericActiveAccountRecurringTask.h"

@interface TFNTwitterActiveAccountFlushPromotedEventsRecurringTask : TFNTwitterGenericActiveAccountRecurringTask

/* instance methods */
- (void)triggerFromService:(id)service account:(id)account event:(id)event completion:(id /* block */)completion;

@end

#endif /* TFNTwitterActiveAccountFlushPromotedEventsRecurringTask_h */
