//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCVC15PaymentsGraphQL42PaymentsInvitationDetailsOperationResponse28GetPaymentsInvitationDetails26XPaymentsInvitationDetails_h
#define _TtCVC15PaymentsGraphQL42PaymentsInvitationDetailsOperationResponse28GetPaymentsInvitationDetails26XPaymentsInvitationDetails_h
@import Foundation;

@class _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars21XPaymentsCurrencyCodeOMn, _$s14GraphQLScalars13NumericStringVMn, _$sSa -> PaymentsGraphQL.XPaymentsTransactionFragment ?, _TtCs12_SwiftObject;

@interface PaymentsGraphQL.PaymentsInvitationDetailsOperationResponse.GetPaymentsInvitationDetails.XPaymentsInvitationDetails : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.XPaymentsCurrencyCode currency;
    nominal type descriptor for GraphQLScalars.NumericString invitationAmountLocalMicro;
    nominal type descriptor for GraphQLScalars.NumericString invitationCount;
    Swift.Array -> PaymentsGraphQL.XPaymentsTransactionFragment ? transactions;
}

@end

#endif /* _TtCVC15PaymentsGraphQL42PaymentsInvitationDetailsOperationResponse28GetPaymentsInvitationDetails26XPaymentsInvitationDetails_h */
