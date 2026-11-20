//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8Payments30MerchantAuthorizationViewModel_h
#define _TtC8Payments30MerchantAuthorizationViewModel_h
@import Foundation;

@class MoneyProtos.XMoneyAchMerchantAuthorization, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sySa -> Payments.TransactionViewModel, _TtCs12_SwiftObject;

@interface Payments.MerchantAuthorizationViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    MoneyProtos.XMoneyAchMerchantAuthorization authorization;
    nominal type descriptor for Combine.Published Swift.Bool _isLoadingTransactions;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Payments.TransactionViewModel _transactionViewModels;
    nominal type descriptor for Combine.Published Swift.Bool _isRevoking;
    nominal type descriptor for Combine.Published Swift.Bool _isRestoring;
}

@end

#endif /* _TtC8Payments30MerchantAuthorizationViewModel_h */
