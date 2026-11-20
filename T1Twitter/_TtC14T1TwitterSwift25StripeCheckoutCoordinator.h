//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift25StripeCheckoutCoordinator_h
#define _TtC14T1TwitterSwift25StripeCheckoutCoordinator_h
@import Foundation;

@class NSObject, T1TwitterSwift.StripeCheckoutCoordinator.CheckoutContext ?, T1TwitterSwift.StripeCheckoutViewController ?, _$s10Foundation3URLVMn ?, _$s20TwitterSubscriptions0B28MarketingPageScribingManagerCMn, _$sSS, _$sSo16UIViewControllerCSgXw, _$sSo17TFNTwitterAccountC, _$sySS_ _$s14TFSTwitterCore22ProductCatalogCategoryOMn _$stcSg, _$syycSg;

@interface T1TwitterSwift.StripeCheckoutCoordinator : NSObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    nominal type descriptor for TwitterSubscriptions.SubscriptionsMarketingPageScribingManager scribingManager;
    Swift.String referringPage;
    weak __C.UIViewController? presenter;
    T1TwitterSwift.StripeCheckoutCoordinator.CheckoutContext ? checkoutContext;
    nominal type descriptor for Foundation.URL ? checkoutURL;
    T1TwitterSwift.StripeCheckoutViewController ? checkoutVC;
     empty-list Swift.String first-element-marker  nominal type descriptor for TFSTwitterCore.ProductCatalogCategory _$stcSg onSuccess;
    (() -> ())? onFailure;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift25StripeCheckoutCoordinator_h */
