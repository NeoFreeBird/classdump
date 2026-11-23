//
#ifndef T1QuickPromoteAvailability_h
#define T1QuickPromoteAvailability_h
@import Foundation;

@class NSObject;

@interface T1QuickPromoteAvailability : NSObject // (Swift)

/* class methods */
+ (_Bool)isSelfServeBoostForStatus:(id)status;
+ (id)boostEventInfoWithTweetID:(long long)id isSelfServeBoost:(_Bool)boost;
+ (id)boostEventInfoWithTweetID:(long long)id isSelfServeBoost:(_Bool)boost offer:(id)offer;
+ (_Bool)isAvailableForStatus:(id)status;
+ (_Bool)isAvailableForStatusViewModel:(id)model accountID:(id)id;
+ (_Bool)isAvailableForStatusViewModel:(id)model accountID:(id)id allowThirdPartyBoost:(_Bool)boost;
+ (_Bool)isBlockedByAdsScreeningForStatusViewModel:(id)model accountID:(id)id allowThirdPartyBoost:(_Bool)boost;

/* instance methods */
- (id)init;

@end

#endif /* T1QuickPromoteAvailability_h */
