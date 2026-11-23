//
#ifndef T1SurveyCardConsistencyChecker_h
#define T1SurveyCardConsistencyChecker_h
@import Foundation;

#include "T1CardConsistencyChecker-Protocol.h"

@class NSObject;

@interface T1SurveyCardConsistencyChecker : NSObject <T1CardConsistencyChecker> // (Swift)

/* instance methods */
- (unsigned long long)verifyCard:(id)card;
- (id)init;

@end

#endif /* T1SurveyCardConsistencyChecker_h */
