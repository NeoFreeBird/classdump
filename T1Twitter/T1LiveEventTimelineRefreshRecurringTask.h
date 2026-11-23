//
#ifndef T1LiveEventTimelineRefreshRecurringTask_h
#define T1LiveEventTimelineRefreshRecurringTask_h
@import Foundation;

#include "TFSTwitterRecurringTask-Protocol.h"

@class NSObject, NSString, TFNDataViewController;

@interface T1LiveEventTimelineRefreshRecurringTask : NSObject <TFSTwitterRecurringTask>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) TFNDataViewController *dataViewController;
@property (readonly, nonatomic) _Bool executing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithDataViewController:(id)controller;
- (_Bool)isExecuting;
- (void)complete;
- (void)tfs_triggerFromService:(id)service event:(id)event completion:(id /* block */)completion;
- (id)tfs_taskState;
- (id)tfs_errorDomain;

@end

#endif /* T1LiveEventTimelineRefreshRecurringTask_h */
