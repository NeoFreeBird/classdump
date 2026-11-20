//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TDTVariableFrameRateMonitorObserver_Protocol_h
#define TDTVariableFrameRateMonitorObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TDTVariableFrameRateMonitorObserver <NSObject>

@required

/* required instance methods */
- (void)frameRateMonitor:(id)monitor refreshRateChangedFrom:(long long)from to:(long long)to;
- (void)frameRateMonitor:(id)monitor frameDropEventDetectedWithCallStackReturnAddresses:(id)addresses;

@optional

@end

#endif /* TDTVariableFrameRateMonitorObserver_Protocol_h */
