//
#ifndef T1NetworkTrafficRecommendationPollingTask_h
#define T1NetworkTrafficRecommendationPollingTask_h
@import Foundation;

#include "T1NetworkTrafficMappingServicePollingTask-Protocol.h"
#include "T1NetworkTrafficMappingServicePollingTaskDelegate-Protocol.h"
#include "TFSTwitterAPICommandContext-Protocol.h"
#include "TFSTwitterAPICommandLoader-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue, TFSTwitterAPICommandCancellable;

@interface T1NetworkTrafficRecommendationPollingTask : NSObject <T1NetworkTrafficMappingServicePollingTask> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_queue;
    id <TFSTwitterAPICommandCancellable> _pollingOperation;
    id <TFSTwitterAPICommandLoader> _commandLoader;
    id <TFSTwitterAPICommandContext> _commandContext;
}

@property (weak, nonatomic) id <T1NetworkTrafficMappingServicePollingTaskDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueue:(id)queue apiCommandLoader:(id)loader apiCommandContext:(id)context;
- (void)cancel;
- (void)invalidate;
- (void)tfs_triggerFromService:(id)service event:(id)event completion:(id /* block */)completion;
- (id)tfs_taskState;
- (id)tfs_errorDomain;
- (void)tfs_priorityForEvent:(id)event complete:(id /* block */)complete;

@end

#endif /* T1NetworkTrafficRecommendationPollingTask_h */
