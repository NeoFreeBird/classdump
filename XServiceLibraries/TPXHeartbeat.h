//
#ifndef TPXHeartbeat_h
#define TPXHeartbeat_h
@import Foundation;

#include "TPXStopWatch.h"

@class NSObject;

@interface TPXHeartbeat : NSObject

@property (retain, nonatomic) TPXStopWatch *stopWatch;
@property (nonatomic) _Bool enabled;
@property (copy, nonatomic) id /* block */ heartbeatBlock;

/* class methods */
+ (id)heartbeat;
+ (id)heartbeatWithBlock:(id /* block */)block;
+ (void)setupHeartbeat;
+ (void)teardownHeartbeat;
+ (void)displayLinkCallback:(id)callback;
+ (id)heartbeatObservers;
+ (void)addHeartbeat:(id)heartbeat;
+ (void)removeHeartbeat:(id)heartbeat;

/* instance methods */
- (void)displayLinkFired:(id)fired;
- (id)init;
- (void)dealloc;

@end

#endif /* TPXHeartbeat_h */
