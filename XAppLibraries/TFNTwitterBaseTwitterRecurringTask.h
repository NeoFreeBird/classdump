//
#ifndef TFNTwitterBaseTwitterRecurringTask_h
#define TFNTwitterBaseTwitterRecurringTask_h
@import Foundation;

#include "TFNTwitter.h"
#include "TFSTwitterRecurringTask-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterBaseTwitterRecurringTask : NSObject <TFSTwitterRecurringTask>

@property (readonly, nonatomic) TFNTwitter *twitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTwitter:(id)twitter;
- (void)tfs_triggerFromService:(id)service event:(id)event completion:(id /* block */)completion;
- (id)tfs_taskState;
- (id)tfs_errorDomain;

@end

#endif /* TFNTwitterBaseTwitterRecurringTask_h */
