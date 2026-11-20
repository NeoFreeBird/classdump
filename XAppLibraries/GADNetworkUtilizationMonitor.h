//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADNetworkUtilizationMonitor_h
#define GADNetworkUtilizationMonitor_h
@import Foundation;

#include "GADNetworkUtilizationStatistics.h"
#include "GADObserverCollection.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface GADNetworkUtilizationMonitor : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADNetworkUtilizationStatistics *_aggregatedStatistics;
    GADNetworkUtilizationStatistics *_initialStatistics;
    GADObserverCollection *_observers;
}

@property (readonly) long long cellularTransmittedByteCount;
@property (readonly) long long cellularReceivedByteCount;
@property (readonly) long long wifiTransmittedByteCount;
@property (readonly) long long wifiReceivedByteCount;

/* instance methods */
- (id)init;
- (void)start;
- (void)stop;
- (void)updateByteCounts;

@end

#endif /* GADNetworkUtilizationMonitor_h */
