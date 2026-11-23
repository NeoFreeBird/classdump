//
#ifndef T1SuperFollowControlDelegate_Protocol_h
#define T1SuperFollowControlDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1SuperFollowControlDelegate <NSObject>

@required

/* required instance methods */
- (void)superFollowControlDidTap:(id)tap;

@optional

@end

#endif /* T1SuperFollowControlDelegate_Protocol_h */
