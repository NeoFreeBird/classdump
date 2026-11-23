//
#ifndef APMLogging_Protocol_h
#define APMLogging_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol APMLogging <NSObject>

@required

/* required instance methods */
- (void)logMessage:(id)message logTag:(id)tag messageCode:(long long)code withLogLevel:(long long)level;

@optional

@end

#endif /* APMLogging_Protocol_h */
