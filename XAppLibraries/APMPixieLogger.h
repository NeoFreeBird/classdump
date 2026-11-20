//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMPixieLogger_h
#define APMPixieLogger_h
@import Foundation;

#include "APMPLoggerDelegate-Protocol.h"

@class NSObject, NSString;

@interface APMPixieLogger : NSObject <APMPLoggerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)logWithLevel:(long long)level message:(id)message context:(id)context silent:(_Bool)silent monitored:(_Bool)monitored;

@end

#endif /* APMPixieLogger_h */
