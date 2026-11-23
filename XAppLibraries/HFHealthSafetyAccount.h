//
#ifndef HFHealthSafetyAccount_h
#define HFHealthSafetyAccount_h
@import Foundation;

@class NSObject;

@interface HFHealthSafetyAccount : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 userID;
    @40@0:8:16@24@32 featureSwitches;
}

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)initWithUserID:(long long)id featureSwitches:(id)switches;
- (id)init;

@end

#endif /* HFHealthSafetyAccount_h */
