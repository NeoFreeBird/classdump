//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLSLoggingServiceDelegate_Protocol_h
#define TLSLoggingServiceDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLSLoggingServiceDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (unsigned long long)tls_loggingService:(id)service lengthToLogForMessageExceedingMaxSafeLength:(unsigned long long)length level:(long long)level channel:(id)channel file:(id)file function:(id)function line:(long long)line contextObject:(id)object message:(id)message;

@end

#endif /* TLSLoggingServiceDelegate_Protocol_h */
