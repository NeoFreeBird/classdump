//
#ifndef T1NetworkMonitorSessionTask_h
#define T1NetworkMonitorSessionTask_h
@import Foundation;

#include "PTVModelSessionTask-Protocol.h"
#include "TNLRequestDelegate-Protocol.h"

@class NSObject, NSString, TNLRequestConfiguration;
@protocol PTVModelSessionTaskContext;

@interface T1NetworkMonitorSessionTask : NSObject <PTVModelSessionTask, TNLRequestDelegate> {
    /* instance variables */
    TNLRequestConfiguration *_config;
    id <PTVModelSessionTaskContext> _context;
}

@property (readonly, nonatomic) id <PTVModelSessionTaskContext> ptv_context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfig:(id)config context:(id)context;
- (void)ptv_start;
- (id)tnl_delegateQueueForRequestOperation:(id)operation;
- (id)tnl_completionQueueForRequestOperation:(id)operation;
- (void)tnl_requestOperation:(id)operation didCompleteWithResponse:(id)response;

@end

#endif /* T1NetworkMonitorSessionTask_h */
