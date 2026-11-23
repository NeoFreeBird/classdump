//
#ifndef T1AutoplayableContainer_Protocol_h
#define T1AutoplayableContainer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AutoplayableContainer <NSObject>

@required

/* required instance methods */
- (id)autoplayable;

@optional

/* optional instance methods */
- (id)quotedAutoplayable;

@end

#endif /* T1AutoplayableContainer_Protocol_h */
