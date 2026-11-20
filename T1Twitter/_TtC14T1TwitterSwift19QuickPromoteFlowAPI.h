//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift19QuickPromoteFlowAPI_h
#define _TtC14T1TwitterSwift19QuickPromoteFlowAPI_h
@import Foundation;

@class NSObject, _$s14InAppPurchases18IAPProductsRequestCMn ?, _$s14InAppPurchases29IAPProductCatalogItemProviderMp, _$s19TwitterSelfServeAds13BudgetFetcherCMn ?, _$s19TwitterSelfServeAds20PaymentQueueProviderMp, _$s19TwitterSelfServeAds25PaymentTransactionContextVMn ?, _$s20TwitterActionService0bC0CMn, _$sSS, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.QuickPromoteFlowAPI : NSObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    nominal type descriptor for TwitterSelfServeAds.BudgetFetcher ? budgetFetcher;
    protocol descriptor for InAppPurchases.IAPProductCatalogItemProvider iapProductCatalogItemProvider;
    protocol descriptor for TwitterSelfServeAds.PaymentQueueProvider paymentQueueProvider;
    Swift.String accountID;
    nominal type descriptor for InAppPurchases.IAPProductsRequest ? iapProductsRequest;
    nominal type descriptor for TwitterSelfServeAds.PaymentTransactionContext ? paymentTransactionContext;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift19QuickPromoteFlowAPI_h */
