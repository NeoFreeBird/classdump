//
#ifndef _TtC15PaymentsGraphQL31PaymentsRequestTransferMutation_h
#define _TtC15PaymentsGraphQL31PaymentsRequestTransferMutation_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars26XPaymentsCurrencyCodeInputOMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface PaymentsGraphQL.PaymentsRequestTransferMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString amountLocalMicro;
    Swift.String? description;
    nominal type descriptor for GraphQLScalars.XPaymentsCurrencyCodeInput currency;
    nominal type descriptor for GraphQLScalars.NumericString senderTwitterUserID;
    Swift.String? destinationAccountID;
    Swift.String? idempotencyKey;
    Swift.Bool includeCanPay;
    Swift.Bool includeDmMuting;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeProfessional;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC15PaymentsGraphQL31PaymentsRequestTransferMutation_h */
