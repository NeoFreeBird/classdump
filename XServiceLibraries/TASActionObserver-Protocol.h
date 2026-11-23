//
#ifndef TASActionObserver_Protocol_h
#define TASActionObserver_Protocol_h
@import Foundation;

@protocol TASActionObserver

@required

@optional

/* optional instance methods */
- (void)actionService:(id)service didReceiveActionExecution:(id)execution;
- (void)actionService:(id)service didExceedBeginExecutionTimeout:(double)timeout forActionExecution:(id)execution;
- (void)actionService:(id)service willExecuteActionExecution:(id)execution;
- (void)actionService:(id)service completedActionExecution:(id)execution metrics:(id)metrics;

@end

#endif /* TASActionObserver_Protocol_h */
