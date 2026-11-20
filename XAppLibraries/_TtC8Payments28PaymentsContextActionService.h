//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8Payments28PaymentsContextActionService_h
#define _TtC8Payments28PaymentsContextActionService_h
@import Foundation;

@class Payments.PaymentsAuthSession, Payments.PaymentsConfiguration, Payments.PaymentsFingerprint, Payments.PaymentsModelContext, Payments.PaymentsRegionService, _$s10Foundation4DateVMn ?, _$s20TwitterActionService0bC0CMn, _$s24TFSFeatureSwitchesAccess014AccountFeatureB0CMn, _$sSS, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface Payments.PaymentsContextActionService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TwitterActionService.ActionService actionService;
    Payments.PaymentsModelContext modelContext;
    Payments.PaymentsConfiguration configuration;
    Payments.PaymentsFingerprint fingerprint;
    Payments.PaymentsAuthSession authSession;
    nominal type descriptor for TFSFeatureSwitchesAccess.AccountFeatureSwitches accountFeatureSwitches;
    Payments.PaymentsRegionService regionService;
    nominal type descriptor for Swift.Int64 userID;
    Swift.String accountID;
    nominal type descriptor for Foundation.Date ? routeToPrimaryUntil;
}

@end

#endif /* _TtC8Payments28PaymentsContextActionService_h */
