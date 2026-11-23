//
#ifndef T1DirectMessageCardConsistencyChecker_h
#define T1DirectMessageCardConsistencyChecker_h
@import Foundation;

#include "T1CardConsistencyChecker-Protocol.h"

@class NSObject;

@interface T1DirectMessageCardConsistencyChecker : NSObject <T1CardConsistencyChecker> // (Swift)

/* instance methods */
- (unsigned long long)verifyCard:(id)card;
- (id)init;

@end

#endif /* T1DirectMessageCardConsistencyChecker_h */
