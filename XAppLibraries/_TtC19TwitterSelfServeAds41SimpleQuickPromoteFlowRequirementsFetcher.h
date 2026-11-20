//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19TwitterSelfServeAds41SimpleQuickPromoteFlowRequirementsFetcher_h
#define _TtC19TwitterSelfServeAds41SimpleQuickPromoteFlowRequirementsFetcher_h
@import Foundation;

@class Swift.Bool, TwitterSelfServeAds.AdAccountModel ?, TwitterSelfServeAds.Location ?, TwitterSelfServeAds.LocationSearch ?, TwitterSelfServeAds.QuickPromoteAPI, TwitterSelfServeAds.QuickPromoteError ?, TwitterSelfServeAds.QuickPromoteEventScriber, _$sSDySS _$s14TFSTwitterCore36TwitterQuickPromoteAudienceEstimatesVMn, _$sSa -> InAppPurchases.IAPProduct, _$sSo11NSFormatterC, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface TwitterSelfServeAds.SimpleQuickPromoteFlowRequirementsFetcher : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterSelfServeAds.QuickPromoteAPI api;
    __C.NSFormatter countryFormatter;
    TwitterSelfServeAds.QuickPromoteEventScriber eventScriber;
    Swift.Bool isGlobalRegionEnabled;
    nominal type descriptor for Swift.Int64 userId;
    TwitterSelfServeAds.AdAccountModel ? adAccount;
    Swift.Dictionary empty-list Swift.String nominal type descriptor for TFSTwitterCore.TwitterQuickPromoteAudienceEstimates audienceEstimates;
    TwitterSelfServeAds.QuickPromoteError ? audienceEstimateError;
    Swift.Array -> InAppPurchases.IAPProduct availableBudgets;
    TwitterSelfServeAds.QuickPromoteError ? budgetFetchError;
    TwitterSelfServeAds.Location ? location;
    TwitterSelfServeAds.LocationSearch ? locationSearch;
}

@end

#endif /* _TtC19TwitterSelfServeAds41SimpleQuickPromoteFlowRequirementsFetcher_h */
