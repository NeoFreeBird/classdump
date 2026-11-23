//
#ifndef TPSDeviceFeatureSwitches_TwitterAnimation_h
#define TPSDeviceFeatureSwitches_TwitterAnimation_h
@import Foundation;

@interface TPSDeviceFeatureSwitches (TwitterAnimation)

/* class methods */
+ (id)userDefaultsKeysRedactionList;
+ (id)HTTPHeaderFieldRedactionList;
+ (id)private_redactionListForKey:(id)key defaultList:(id)list;
+ (_Bool)isAppStoreReviewShowPromptOnStartupEnabled;
+ (_Bool)isAppStoreReviewShowPromptAfterTweetEnabled;
+ (_Bool)isAppStoreReviewShowPromptAfterFavoriteEnabled;
+ (long long)appStoreReviewPromptConsecutiveDaysMin;
+ (long long)appStoreReviewPromptDaysBetweenAttemptsMin;
+ (long long)appStoreReviewPromptDaysAfterCrashMin;
+ (_Bool)isFeatureSwitchesCrashlyticsLoggingEnabled;
+ (_Bool)isCrashlyticsLoggerEnabled;
+ (double)appEventTrackingNonReferredOpenInterval;
+ (id)appEventTrackingShortenedTrackingParameters;
+ (_Bool)isSingleSignOnSubtaskAccessTokenIncluded;
+ (_Bool)isOnboardingAddressBookLegacyUploadBehaviorEnabled;
+ (_Bool)isOnboardingPermissionDelayedRegrantPromptEnabled;
+ (_Bool)isOnboardingProjectULSEnabled;
+ (_Bool)isLocalPushReminderEnabled;
+ (double)localPushReminderWaitTimeSeconds;
+ (_Bool)isOnboardingLiveActivityEnabled;
+ (_Bool)isBootDeeplinkDeferUntilNotificationsEnabled;
+ (_Bool)restrictedShutdownEnabled;
+ (id)restrictedShutdownMinimumSafeVersion;
+ (id)restrictedShutdownAPIAllowList;
+ (long long)restrictedShutdownUGCDeleteLevel;
+ (long long)maxQueuedAmbientNotifications;
+ (double)ambientNotificationCooldownPeriod;
+ (id)phoneSignupCountriesRestrictedList;
+ (id)phoneSignupCountriesDenyList;
+ (id)phoneSignupCountriesNotificationsAllowList;
+ (_Bool)isLoginJSInstrumentationEnabled;
+ (_Bool)isMaxPasswordLengthCheckEnabled;
+ (_Bool)isSecurityKeyAuthEnabled;
+ (id)bouncerAllowedEntrances;
+ (id)bouncerAllowedAll;
+ (_Bool)isExternalURLProtectionEnabled;
+ (_Bool)isBouncerDropAuthHeaderEnabled;
+ (_Bool)isWebKitDropAuthHeaderEnabled;
+ (_Bool)isBetaBugButtonEmailFlowEnabled;
+ (_Bool)isDashContentSFSVCEnabled;
+ (double)animationDecodingWarningDuration;
+ (_Bool)animationDecodingLogErrors;

@end

#endif /* TPSDeviceFeatureSwitches_TwitterAnimation_h */
