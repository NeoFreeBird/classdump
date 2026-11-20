//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
