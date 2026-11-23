//
#ifndef TFSFeatureSwitchesRefreshCompletion_h
#define TFSFeatureSwitchesRefreshCompletion_h
@import Foundation;

#include "OS_dispatch_source-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface TFSFeatureSwitchesRefreshCompletion : NSObject

@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* instance methods */
- (id)initWithTimeout:(double)timeout completionBlock:(id /* block */)block;
- (void)dealloc;
- (void)completeRefreshWithSuccess:(_Bool)success;
- (void)private_cancelTimer;
- (void)private_callCompletionBlockWithSuccess:(_Bool)success timeout:(_Bool)timeout;

@end

#endif /* TFSFeatureSwitchesRefreshCompletion_h */
