//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
