//
#ifndef _TtC15PaymentsGraphQL33PaymentsLinkPayoutAccountMutation_h
#define _TtC15PaymentsGraphQL33PaymentsLinkPayoutAccountMutation_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$sSa -> _$s14GraphQLScalars24XPaymentsPayoutTypeInputOMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface PaymentsGraphQL.PaymentsLinkPayoutAccountMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String? destinationAccountID;
    Swift.Array -> nominal type descriptor for GraphQLScalars.XPaymentsPayoutTypeInput ? payoutTypes;
}

@end

#endif /* _TtC15PaymentsGraphQL33PaymentsLinkPayoutAccountMutation_h */
