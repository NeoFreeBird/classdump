//
#ifndef TFSTwitterRecurringTaskActiveItem_h
#define TFSTwitterRecurringTaskActiveItem_h
@import Foundation;

#include "TFSTimer.h"
#include "TFSTwitterRecurringTask-Protocol.h"

@class NSObject;

@interface TFSTwitterRecurringTaskActiveItem : NSObject

@property (retain, nonatomic) id <TFSTwitterRecurringTask> task;
@property (readonly, nonatomic) TFSTimer *timeoutTimer;

/* instance methods */
- (id)initWithTask:(id)task;
- (void)dealloc;
- (void)startTimeoutTimer:(double)timer queue:(id)queue timeoutBlock:(id /* block */)block;
- (void)_tfs_timeout:(id)_tfs_timeout;
- (void)stopTimeoutTimer;

@end

#endif /* TFSTwitterRecurringTaskActiveItem_h */
