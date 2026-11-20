//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GraphQLActions46SubscriptionCheckoutUrlWithEligibilityMutation_h
#define _TtC14GraphQLActions46SubscriptionCheckoutUrlWithEligibilityMutation_h
@import Foundation;

@class GraphQLModels.PurchaseAttributionInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.SubscriptionCheckoutUrlWithEligibilityMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String cancelURL;
    Swift.String externalProductID;
    Swift.String externalPriceID;
    Swift.String successURL;
    GraphQLModels.PurchaseAttributionInput purchaseAttribution;
}

@end

#endif /* _TtC14GraphQLActions46SubscriptionCheckoutUrlWithEligibilityMutation_h */
