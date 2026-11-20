//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19TwitterSelfServeAds23QuickPromoteFlowContext_h
#define _TtC19TwitterSelfServeAds23QuickPromoteFlowContext_h
@import Foundation;

@class InAppPurchases.IAPProduct ?, Swift.Bool, TwitterSelfServeAds.AccountModel, TwitterSelfServeAds.AdAccountModel ?, TwitterSelfServeAds.BoostCta ?, TwitterSelfServeAds.BoostEducationCustomContent ?, TwitterSelfServeAds.BoostVerifiedCreditOffer ?, TwitterSelfServeAds.BoostVerifiedCreditRedeeming ?, TwitterSelfServeAds.Location ?, TwitterSelfServeAds.PaymentPlatform, TwitterSelfServeAds.QuickPromoteAPI, TwitterSelfServeAds.QuickPromoteEventScriber, TwitterSelfServeAds.QuickPromoteFeatures, TwitterSelfServeAds.QuickPromoteFlowState, TwitterSelfServeAds.QuickPromotePrompt ?, TwitterSelfServeAds.SelfServeAdsCheckoutSessionProvider, TwitterSelfServeAds.TweetModel ?, TwitterSelfServeAds.WebViewPresenter, _$s14TFSTwitterCore41TwitterStatusQuickPromoteAdsReviewResultsCMn ?, _$s8TFSModel12ModelContextCMn ?, _$sSo11NSFormatterC, _$sSo16TIPImagePipelineCSg, _TtCs12_SwiftObject;

@interface TwitterSelfServeAds.QuickPromoteFlowContext : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterSelfServeAds.QuickPromoteFlowState state;
    TwitterSelfServeAds.AccountModel accountModel;
    TwitterSelfServeAds.TweetModel ? tweetModel;
    InAppPurchases.IAPProduct ? selectedBudget;
    TwitterSelfServeAds.PaymentPlatform selectedPaymentPlatform;
    TwitterSelfServeAds.AdAccountModel ? adAccountModel;
    TwitterSelfServeAds.Location ? location;
    TwitterSelfServeAds.BoostCta ? cta;
    TwitterSelfServeAds.BoostVerifiedCreditOffer ? redeemingVerifiedCreditOffer;
    TwitterSelfServeAds.QuickPromoteAPI api;
    TwitterSelfServeAds.WebViewPresenter webViewPresenter;
    TwitterSelfServeAds.SelfServeAdsCheckoutSessionProvider checkoutSessionProvider;
    TwitterSelfServeAds.QuickPromoteEventScriber eventScriber;
    nominal type descriptor for TFSModel.ModelContext ? modelContext;
    __C.TIPImagePipeline? imagePipeline;
    __C.NSFormatter countryFormatter;
    TwitterSelfServeAds.QuickPromoteFeatures features;
    Swift.Bool isSelfServeBoost;
    TwitterSelfServeAds.QuickPromotePrompt ? prompt;
    TwitterSelfServeAds.BoostEducationCustomContent ? educationContent;
    Swift.Bool isPostAndBoost;
    nominal type descriptor for TFSTwitterCore.TwitterStatusQuickPromoteAdsReviewResults ? adsReviewResults;
    TwitterSelfServeAds.BoostVerifiedCreditOffer ? verifiedCreditOffer;
    TwitterSelfServeAds.BoostVerifiedCreditRedeeming ? verifiedCreditRedeemer;
}

@end

#endif /* _TtC19TwitterSelfServeAds23QuickPromoteFlowContext_h */
