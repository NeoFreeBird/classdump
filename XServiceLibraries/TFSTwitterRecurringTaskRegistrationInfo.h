//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRecurringTaskRegistrationInfo_h
#define TFSTwitterRecurringTaskRegistrationInfo_h
@import Foundation;

#include "TFSTwitterRecurringTask-Protocol.h"

@class NSArray, NSObject;

@interface TFSTwitterRecurringTaskRegistrationInfo : NSObject

@property (retain, nonatomic) id <TFSTwitterRecurringTask> task;
@property (copy, nonatomic) NSArray *eventSources;
@property (nonatomic) _Bool observingEventSources;

/* instance methods */
- (_Bool)isObservingEventSources;

@end

#endif /* TFSTwitterRecurringTaskRegistrationInfo_h */
