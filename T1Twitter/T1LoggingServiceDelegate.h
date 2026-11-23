//
#ifndef T1LoggingServiceDelegate_h
#define T1LoggingServiceDelegate_h
@import Foundation;

#include "TLSLoggingServiceDelegate-Protocol.h"

@class NSObject, NSString;

@interface T1LoggingServiceDelegate : NSObject <TLSLoggingServiceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)tls_loggingService:(id)service lengthToLogForMessageExceedingMaxSafeLength:(unsigned long long)length level:(long long)level channel:(id)channel file:(id)file function:(id)function line:(long long)line contextObject:(id)object message:(id)message;

@end

#endif /* T1LoggingServiceDelegate_h */
