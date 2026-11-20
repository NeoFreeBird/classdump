//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterStatusQuickPromoteEligibility_h
#define TFSTwitterStatusQuickPromoteEligibility_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterStatusQuickPromoteAdsReviewResults.h"

@class NSObject, NSString;

@interface TFSTwitterStatusQuickPromoteEligibility : NSObject <NSCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) NSString *adsAccountId;
@property (nonatomic, readonly) NSString *adsAccountCountryCode;
@property (nonatomic) long long eligibility;
@property (nonatomic, retain) TFSTwitterStatusQuickPromoteAdsReviewResults *adsReviewResults;
@property (nonatomic) _Bool isOptimisticallyBoosted;
@property (nonatomic, copy) NSString *optimisticBoostScreenName;
@property (nonatomic, copy) NSString *optimisticBoostDisplayName;
@property (nonatomic, readonly) _Bool isEligibleForPromotion;
@property (nonatomic, readonly) _Bool isRunningPromotion;
@property (nonatomic, readonly) TFSTwitterStatusQuickPromoteAdsReviewResults *blockingAdsReviewResults;
@property (nonatomic, readonly) _Bool isBlockedByAdsScreening;
@property (nonatomic, readonly) _Bool hasBeenPromotedBefore;
@property (nonatomic, readonly) _Bool isCampaignRunningOrFinished;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(void *)zone;
- (id)initWithAdsAccountId:(id)id adsAccountCountryCode:(id)code eligibility:(long long)eligibility;
- (id)initWithCoder:(id)coder;
- (id)initWithJsonDictionary:(id)dictionary;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterStatusQuickPromoteEligibility_h */
