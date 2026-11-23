//
#ifndef T1MediaAppCardConsistencyChecker_h
#define T1MediaAppCardConsistencyChecker_h
@import Foundation;

#include "T1CardConsistencyChecker-Protocol.h"

@class NSObject, NSString;

@interface T1MediaAppCardConsistencyChecker : NSObject <T1CardConsistencyChecker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)verifyCard:(id)card;

@end

#endif /* T1MediaAppCardConsistencyChecker_h */
