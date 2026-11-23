//
#ifndef T1ConversationCardConsistencyChecker_h
#define T1ConversationCardConsistencyChecker_h
@import Foundation;

#include "T1CardConsistencyChecker-Protocol.h"

@class NSObject, NSString;

@interface T1ConversationCardConsistencyChecker : NSObject <T1CardConsistencyChecker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)verifyCard:(id)card;

@end

#endif /* T1ConversationCardConsistencyChecker_h */
