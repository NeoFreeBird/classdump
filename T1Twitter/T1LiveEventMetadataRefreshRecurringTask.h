//
#ifndef T1LiveEventMetadataRefreshRecurringTask_h
#define T1LiveEventMetadataRefreshRecurringTask_h
@import Foundation;

#include "T1LiveEventMetadataLoader.h"
#include "TFSTwitterRecurringTask-Protocol.h"

@class NSObject, NSString;

@interface T1LiveEventMetadataRefreshRecurringTask : NSObject <TFSTwitterRecurringTask>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) T1LiveEventMetadataLoader *metadataLoader;
@property (readonly, nonatomic) _Bool executing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithLiveEventMetadataLoader:(id)loader;
- (_Bool)isExecuting;
- (void)cancel;
- (void)complete;
- (void)tfs_triggerFromService:(id)service event:(id)event completion:(id /* block */)completion;
- (id)tfs_taskState;
- (id)tfs_errorDomain;

@end

#endif /* T1LiveEventMetadataRefreshRecurringTask_h */
