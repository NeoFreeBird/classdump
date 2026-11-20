//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TwitterRewards16BenefitViewModel_h
#define _TtC14TwitterRewards16BenefitViewModel_h
@import Foundation;

@class NSObject, TwitterRewards.SuperFollowsMarketingPageAccountDataSource, TwitterRewards.SuperFollowsMarketingPageCreatorDataSource, _$s14TFSTwitterCore33TwitterAudienceRewardsBenefitInfoCMn, _$sSSSgSg, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewCSgSg;

@interface TwitterRewards.BenefitViewModel : NSObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSTwitterCore.TwitterAudienceRewardsBenefitInfo benefitInfo;
    TwitterRewards.SuperFollowsMarketingPageCreatorDataSource creator;
    TwitterRewards.SuperFollowsMarketingPageAccountDataSource account;
    __C.TIPImagePipeline? imagePipeline;
    Swift.String?? $__lazy_storage_$_title;
    Swift.String?? $__lazy_storage_$_benefitDescription;
    Swift.String?? $__lazy_storage_$_userHandleString;
    __C.UIView?? $__lazy_storage_$_benefitAssetView;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TwitterRewards16BenefitViewModel_h */
