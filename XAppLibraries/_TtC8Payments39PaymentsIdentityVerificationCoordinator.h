//
#ifndef _TtC8Payments39PaymentsIdentityVerificationCoordinator_h
#define _TtC8Payments39PaymentsIdentityVerificationCoordinator_h
@import Foundation;

@class Payments.PaymentsPersonaIdentityVerificationService, Payments.PaymentsSocureIdentityVerificationService, _TtCs12_SwiftObject;

@interface Payments.PaymentsIdentityVerificationCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Payments.PaymentsSocureIdentityVerificationService socureService;
    Payments.PaymentsPersonaIdentityVerificationService personaService;
}

@end

#endif /* _TtC8Payments39PaymentsIdentityVerificationCoordinator_h */
