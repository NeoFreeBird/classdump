//
#ifndef TFSTwitterRecurringTaskServiceObserver_Protocol_h
#define TFSTwitterRecurringTaskServiceObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterRecurringTaskServiceObserver <NSObject>

@required

/* required instance methods */
- (void)recurringTaskService:(id)service registeredTask:(id)task;
- (void)recurringTaskService:(id)service unregisteredTask:(id)task;
- (void)recurringTaskService:(id)service triggeredTask:(id)task event:(id)event;
- (void)recurringTaskService:(id)service willBeginTask:(id)task;
- (void)recurringTaskService:(id)service didTimeoutTask:(id)task duration:(double)duration;
- (void)recurringTaskService:(id)service didCompleteTask:(id)task duration:(double)duration;
- (void)recurringTaskService:(id)service didEncounterProblem:(long long)problem userInfo:(id)info;

@optional

@end

#endif /* TFSTwitterRecurringTaskServiceObserver_Protocol_h */
