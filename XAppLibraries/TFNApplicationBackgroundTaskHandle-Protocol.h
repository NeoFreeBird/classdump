//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNApplicationBackgroundTaskHandle_Protocol_h
#define TFNApplicationBackgroundTaskHandle_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNApplicationBackgroundTaskHandle <NSObject>

@required

/* required instance methods */
- (id)name;
- (void)endBackgroundTask;

@optional

@end

#endif /* TFNApplicationBackgroundTaskHandle_Protocol_h */
