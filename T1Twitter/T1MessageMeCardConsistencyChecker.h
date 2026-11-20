//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1MessageMeCardConsistencyChecker_h
#define T1MessageMeCardConsistencyChecker_h
@import Foundation;

#include "T1CardConsistencyChecker-Protocol.h"

@class NSObject, NSString;

@interface T1MessageMeCardConsistencyChecker : NSObject <T1CardConsistencyChecker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)verifyCard:(id)card;

@end

#endif /* T1MessageMeCardConsistencyChecker_h */
