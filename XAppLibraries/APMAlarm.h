//
#ifndef APMAlarm_h
#define APMAlarm_h
@import Foundation;

#include "OS_dispatch_source-Protocol.h"

@class NSDate, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface APMAlarm : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_name;
}

@property (readonly, nonatomic) NSDate *scheduledTimestamp;

/* instance methods */
- (id)initWithDispatchQueue:(id)queue name:(id)name;
- (void)runAfterDelay:(double)delay withBlock:(id /* block */)block;
- (void)cancel;
- (_Bool)hasActiveTimer;
- (void)dealloc;

@end

#endif /* APMAlarm_h */
