//
#ifndef T1CardConsistencyChecker_Protocol_h
#define T1CardConsistencyChecker_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CardConsistencyChecker <NSObject>

@required

/* required instance methods */
- (unsigned long long)verifyCard:(id)card;

@optional

@end

#endif /* T1CardConsistencyChecker_Protocol_h */
