//
#ifndef _TtCC15PaymentsGraphQL50PaymentsCheckTransfersEligibilityOperationResponse25CheckTransfersEligibility_h
#define _TtCC15PaymentsGraphQL50PaymentsCheckTransfersEligibilityOperationResponse25CheckTransfersEligibility_h
@import Foundation;

@class _$sSSSg, _$sSa -> PaymentsGraphQL.PaymentsCheckTransfersEligibilityOperationResponse.CheckTransfersEligibility.Requirements, _$sSaySSGSg, _$sSbSg, _TtCs12_SwiftObject;

@interface PaymentsGraphQL.PaymentsCheckTransfersEligibilityOperationResponse.CheckTransfersEligibility : Swift._SwiftObject { // (Swift)
    /* instance variables */
    [Swift.String]? availableCountryCodes;
    Swift.String? detectedCountryCode;
    Swift.String? eligiblePhoneNumber;
    Swift.Array -> PaymentsGraphQL.PaymentsCheckTransfersEligibilityOperationResponse.CheckTransfersEligibility.Requirements requirements;
    Swift.Bool? requiresLiveVerification;
}

@end

#endif /* _TtCC15PaymentsGraphQL50PaymentsCheckTransfersEligibilityOperationResponse25CheckTransfersEligibility_h */
