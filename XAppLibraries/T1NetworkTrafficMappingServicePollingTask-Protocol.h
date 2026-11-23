//
#ifndef T1NetworkTrafficMappingServicePollingTask_Protocol_h
#define T1NetworkTrafficMappingServicePollingTask_Protocol_h
@import Foundation;

#include "T1NetworkTrafficMappingServicePollingTaskDelegate-Protocol.h"
#include "TFSTwitterRecurringTask-Protocol.h"

@protocol T1NetworkTrafficMappingServicePollingTask <TFSTwitterRecurringTask>

@required

@property (weak, nonatomic) id <T1NetworkTrafficMappingServicePollingTaskDelegate> delegate;

/* required instance methods */
- (id)initWithQueue:(id)queue apiCommandLoader:(id)loader apiCommandContext:(id)context;
- (void)cancel;
- (void)invalidate;

@optional

@end

#endif /* T1NetworkTrafficMappingServicePollingTask_Protocol_h */
