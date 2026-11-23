//
#ifndef _TtCVC15PaymentsGraphQL42PaymentsInvitationDetailsOperationResponse28GetPaymentsInvitationDetails26XPaymentsInvitationDetails_h
#define _TtCVC15PaymentsGraphQL42PaymentsInvitationDetailsOperationResponse28GetPaymentsInvitationDetails26XPaymentsInvitationDetails_h
@import Foundation;

@class _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars21XPaymentsCurrencyCodeOMn, _$s13GraphQLModels19UserResultsFragmentCMn ?, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$sSSSg, _$sSa -> PaymentsGraphQL.PaymentsInvitationDetailsOperationResponse.GetPaymentsInvitationDetails.XPaymentsInvitationDetails.Transactions ?, _TtCs12_SwiftObject;

@interface PaymentsGraphQL.PaymentsInvitationDetailsOperationResponse.GetPaymentsInvitationDetails.XPaymentsInvitationDetails : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for GraphQLScalars.NumericString ? apyBasisPoints;
    Swift.String? apyTagline;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.XPaymentsCurrencyCode currency;
    nominal type descriptor for GraphQLScalars.NumericString ? incentiveAmountLocalMicro;
    Swift.String? incentiveMemo;
    nominal type descriptor for GraphQLModels.UserResultsFragment ? incentiveSenderResults;
    nominal type descriptor for GraphQLScalars.NumericString invitationAmountLocalMicro;
    nominal type descriptor for GraphQLScalars.NumericString invitationCount;
    Swift.Array -> PaymentsGraphQL.PaymentsInvitationDetailsOperationResponse.GetPaymentsInvitationDetails.XPaymentsInvitationDetails.Transactions ? transactions;
}

@end

#endif /* _TtCVC15PaymentsGraphQL42PaymentsInvitationDetailsOperationResponse28GetPaymentsInvitationDetails26XPaymentsInvitationDetails_h */
