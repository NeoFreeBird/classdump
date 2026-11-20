//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14InAppPurchases27IAPStoreKitPaymentProcessor_h
#define _TtC14InAppPurchases27IAPStoreKitPaymentProcessor_h
@import Foundation;

@class InAppPurchases.IAPStoreKitReceiptVerifier, InAppPurchases.PaymentProcessorDelegate ?, InAppPurchases.PaymentProcessorEnvironment, InAppPurchases.StoreKitEnvironment, NSObject, Swift.Bool, Swift.Bool _$s8StoreKit18VerificationResultOMn _$s8StoreKit11TransactionVMn _$sGc ->, _$s7Combine9PublishedVMn Swift.Bool, _$sSSSg, _$sSbyc, _$sScTyyt _$ss5NeverOMn ?, _$sSo21OS_dispatch_semaphoreC;

@interface InAppPurchases.IAPStoreKitPaymentProcessor : NSObject { // (Swift)
    /* instance variables */
    InAppPurchases.PaymentProcessorEnvironment environment;
    InAppPurchases.PaymentProcessorDelegate ? delegate;
    __C.OS_dispatch_semaphore countryCodeSemaphore;
    Swift.String? lastObservedStorefrontCountryCode;
    InAppPurchases.StoreKitEnvironment storeKitEnvironment;
    InAppPurchases.IAPStoreKitReceiptVerifier receiptVerifier;
    Swift.String? accountID;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? storeKitTransactionUpdateTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? storeKitStoreFrontUpdateTask;
    Swift.Bool isOfferEnabled;
    () -> Swift.Bool isCommercePlatformEnabled;
    () -> Swift.Bool isCommercePlatformForceFinishEnabled;
    Swift.Bool nominal type descriptor for StoreKit.VerificationResult nominal type descriptor for StoreKit.Transaction _$sGc -> claimsTransaction;
    nominal type descriptor for Combine.Published Swift.Bool _suppressOfferErrors;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14InAppPurchases27IAPStoreKitPaymentProcessor_h */
