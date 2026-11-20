//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1GiftingPremiumPurchaseActionPresenter_h
#define T1GiftingPremiumPurchaseActionPresenter_h
@import Foundation;

@class NSObject;

@interface T1GiftingPremiumPurchaseActionPresenter : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *targetUserID;
    NSNumber"16@0:8 *paymentQueue;
    NSNumber"16@0:8 *completionBlock;
    NSNumber"16@0:8 *isInProgress;
}

/* class methods */
+ (id)giftingPremiumTransactionDidSucceed;
+ (id)giftingPremiumTransactionDidSucceedTargetUserKey;

/* instance methods */
- (id)init;

@end

#endif /* T1GiftingPremiumPurchaseActionPresenter_h */
