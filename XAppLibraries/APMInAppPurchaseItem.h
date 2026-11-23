//
#ifndef APMInAppPurchaseItem_h
#define APMInAppPurchaseItem_h
@import Foundation;

@class NSNumber, NSObject, NSString;

@interface APMInAppPurchaseItem : NSObject

@property (nonatomic) _Bool freeTrial;
@property (nonatomic) _Bool introductoryOffer;
@property (copy, nonatomic) NSString *subscriptionExpirationDateIA5String;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *originalTransactionID;
@property (copy, nonatomic) NSString *transactionID;
@property (copy, nonatomic) NSNumber *webOrderLineItemID;
@property (copy, nonatomic) NSString *originalPurchaseDateIA5String;
@property (copy, nonatomic) NSString *purchaseDateIA5String;
@property (copy, nonatomic) NSString *cancellationDateIA5String;
@property (copy, nonatomic) NSNumber *purchaseType;

/* instance methods */
- (_Bool)isFreeTrial;
- (_Bool)isIntroductoryOffer;

@end

#endif /* APMInAppPurchaseItem_h */
