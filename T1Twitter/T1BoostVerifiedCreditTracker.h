//
#ifndef T1BoostVerifiedCreditTracker_h
#define T1BoostVerifiedCreditTracker_h
@import Foundation;

@class NSObject;

@interface T1BoostVerifiedCreditTracker : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *didStart;
    NSNumber"16@0:8 *activeAccount;
    NSNumber"16@0:8 *latestRequestIDs;
}

/* class methods */
+ (void)setupWithCurrentAccount:(id)account;

/* instance methods */
- (void)accountDidBecomeActive:(id)active;
- (void)applicationWillEnterForeground;
- (void)promotionDidSucceed:(id)succeed;
- (id)init;

@end

#endif /* T1BoostVerifiedCreditTracker_h */
