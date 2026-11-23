//
#ifndef T1ComplatPlanNames_h
#define T1ComplatPlanNames_h
@import Foundation;

@class NSObject;

@interface T1ComplatPlanNames : NSObject // (Swift)

/* class methods */
+ (id)nameForLegacyTier:(long long)tier account:(id)account;
+ (id)nameForHeldLegacyTier:(long long)tier account:(id)account;
+ (id)subscriptionsTitleForAccount:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1ComplatPlanNames_h */
