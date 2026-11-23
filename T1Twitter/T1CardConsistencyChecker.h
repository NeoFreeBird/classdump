//
#ifndef T1CardConsistencyChecker_h
#define T1CardConsistencyChecker_h
@import Foundation;

@class NSObject;

@interface T1CardConsistencyChecker : NSObject

/* class methods */
+ (_Bool)canCheckConsistencyOfCardType:(long long)type;
+ (id)_consistencyCheckerForCardType:(long long)type;

/* instance methods */
- (unsigned long long)verifyCard:(id)card;

@end

#endif /* T1CardConsistencyChecker_h */
