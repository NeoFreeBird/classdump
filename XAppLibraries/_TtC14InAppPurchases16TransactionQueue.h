//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14InAppPurchases16TransactionQueue_h
#define _TtC14InAppPurchases16TransactionQueue_h
@import Foundation;

@class DispatchQueue, InAppPurchases.PaymentProcessor, InAppPurchases.TransactionStore, Swift.Bool, _$sSD -> _$s10Foundation4UUIDVMn _$sSo11NSHashTableCyyXlG, _$sSDySSSo11NSHashTableCyyXlGG, _$sSo11NSHashTableCyyXlG, _TtCs12_SwiftObject;

@interface InAppPurchases.TransactionQueue : Swift._SwiftObject { // (Swift)
    /* instance variables */
    InAppPurchases.TransactionStore store;
    InAppPurchases.PaymentProcessor paymentProcessor;
    __C.NSHashTable<Swift.AnyObject> globalObservers;
    [Swift.String : __C.NSHashTable<Swift.AnyObject>] scopedObservers;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID __C.NSHashTable<Swift.AnyObject> transactionObservers;
    DispatchQueue observerQueue;
    Swift.Bool loaded;
    Swift.Bool started;
}

@end

#endif /* _TtC14InAppPurchases16TransactionQueue_h */
