//
#ifndef TDTMemoryPressureMonitor_h
#define TDTMemoryPressureMonitor_h
@import Foundation;

#include "OS_dispatch_source-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface TDTMemoryPressureMonitor : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_dispatchSource;
}

@property (readonly, nonatomic) unsigned long long currentMemoryPressureLevel;
@property (readonly, nonatomic) unsigned long long previousMemoryPressureLevel;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)startMonitoring;
- (void)stopMonitoring;

@end

#endif /* TDTMemoryPressureMonitor_h */
