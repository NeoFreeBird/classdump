//
#ifndef _TtC14GraphQLActions21ReceiptRedeemMutation_h
#define _TtC14GraphQLActions21ReceiptRedeemMutation_h
@import Foundation;

@class GraphQLModels.PaymentReceiptInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.ReceiptRedeemMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLModels.PaymentReceiptInput receipt;
    Swift.Bool? includeSuperFollowRedemptionFields;
}

@end

#endif /* _TtC14GraphQLActions21ReceiptRedeemMutation_h */
