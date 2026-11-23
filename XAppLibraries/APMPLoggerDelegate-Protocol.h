//
#ifndef APMPLoggerDelegate_Protocol_h
#define APMPLoggerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol APMPLoggerDelegate <NSObject>

@required

/* required instance methods */
- (void)logWithLevel:(long long)level message:(id)message context:(id)context silent:(_Bool)silent monitored:(_Bool)monitored;

@optional

@end

#endif /* APMPLoggerDelegate_Protocol_h */
