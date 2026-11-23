//
#ifndef TNLLogger_Protocol_h
#define TNLLogger_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLLogger <NSObject>

@required

/* required instance methods */
- (void)tnl_logWithLevel:(long long)level context:(id)context file:(id)file function:(id)function line:(int)line message:(id)message;
- (_Bool)tnl_shouldRedactHTTPHeaderField:(id)field;

@optional

/* optional instance methods */
- (_Bool)tnl_canLogWithLevel:(long long)level context:(id)context;
- (_Bool)tnl_shouldLogVerbosely;

@end

#endif /* TNLLogger_Protocol_h */
