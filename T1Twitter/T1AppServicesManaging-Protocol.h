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
