//
#ifndef TIPLogger_Protocol_h
#define TIPLogger_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPLogger <NSObject>

@required

/* required instance methods */
- (void)tip_logWithLevel:(long long)level file:(id)file function:(id)function line:(int)line message:(id)message;

@optional

/* optional instance methods */
- (_Bool)tip_canLogWithLevel:(long long)level;

@end

#endif /* TIPLogger_Protocol_h */
