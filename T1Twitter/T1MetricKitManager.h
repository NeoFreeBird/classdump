//
#ifndef T1MetricKitManager_h
#define T1MetricKitManager_h
@import Foundation;

#include "MXMetricManagerSubscriber-Protocol.h"
#include "T1MetricKitManagerScribeProvider-Protocol.h"

@class NSObject;

@interface T1MetricKitManager : NSObject <MXMetricManagerSubscriber> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *scribedDurationUnit;
    NSNumber"16@0:8 *started;
}

@property (nonatomic, weak) id <T1MetricKitManagerScribeProvider> scribeProvider;

/* class methods */
+ (id)sharedInstance;
+ (void)setSharedInstance:(id)instance;

/* instance methods */
- (id)init;
- (void)start;
- (void)stop;
- (void)didReceiveMetricPayloads:(id)payloads;

@end

#endif /* T1MetricKitManager_h */
