//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCOC15PaymentsGraphQL40PaymentsCreateAuthTokenOperationResponse24CreateXPaymentsAuthToken31XPaymentsCreateAuthTokenSuccess_h
#define _TtCOC15PaymentsGraphQL40PaymentsCreateAuthTokenOperationResponse24CreateXPaymentsAuthToken31XPaymentsCreateAuthTokenSuccess_h
@import Foundation;

@class _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars26XPaymentsAuthSessionStatusOMn ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface PaymentsGraphQL.PaymentsCreateAuthTokenOperationResponse.CreateXPaymentsAuthToken.XPaymentsCreateAuthTokenSuccess : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.XPaymentsAuthSessionStatus ? authStatus;
    Swift.String authToken;
    Swift.String? challengeId;
    Swift.String customerId;
    nominal type descriptor for GraphQLScalars.NumericString expiryTimeMillis;
    Swift.String? region;
    nominal type descriptor for GraphQLScalars.NumericString sessionExpiryTimeMillis;
}

@end

#endif /* _TtCOC15PaymentsGraphQL40PaymentsCreateAuthTokenOperationResponse24CreateXPaymentsAuthToken31XPaymentsCreateAuthTokenSuccess_h */
