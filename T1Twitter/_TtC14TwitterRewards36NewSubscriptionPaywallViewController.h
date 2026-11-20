//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TwitterRewards36NewSubscriptionPaywallViewController_h
#define _TtC14TwitterRewards36NewSubscriptionPaywallViewController_h
@import Foundation;

#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TSFT1ScribeProviding-Protocol.h"
#include "_TtC14TwitterRewards28NewPaywallBaseViewController.h"

@class Swift.Bool, TwitterRewards.NewPaywallFooterView ?, TwitterRewards.NewPaywallPerksCardView ?, _$s10Foundation3URLVMn ?, _$s14InAppPurchases10IAPProductMp ?, _$s14InAppPurchases11TransactionCMn ?, _$s14InAppPurchases16TransactionQueueCMn ?, _$s14TFSTwitterCore34TwitterAudienceRewardsBenefitsDataCMn, _$sSSSg, _$sSd, _$sSi, _$sSo23TFSTwitterScribeContextCSg, _$sSo32TFSTwitterLegacyScribeLogMethods_pSg, _$sSo6TFNHUDCSg, _$sySaySSGcSg;

@interface TwitterRewards.NewSubscriptionPaywallViewController : TwitterRewards.NewPaywallBaseViewController <TSFT1ScribeProviding> { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSTwitterCore.TwitterAudienceRewardsBenefitsData benefitsData;
    __C.TFSTwitterScribeContext? sourceScribeContext;
    Swift.String? referringPage;
    Swift.Bool accountIsBlueVerified;
    nominal type descriptor for Foundation.URL ? accountAffiliateBadgeURL;
    nominal type descriptor for InAppPurchases.TransactionQueue ? paymentQueue;
    nominal type descriptor for InAppPurchases.Transaction ? paymentTransaction;
    protocol descriptor for InAppPurchases.IAPProduct ? product;
    Swift.Bool allowStripe;
    Swift.Bool isPurchasingStripe;
    __C.TFNHUD? $__lazy_storage_$_purchasingHUD;
    (([Swift.String]) -> ())? alreadyEntitledErrorHandler;
    Swift.Int retryCount;
    Swift.Double backoffIntervalMultiplier;
    Swift.Double retryInitialTimeout;
    nominal type descriptor for Foundation.URL ? termsAndConditionsURL;
    TwitterRewards.NewPaywallPerksCardView ? $__lazy_storage_$_perksCardView;
    TwitterRewards.NewPaywallFooterView ? $__lazy_storage_$__footerView;
}

@property (nonatomic, readonly) id <TFSTwitterLegacyScribeLogMethods> scribe;

/* instance methods */
- (id)scribeContext;
- (void)didTapShareButton;

@end

#endif /* _TtC14TwitterRewards36NewSubscriptionPaywallViewController_h */
