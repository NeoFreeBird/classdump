//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppServicesManaging_Protocol_h
#define T1AppServicesManaging_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AppServicesManaging <NSObject>

@required

/* required instance methods */
- (void)setUpAppServicesWithCoreServicesConfiguration:(id)configuration;
- (void)startCrashlytics;
- (void)startSentinelManagerWithDidCrashDuringPreviousExecution:(_Bool)execution;

@optional

@end

#endif /* T1AppServicesManaging_Protocol_h */
