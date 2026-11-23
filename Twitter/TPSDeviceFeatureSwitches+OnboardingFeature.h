//
#ifndef TPSDeviceFeatureSwitches_OnboardingFeature_h
#define TPSDeviceFeatureSwitches_OnboardingFeature_h
@import Foundation;

@interface TPSDeviceFeatureSwitches (OnboardingFeature)

/* class methods */
+ (double)signedOutFallbackFlowTimeoutMaxLoadingDuration;
+ (_Bool)signedOutFallbackDisabled;

@end

#endif /* TPSDeviceFeatureSwitches_OnboardingFeature_h */
