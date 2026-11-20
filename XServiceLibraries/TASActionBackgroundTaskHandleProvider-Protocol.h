//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
