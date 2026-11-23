//
#ifndef TFNScribeSink_Protocol_h
#define TFNScribeSink_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNScribeSink <NSObject>

@required

/* required instance methods */
- (void)receiveAction:(id)action withContext:(id)context;

@optional

/* optional instance methods */
- (void)receivedActionWithSender:(id)sender action:(id)action;

@end

#endif /* TFNScribeSink_Protocol_h */
