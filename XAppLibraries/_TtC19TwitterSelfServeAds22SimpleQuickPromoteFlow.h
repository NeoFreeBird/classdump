//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19TwitterSelfServeAds22SimpleQuickPromoteFlow_h
#define _TtC19TwitterSelfServeAds22SimpleQuickPromoteFlow_h
@import Foundation;

@class NSObject, Swift.Bool, TwitterSelfServeAds.BoostContentCheckClock, TwitterSelfServeAds.BoostContentCheckPoller ?, TwitterSelfServeAds.BoostContentCheckVerdict ?, TwitterSelfServeAds.BoostSheetCoordinator ?, TwitterSelfServeAds.PromotionCreator ?, TwitterSelfServeAds.QuickPromoteFlowContext, TwitterSelfServeAds.SimpleQuickPromoteFlowRequirementsFetcher ?, _$s13XDesignSystem25TrayManagerViewControllerCMn ?, _$sSbSg, _$sScTyyt _$ss5NeverOMn ?, _$sSdSg, _$ss5Int64VMn ?, _$syycSg;

@interface TwitterSelfServeAds.SimpleQuickPromoteFlow : NSObject { // (Swift)
    /* instance variables */
    TwitterSelfServeAds.QuickPromoteFlowContext context;
    TwitterSelfServeAds.BoostSheetCoordinator ? boostTray;
    nominal type descriptor for XDesignSystem.TrayManagerViewController ? upsellTray;
    nominal type descriptor for XDesignSystem.TrayManagerViewController ? adsScreeningTray;
    TwitterSelfServeAds.PromotionCreator ? promotionCreator;
    TwitterSelfServeAds.SimpleQuickPromoteFlowRequirementsFetcher ? requirementsFetcher;
    Swift.Bool isContinuingToBoost;
    nominal type descriptor for Swift.Int64 ? entryCheckTweetID;
    TwitterSelfServeAds.BoostContentCheckVerdict ? entryCheckVerdict;
    Swift.Double? entryCheckDispatchTime;
    TwitterSelfServeAds.BoostContentCheckClock contentCheckClock;
    Swift.Bool isEntryCheckAcknowledged;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? finalCheckTask;
    TwitterSelfServeAds.BoostContentCheckVerdict ? resolvedFinalVerdict;
    Swift.Bool isAwaitingPost;
    Swift.Double? postSendTime;
    Swift.Bool? $__lazy_storage_$_isContentCheckEnabled;
    TwitterSelfServeAds.BoostContentCheckPoller ? $__lazy_storage_$_contentCheckPoller;
    (() -> ())? didTapTweetAndBoost;
    (() -> ())? terminateFlowBlock;
    (() -> ())? didAbandonPendingPost;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC19TwitterSelfServeAds22SimpleQuickPromoteFlow_h */
