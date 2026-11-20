//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TPSDeviceFeatureSwitches_h
#define TPSDeviceFeatureSwitches_h
@import Foundation;

@class NSObject;

@interface TPSDeviceFeatureSwitches : NSObject

/* class methods */
+ (long long)CDNSampleSize;
+ (id)CDNHostRootList;
+ (id)CDNFileExtensionList;
+ (id)foundMediaDomains;
+ (id)nonFatalSecurityExclusionList;
+ (_Bool)isTNLForPeriscopePluginEnabled;
+ (_Bool)shouldScribeError;
+ (double)typeaheadUserPrefetchRateInSeconds;
+ (long long)typeaheadMaxQueryMatches;
+ (long long)typeaheadMaxRecentSearches;
+ (long long)typeaheadMaxRecentSearchesHorizontallyScrolling;
+ (long long)typeaheadMaxUserMatches;
+ (double)scribeStatusLingerMinThresholdInSeconds;
+ (id)excludedEmailDomains;
+ (id)excludedWebViewDomains;
+ (long long)shortenedURLLengthSecure;
+ (id)nonUsernamePaths;
+ (long long)_integerForKey:(id)key minValue:(long long)value maxValue:(long long)value;
+ (double)_CGFloatForKey:(id)key minValue:(double)value maxValue:(double)value;
+ (_Bool)isInitialized;
+ (void)accessFeatureSwitchValueOnce:(long long *)once valueAccessBlock:(id /* block */)block;
+ (id)requiredSetForKey:(id)key;
+ (id)optionalSetForKey:(id)key;
+ (_Bool)isTeamsAccountEnabled;
+ (_Bool)isTeamsAccountUIEnabled;
+ (_Bool)isNativeOAuth2ConsentEnabled;
+ (_Bool)isHelpdeskViaExternalURLEnabled;
+ (_Bool)isDelegationGroupEnabled;
+ (_Bool)isDelegationGroupSettingsEnabled;
+ (_Bool)isOAuthScopeBackendEnabled;
+ (id)httpHostMapArray;
+ (long long)scribeAPISampleSize;
+ (long long)scribeAPIErrorSampleSize;
+ (_Bool)isScribeDataLossReportingEnabled;
+ (id)scribeDataLossSampleRateOnLogout;
+ (id)scribeDataLossSampleRateOnShelfLife;
+ (id)scribeDataLossSampleRateOnRetry;
+ (id)scribeDataLossSampleRateOnOutOfSpace;
+ (_Bool)isFlushLingerOnBackgroundEnabled;
+ (_Bool)isScribeLingerFairViewTimeEnabled;
+ (double)scribeLingerFairViewTimeUpperBound;
+ (double)scribeLingerFairViewTimeLowerBound;
+ (_Bool)isBackgroundScribeFlushDisabled;
+ (_Bool)isArticleShareCaptionVisibleEnabled;
+ (_Bool)deviceAttestationTokensEnabled;
+ (_Bool)deviceGuestAttestationTokensEnabled;
+ (_Bool)deviceAttestationClientEventsEnabled;
+ (_Bool)isCastleEnabled;
+ (_Bool)isGoogleSignInAppCheckEnabled;
+ (_Bool)isBrazeClientEnabled;
+ (unsigned long long)maximumFullNameLength;
+ (id)coreServices2TNLForegroundIdleTimeout;
+ (id)coreServices2TNLBackgroundIdleTimeout;
+ (_Bool)coreServices2UserBuilderEnabled;
+ (long long)backgroundTaskExpirationReportingThreshold;
+ (_Bool)isDeferingAccountAndUserUpdateNotificationEnabled;
+ (_Bool)isMonitoringMemoryPressureChangesEnabled;
+ (_Bool)disableWatchdogDetection;
+ (_Bool)isMetricKitDurationSecondsDisabled;
+ (_Bool)isMetricKitLastUsedAccountScribeEnabled;
+ (_Bool)isBatteryDrainScribeEnabled;
+ (_Bool)isViewControllerScribeFallbackEnabled;
+ (long long)webKitCacheTTLSeconds;
+ (long long)tpmIdSyncFetchIntervalInSeconds;
+ (long long)tpmIdSyncClickIntervalInSeconds;
+ (id)_featureSwitches;
+ (_Bool)isDisplayTextModelEnabled;
+ (unsigned long long)maxCombiningMarksPerDisplayTextCharacter;
+ (unsigned long long)maxNumberDiscountedURLs;
+ (id)preWarmConnectionHostNames;
+ (_Bool)exitOnFailToAccessUserDefaultsOnAppLaunch;
+ (_Bool)skipEmptyAccountWritesWhenBackgrounding;
+ (_Bool)zeroAccountCheckEnabled;
+ (_Bool)accountRemovalPersistenceEnabled;
+ (_Bool)limitBufferingOnAllPlayerItems;
+ (_Bool)limitBufferingAggressivelyOnPausedItems;
+ (id)excludedPeriscopeURLDestinations;
+ (_Bool)isTwitterSingleSignOnEnabled;
+ (_Bool)isPhoneNumberCountryPickerEnabled;
+ (_Bool)isOnboardingFunnelDeeplinkEnabled;
+ (_Bool)isBouncerOCFFlowEnabled;
+ (_Bool)isNewStorageScreenEnabled;
+ (_Bool)refreshFeatureSwitchesWhenAccountChangesEnabled;
+ (_Bool)isTrayAccountSwitcherLayoutFixEnabled;

@end

#endif /* TPSDeviceFeatureSwitches_h */
