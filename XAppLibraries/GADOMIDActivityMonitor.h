//
#ifndef GADOMIDActivityMonitor_h
#define GADOMIDActivityMonitor_h
@import Foundation;

#include "GADOMIDAdSessionRegistry.h"
#include "GADOMIDClockProtocol-Protocol.h"

@class NSDate, NSObject;

@interface GADOMIDActivityMonitor : NSObject

@property (retain, nonatomic) id <GADOMIDClockProtocol> clock;
@property (retain, nonatomic) GADOMIDAdSessionRegistry *registry;
@property (nonatomic) _Bool started;
@property (readonly) NSDate *lastActivityDate;

/* instance methods */
- (id)initWithAdSessionRegistry:(id)registry clock:(id)clock;
- (void)start;
- (void)updateActivity;
- (void)publishActivity;

@end

#endif /* GADOMIDActivityMonitor_h */
