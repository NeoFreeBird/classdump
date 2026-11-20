//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
