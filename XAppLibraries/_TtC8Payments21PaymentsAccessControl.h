//
#ifndef _TtC8Payments21PaymentsAccessControl_h
#define _TtC8Payments21PaymentsAccessControl_h
@import Foundation;

@class Payments.PaymentsActionService, Payments.PaymentsAuthSession, Payments.PaymentsDataSource, Payments.PaymentsLogging, Payments.PaymentsModelContext, _$s24TFSFeatureSwitchesAccess014AccountFeatureB0CMn, _$s7Combine9PublishedVMn Payments.PaymentsAccessControl.State, _TtCs12_SwiftObject;

@interface Payments.PaymentsAccessControl : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Payments.PaymentsActionService actionService;
    Payments.PaymentsDataSource dataSource;
    Payments.PaymentsModelContext modelContext;
    Payments.PaymentsAuthSession authSession;
    nominal type descriptor for TFSFeatureSwitchesAccess.AccountFeatureSwitches accountFeatureSwitches;
    Payments.PaymentsLogging logger;
    nominal type descriptor for Combine.Published Payments.PaymentsAccessControl.State _state;
}

@end

#endif /* _TtC8Payments21PaymentsAccessControl_h */
