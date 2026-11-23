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
