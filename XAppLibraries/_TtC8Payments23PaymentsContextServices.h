//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8Payments23PaymentsContextServices_h
#define _TtC8Payments23PaymentsContextServices_h
@import Foundation;

@class Payments.HomeNavigationState, Payments.PaymentsAccessControl, Payments.PaymentsAuthSession, Payments.PaymentsCheckoutSession, Payments.PaymentsConfiguration, Payments.PaymentsContextActionService, Payments.PaymentsContextDocumentStorageService, Payments.PaymentsContextModelContext, Payments.PaymentsDataSource, Payments.PaymentsFingerprint, Payments.PaymentsIdentityVerificationCoordinator, Payments.PaymentsLogging, Payments.PaymentsPlaidFundingCardService, Payments.PaymentsPreferencesService, Payments.PaymentsRegionService, Payments.PaymentsSardineMonitoringSession, Payments.PaymentsStripeIssuedCardService, _TtCs12_SwiftObject;

@interface Payments.PaymentsContextServices : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Payments.PaymentsAccessControl accessControl;
    Payments.PaymentsDataSource dataSource;
    Payments.PaymentsConfiguration configuration;
    Payments.PaymentsCheckoutSession checkoutSession;
    Payments.PaymentsContextActionService actionService;
    Payments.PaymentsContextModelContext modelContext;
    Payments.PaymentsSardineMonitoringSession monitoringSession;
    Payments.PaymentsAuthSession authSession;
    Payments.PaymentsFingerprint fingerprint;
    Payments.PaymentsPreferencesService preferencesService;
    Payments.PaymentsIdentityVerificationCoordinator identityVerificationCoordinator;
    Payments.PaymentsPlaidFundingCardService fundingCardService;
    Payments.PaymentsStripeIssuedCardService issuedCardService;
    Payments.PaymentsContextDocumentStorageService storageService;
    Payments.PaymentsLogging logger;
    Payments.HomeNavigationState homeNavigationState;
    Payments.PaymentsRegionService regionService;
}

@end

#endif /* _TtC8Payments23PaymentsContextServices_h */
