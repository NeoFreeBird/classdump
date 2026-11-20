//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASActionBackgroundTaskHandle_Protocol_h
#define TASActionBackgroundTaskHandle_Protocol_h
@import Foundation;

@protocol TASActionBackgroundTaskHandle

@required

/* required instance methods */
- (void)invalidate;

@optional

@end

#endif /* TASActionBackgroundTaskHandle_Protocol_h */
