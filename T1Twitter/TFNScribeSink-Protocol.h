//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNScribeSink_Protocol_h
#define TFNScribeSink_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNScribeSink <NSObject>

@required

/* required instance methods */
- (void)receiveAction:(id)action withContext:(id)context;
- (void)receiveAction:(id)action withContext:(id)context;

@optional

/* optional instance methods */
- (void)receivedActionWithSender:(id)sender action:(id)action;
- (void)receivedActionWithSender:(id)sender action:(id)action;

@end

#endif /* TFNScribeSink_Protocol_h */
