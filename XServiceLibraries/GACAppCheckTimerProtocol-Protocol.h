//
#ifndef GACAppCheckTimerProtocol_Protocol_h
#define GACAppCheckTimerProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACAppCheckTimerProtocol <NSObject>

@required

/* required instance methods */
- (void)invalidate;

@optional

@end

#endif /* GACAppCheckTimerProtocol_Protocol_h */
