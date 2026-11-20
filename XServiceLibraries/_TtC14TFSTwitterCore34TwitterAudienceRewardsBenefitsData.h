//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TFSTwitterCore34TwitterAudienceRewardsBenefitsData_h
#define _TtC14TFSTwitterCore34TwitterAudienceRewardsBenefitsData_h
@import Foundation;

@class NSObject, TFSTwitterCore.StripeProductInfo ?, _$sSSSg, _$sSa -> GraphQLModels.ProductCatalogItemFragment ?, _$sSa -> TFSTwitterCore.TwitterAudienceRewardsBenefitInfo;

@interface TFSTwitterCore.TwitterAudienceRewardsBenefitsData : NSObject { // (Swift)
    /* instance variables */
    Swift.Array -> TFSTwitterCore.TwitterAudienceRewardsBenefitInfo benefitsData;
    Swift.String? creatorIntro;
    Swift.Array -> GraphQLModels.ProductCatalogItemFragment ? products;
    TFSTwitterCore.StripeProductInfo ? stripeProductInfo;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore34TwitterAudienceRewardsBenefitsData_h */
