//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC15PaymentsGraphQL44XPaymentsTransactionCompletionStatusFragment12Presentation_h
#define _TtCC15PaymentsGraphQL44XPaymentsTransactionCompletionStatusFragment12Presentation_h
@import Foundation;

@class PaymentsGraphQL.XPaymentsAmountFragment, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars48XPaymentsTransactionPresentationCompletionStatusOMn ?, _$s13GraphQLModels5UnionOMn PaymentsGraphQL.XPaymentsTransactionCompletionStatusFragment.Presentation.EntityResults ?, _$s14GraphQLScalars13NumericStringVMn ?, _$sSSSg, _$sSa -> PaymentsGraphQL.XPaymentsTransactionCompletionStatusFragment.Presentation.Actions, _TtCs12_SwiftObject;

@interface PaymentsGraphQL.XPaymentsTransactionCompletionStatusFragment.Presentation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> PaymentsGraphQL.XPaymentsTransactionCompletionStatusFragment.Presentation.Actions actions;
    PaymentsGraphQL.XPaymentsAmountFragment amount;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.XPaymentsTransactionPresentationCompletionStatus ? completionStatus;
    Swift.String? completionSubtitle;
    Swift.String? completionTitle;
    nominal type descriptor for GraphQLModels.Union PaymentsGraphQL.XPaymentsTransactionCompletionStatusFragment.Presentation.EntityResults ? entityResults;
    nominal type descriptor for GraphQLScalars.NumericString ? expirationTimestamp;
}

@end

#endif /* _TtCC15PaymentsGraphQL44XPaymentsTransactionCompletionStatusFragment12Presentation_h */
