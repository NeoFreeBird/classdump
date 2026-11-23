//
#ifndef TASActionBackgroundTaskHandleProvider_Protocol_h
#define TASActionBackgroundTaskHandleProvider_Protocol_h
@import Foundation;

@protocol TASActionBackgroundTaskHandleProvider

@required

/* required instance methods */
- (id)backgroundTaskHandleWithName:(id)name expirationHandler:(id /* block */)handler;

@optional

@end

#endif /* TASActionBackgroundTaskHandleProvider_Protocol_h */
