//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SubscriptionJourneyManager_h
#define T1SubscriptionJourneyManager_h
@import Foundation;

@class NSObject;

@interface T1SubscriptionJourneyManager : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *upsellFatigueManager;
    NSNumber"16@0:8 *configRepository;
    NSNumber"16@0:8 *offerAvailabilityCache;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (_Bool)shouldShowProfileAnalyticUpsellWithAccount:(id)account;
- (_Bool)shouldShowProfileUpgradeUpsellWithAccount:(id)account;
- (_Bool)shouldShowReplyBoostUpsellWithAccount:(id)account;
- (void)dismissReplyBoostUpsellWithAccount:(id)account;
- (_Bool)shouldShowProfileVisitorUpsellWithAccount:(id)account;
- (void)dismissProfileVisitorUpsellWithAccount:(id)account;
- (void)setupWithAccount:(id)account;
- (id)init;

@end

#endif /* T1SubscriptionJourneyManager_h */
