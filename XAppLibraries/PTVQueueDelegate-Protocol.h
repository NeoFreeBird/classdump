//
#ifndef PTVQueueDelegate_Protocol_h
#define PTVQueueDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVQueueDelegate <NSObject>

@required

/* required instance methods */
- (void)rejected:(int)rejected;

@optional

@end

#endif /* PTVQueueDelegate_Protocol_h */
