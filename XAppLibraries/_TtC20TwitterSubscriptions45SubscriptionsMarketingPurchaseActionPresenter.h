//
#ifndef _TtC20TwitterSubscriptions45SubscriptionsMarketingPurchaseActionPresenter_h
#define _TtC20TwitterSubscriptions45SubscriptionsMarketingPurchaseActionPresenter_h
@import Foundation;

@class InAppPurchases.TransactionQueue, Swift.Bool, TwitterSubscriptions.Claim _$sSg_SbtcSg ->, TwitterSubscriptions.EventScriber, _$sSo16UIViewControllerCSgXw, _$sSo6TFNHUDCSg, _TtCs12_SwiftObject;

@interface TwitterSubscriptions.SubscriptionsMarketingPurchaseActionPresenter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    InAppPurchases.TransactionQueue paymentQueue;
    TwitterSubscriptions.EventScriber eventScriber;
    __C.TFNHUD? purchasingHUD;
    weak __C.UIViewController? fromViewController;
    TwitterSubscriptions.Claim _$sSg_SbtcSg -> completionBlock;
    Swift.Bool isInProgress;
}

@end

#endif /* _TtC20TwitterSubscriptions45SubscriptionsMarketingPurchaseActionPresenter_h */
