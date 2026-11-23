//
#ifndef _TtC14GraphQLActions47SuperFollowsCreateStripeSubscriptionUrlMutation_h
#define _TtC14GraphQLActions47SuperFollowsCreateStripeSubscriptionUrlMutation_h
@import Foundation;

@class GraphQLModels.PurchaseAttributionInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.SuperFollowsCreateStripeSubscriptionUrlMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String cancelURL;
    Swift.String externalProductID;
    Swift.String successURL;
    GraphQLModels.PurchaseAttributionInput purchaseAttribution;
}

@end

#endif /* _TtC14GraphQLActions47SuperFollowsCreateStripeSubscriptionUrlMutation_h */
