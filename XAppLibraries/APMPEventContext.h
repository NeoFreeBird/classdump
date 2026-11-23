//
#ifndef APMPEventContext_h
#define APMPEventContext_h
@import Foundation;

#include "APMPEvent.h"

@class NSArray, NSMutableArray, NSObject;

@interface APMPEventContext : NSObject {
    /* instance variables */
    NSMutableArray *_loggedEvents;
}

@property (retain, nonatomic) APMPEvent *inputEvent;
@property (retain, nonatomic) APMPEvent *outputEvent;
@property (readonly, nonatomic) NSArray *eventsToLog;

/* instance methods */
- (id)init;
- (id)initWithEvent:(id)event;
- (void)logEventWithName:(id)name timestamp:(double)timestamp parameters:(id)parameters;

@end

#endif /* APMPEventContext_h */
