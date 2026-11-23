//
#ifndef TFSFeatureSwitchesHostQueue_h
#define TFSFeatureSwitchesHostQueue_h
@import Foundation;

#include "TFSFeatureSwitchesHosting-Protocol.h"

@class NSObject, TFSStateQueue;

@interface TFSFeatureSwitchesHostQueue : NSObject

@property (readonly, nonatomic) TFSStateQueue *stateQueue;
@property (retain, nonatomic) id <TFSFeatureSwitchesHosting> host;

/* instance methods */
- (id)init;
- (void)performWhenHostIsAvailable:(id /* block */)available;
- (void)waitForEnqueuedHostWork;

@end

#endif /* TFSFeatureSwitchesHostQueue_h */
