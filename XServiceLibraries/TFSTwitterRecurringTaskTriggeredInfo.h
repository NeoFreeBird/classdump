//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRecurringTaskTriggeredInfo_h
#define TFSTwitterRecurringTaskTriggeredInfo_h
@import Foundation;

#include "TFSTwitterRecurringTask-Protocol.h"
#include "TFSTwitterRecurringTaskEvent.h"

@class NSObject;

@interface TFSTwitterRecurringTaskTriggeredInfo : NSObject

@property (readonly, nonatomic) id <TFSTwitterRecurringTask> task;
@property (readonly, nonatomic) TFSTwitterRecurringTaskEvent *event;
@property (readonly, nonatomic) long long priority;

/* instance methods */
- (id)initWithTask:(id)task event:(id)event priority:(long long)priority;

@end

#endif /* TFSTwitterRecurringTaskTriggeredInfo_h */
