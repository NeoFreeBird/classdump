//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMInAppPurchaseTransactionReporter_h
#define APMInAppPurchaseTransactionReporter_h
@import Foundation;

@class NSArray, NSDateFormatter, NSObject;

@interface APMInAppPurchaseTransactionReporter : NSObject {
    /* instance variables */
    NSArray *_allPurchaseItems;
    NSDateFormatter *_iapDateFormatter;
}

/* class methods */
+ (id)sharedInstance;
+ (id)transactionFingerprint:(id)fingerprint;

/* instance methods */
- (id)init;
- (void)reportTransactionsFromArray:(id)array;
- (void)reportTransactionWithProductID:(id)id transactionID:(id)id originalTransactionID:(id)id webOrderLineItemID:(id)id productType:(long long)type isFreeTrial:(_Bool)trial isIntroductoryOffer:(_Bool)offer paymentQuantity:(long long)quantity purchaseDate:(id)date originalPurchaseDate:(id)date subscriptionExpirationDate:(id)date cancellationDate:(id)date environment:(id)environment isVerified:(_Bool)verified;
- (void)reportTransactionWithProduct:(id)product paymentQuantity:(long long)quantity transactionIdentifier:(id)identifier originalTransactionIdentifier:(id)identifier transactionDate:(id)date verifyReceipt:(_Bool)receipt environment:(id)environment storeKitVersion:(id)version;
- (void)parsePurchasedItemsFromReceipt;
- (void)paymentQueue:(id)queue updatedFilteredTransactions:(id)transactions;
- (id)ia5StringFromDate:(id)date;

@end

#endif /* APMInAppPurchaseTransactionReporter_h */
