//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSFeatureSwitchHostQueueState_h
#define TFSFeatureSwitchHostQueueState_h
@import Foundation;

#include "TFSFeatureSwitchesHosting-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface TFSFeatureSwitchHostQueueState : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deferredHostWork;
@property (nonatomic) long long deferredHostWorkCount;
@property (retain, nonatomic) id <TFSFeatureSwitchesHosting> host;

/* instance methods */
- (id)init;
- (void)dealloc;

@end

#endif /* TFSFeatureSwitchHostQueueState_h */
