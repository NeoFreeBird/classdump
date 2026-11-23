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
