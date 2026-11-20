//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterOnboardingFlowSpec_T1Onboarding_h
#define TFSTwitterOnboardingFlowSpec_T1Onboarding_h
@import Foundation;

@interface TFSTwitterOnboardingFlowSpec (T1Onboarding)

/* class methods */
+ (id)professionalProfileFromDashWithFeatureSwitches:(id)switches;
+ (id)professionalProfileFromEditProfileWithFeatureSwitches:(id)switches;
+ (id)professionalProfileFromProfileSpotlightDeepLinkWithFeatureSwitches:(id)switches;
+ (id)professionalProfileFromSourcePathWithFeatureSwitches:(id)switches featureSwitch:(id)_switch;
+ (id)categorySelectionFlowSpec;
+ (id)settingsChangeCountrySpecWithCode:(id)code;
+ (id)settingsPreferredLanguageSelectorSpec;
+ (id)settingsAppAndContentLanguageSelectorSpec;
+ (id)settingsCreatePasswordSpec;
+ (id)settingsChangePasswordSpec;
+ (id)settingsVerifyPasswordSpec;
+ (id)addOrUpdateEmailSpec;
+ (id)appLanguageConfirmationSpec;
+ (id)setupProfileFromProfileSpecWithProfileID:(long long)id;
+ (id)automationOptInFlowSpec;
+ (id)settingsRenameSecurityKeySpecWithMethodID:(long long)id;
+ (id)settingsDeleteSecurityKeySpecWithMethodID:(long long)id;
+ (id)settings2faSMSEnrollment;
+ (id)settings2faAuthenticatorAppEnrollment;
+ (id)settings2faSecurityKeyEnrollment;
+ (id)settings2faUnenrollmentWithType:(long long)type;
+ (id)disconnectFromSingleSignOnAccountWithProvider:(id)provider;
+ (id)settingsPasskeyRegistration;
+ (id)settingsPasskeyDeletionWithClientApplicationId:(id)id;
+ (id)settingsVerifyAccountOwnership;
+ (id)private_flowNameWithDefault:(id)_default;

/* instance methods */
- (id)initWithFlowName:(id)name startLocation:(id)location retryCount:(long long)count totalTimeout:(double)timeout;
- (id)initWithFlowName:(id)name startLocation:(id)location locationParameters:(id)parameters retryCount:(long long)count totalTimeout:(double)timeout;

@end

#endif /* TFSTwitterOnboardingFlowSpec_T1Onboarding_h */
