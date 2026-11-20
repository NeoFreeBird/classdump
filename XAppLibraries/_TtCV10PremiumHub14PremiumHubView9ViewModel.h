//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCV10PremiumHub14PremiumHubView9ViewModel_h
#define _TtCV10PremiumHub14PremiumHubView9ViewModel_h
@import Foundation;

@class PremiumHub.PremiumHubFeatureAccess, PremiumHub.PremiumHubUpgradeCard ?, _$s10Foundation4DateVMn ?, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sySa -> _$s13GraphQLModels33PremiumHubConfigOperationResponseC0cdE0C7ContentC7PrimaryCMn, _$sSS, _$sSbyc, _$sSo16TIPImagePipelineC, _TtCs12_SwiftObject;

@interface PremiumHub.PremiumHubView.ViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String accountID;
    __C.TIPImagePipeline imagePipeline;
    PremiumHub.PremiumHubFeatureAccess featureAccess;
    nominal type descriptor for Foundation.Date ? verifiedSinceDate;
    PremiumHub.PremiumHubUpgradeCard ? upgradeCard;
    () -> Swift.Bool replacesCheckmarkReviewCard;
    nominal type descriptor for Combine.Published Swift.Bool _loading;
    nominal type descriptor for Combine.Published Swift.Bool _checkmarkInReview;
    nominal type descriptor for Combine.Published Swift.String _reloadID;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> nominal type descriptor for GraphQLModels.PremiumHubConfigOperationResponse.PremiumHubConfig.Content.Primary _sections;
}

@end

#endif /* _TtCV10PremiumHub14PremiumHubView9ViewModel_h */
