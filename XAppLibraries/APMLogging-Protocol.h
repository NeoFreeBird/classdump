//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
