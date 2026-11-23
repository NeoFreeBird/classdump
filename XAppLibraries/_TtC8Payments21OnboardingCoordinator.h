//
#ifndef _TtC8Payments21OnboardingCoordinator_h
#define _TtC8Payments21OnboardingCoordinator_h
@import Foundation;

@class Payments.OnboardingFlow, Payments.OnboardingPresenting, Payments.OnboardingVariant ?, _$sSSSg, _$sSa -> PaymentsModels.XPaymentsCustomerIdentity, _$sSa -> PaymentsModels.XPaymentsOnboardingStep, _$syyYac, _TtCs12_SwiftObject;

@interface Payments.OnboardingCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Payments.OnboardingFlow flow;
    Payments.OnboardingVariant ? variant;
    Swift.String? challengeID;
    Swift.Array -> PaymentsModels.XPaymentsOnboardingStep steps;
    () async -> () successHandler;
    Payments.OnboardingPresenting presenter;
    Swift.Array -> PaymentsModels.XPaymentsCustomerIdentity identities;
}

@end

#endif /* _TtC8Payments21OnboardingCoordinator_h */
