//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels32InAppPurchaseTransactionFragment_h
#define _TtC13GraphQLModels32InAppPurchaseTransactionFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.InAppPurchasePaymentStatus, GraphQLModels.Union GraphQLModels.InAppPurchaseTransactionFragment.Metadata ?, _$sSS, _TtCs12_SwiftObject;

@interface GraphQLModels.InAppPurchaseTransactionFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String externalTransactionId;
    GraphQLModels.Union GraphQLModels.InAppPurchaseTransactionFragment.Metadata ? metadata;
    Swift.String paymentId;
    GraphQLModels.Enumeration GraphQLScalars.InAppPurchasePaymentStatus status;
}

@end

#endif /* _TtC13GraphQLModels32InAppPurchaseTransactionFragment_h */
