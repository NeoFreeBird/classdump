//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
