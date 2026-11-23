//
#ifndef FIRHeartbeatLoggerProtocol_Protocol_h
#define FIRHeartbeatLoggerProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol FIRHeartbeatLoggerProtocol <NSObject>

@required

/* required instance methods */
- (void)log;
- (long long)heartbeatCodeForToday;
- (void)asyncHeaderValueWithCompletionHandler:(id /* block */)handler;
- (id)headerValue;

@optional

@end

#endif /* FIRHeartbeatLoggerProtocol_Protocol_h */
