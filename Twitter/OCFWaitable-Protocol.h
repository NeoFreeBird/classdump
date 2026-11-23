//
#ifndef OCFWaitable_Protocol_h
#define OCFWaitable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFWaitable <NSObject>

@required

/* required instance methods */
- (_Bool)canWaitWithMessage:(id)message;
- (void)waitWithMessage:(id)message;
- (void)stopWaiting;

@optional

@end

#endif /* OCFWaitable_Protocol_h */
