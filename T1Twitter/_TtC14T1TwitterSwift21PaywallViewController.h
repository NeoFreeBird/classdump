//
#ifndef _TtC14T1TwitterSwift21PaywallViewController_h
#define _TtC14T1TwitterSwift21PaywallViewController_h
@import Foundation;

#include "_TtC14T1TwitterSwift25PreloadedWebviewContainer.h"

@class Swift.Bool, T1TwitterSwift.PaywallConfig ?, T1TwitterSwift.PaywallWebviewState, T1TwitterSwift.StripeCheckoutCoordinator, _$s10Foundation3URLVMn ?, _$s14InAppPurchases16TransactionQueueCMn ?, _$s20TwitterSubscriptions0B28MarketingPageScribingManagerCMn, _$s20TwitterSubscriptions0B32MarketingPurchaseActionPresenterCMn ?, _$s20TwitterSubscriptions0B33MarketingPageCatalogItemsProviderCMn, _$s20TwitterSubscriptions25SubscriptionUpsellFeatureOMn ?, _$sSS, _$sSaySSGSg, _$sSo17TFNTwitterAccountC, _$sSo6TFNHUDCSg, _$sSo9TFNButtonCSg, _$sy -> _$ss6ResultOMn _$s14InAppPurchases16TransactionQueueCMn _$ss5ErrorMp _$sGcc ->, _$sySaySSGcSg, _$sypSg, _$syyc;

@interface T1TwitterSwift.PaywallViewController : T1TwitterSwift.PreloadedWebviewContainer { // (Swift)
    /* instance variables */
    T1TwitterSwift.PaywallConfig ? paywallConfig;
    nominal type descriptor for Foundation.URL ? redirectSuccessURL;
    __C.TFNTwitterAccount account;
    Swift.String referringPage;
    nominal type descriptor for TwitterSubscriptions.SubscriptionUpsellFeature ? referringSubscriptionUpsellFeature;
    nominal type descriptor for TwitterSubscriptions.SubscriptionsMarketingPageScribingManager scribingManager;
    T1TwitterSwift.PaywallWebviewState paywallState;
    nominal type descriptor for TwitterSubscriptions.SubscriptionsMarketingPurchaseActionPresenter ? purchaseActionPresenter;
    Swift.String webviewEventHandler;
    (([Swift.String]) -> ())? alreadyEntitledErrorHandler;
    [Swift.String]? alreadyEntitledToStoreKitProductIDs;
    nominal type descriptor for TwitterSubscriptions.SubscriptionsMarketingPageCatalogItemsProvider catalogItemsProvider;
     empty-list  -> nominal type descriptor for Swift.Result nominal type descriptor for InAppPurchases.TransactionQueue protocol descriptor for Swift.Error _$sGcc -> paymentQueueProvider;
    nominal type descriptor for InAppPurchases.TransactionQueue ? paymentQueue;
    Any? notificationObserver;
    Swift.Bool didLogImpression;
    Swift.Bool didLogContentReady;
    () -> () dismissHandler;
    __C.TFNButton? dismissButton;
    __C.TFNHUD? $__lazy_storage_$_HUD;
    T1TwitterSwift.StripeCheckoutCoordinator stripeCheckoutCoordinator;
}

/* instance methods */
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidLoad;
- (void)dismissButtonTapped;
- (void)viewControllerDidDismissAnimated:(_Bool)animated;
- (void)applicationWillEnterForegroundFromBackground:(id)background;
- (void)dealloc;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift21PaywallViewController_h */
