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
