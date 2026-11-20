//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14InAppPurchases11Transaction_h
#define _TtC14InAppPurchases11Transaction_h
@import Foundation;

@class InAppPurchases.Transaction.State, InAppPurchases.TransactionContext ?, _$s10Foundation4DateVMn ?, _$s10Foundation4UUIDVMn, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface InAppPurchases.Transaction : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.UUID transactionID;
    Swift.String productID;
    Swift.String processorProductID;
    Swift.String accountID;
    InAppPurchases.TransactionContext ? context;
    Swift.String featureID;
    InAppPurchases.Transaction.State state;
    nominal type descriptor for Foundation.Date ? startedAt;
    nominal type descriptor for Foundation.Date ? interruptedAt;
    Swift.String? processorTransactionID;
}

@end

#endif /* _TtC14InAppPurchases11Transaction_h */
