//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TwitterHomeFeatures_h
#define TwitterHomeFeatures_h
@import Foundation;

@class NSObject, NSString;

@interface TwitterHomeFeatures : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *featureSwitches;
}

@property (nonatomic, readonly) long long sportsPostContextMinimumSpacing;
@property (nonatomic, readonly) long long sportsPostContextSameGameMinimumSpacing;
@property (nonatomic, readonly) _Bool isTopDownAdSpacingEnabled;
@property (nonatomic, readonly) _Bool isHomeTimelineFirstPositionAdPreventionEnabled;
@property (nonatomic, readonly) _Bool isPinChromeDuringActivityEnabled;
@property (nonatomic, readonly) _Bool isActivityProgressToastEnabled;
@property (nonatomic, readonly) _Bool isTimelineAvatarDiscoveryExperimentEnabled;
@property (nonatomic, readonly) _Bool isSpacesTimelineAvatarDiscoveryExperimentEnabled;
@property (nonatomic, readonly) long long homeTimelineDiscoverPeopleMaxFollowing;
@property (nonatomic, readonly) long long homeTimelineDiscoverPeopleMaxHoursOld;
@property (nonatomic, readonly) _Bool isClientDedupingUsingImpressionCacheEnabled;
@property (nonatomic, readonly) unsigned long long maxRecentCacheEntriesToUseForClientDeduping;
@property (nonatomic, readonly) unsigned long long maxSeenIDsInHomeTimelineRequest;
@property (nonatomic, readonly) _Bool isHomeTimelineNonStickyTabOnNewSessionEnabled;
@property (nonatomic, readonly) long long homeTimelineNonStickyTabOnNewSessionDurationMinutes;
@property (nonatomic, readonly) _Bool isHomeTimelinesGenericPinnedTimelinesEnabled;
@property (nonatomic, readonly) _Bool isHomeTimelineSuperFollowsSubscriptionsTabEnabled;
@property (nonatomic, readonly) _Bool isHomeTimelineTapHomeIconToRefreshEnabled;
@property (nonatomic, readonly) _Bool isAppTabBadgeActiveTimelineEnabled;
@property (nonatomic, readonly) _Bool isDeferLoadingInactiveTimelinesEnabled;
@property (nonatomic, readonly) _Bool isVisibleFirstBootRefreshEnabled;
@property (nonatomic, readonly) double visibleFirstBootRefreshFallbackSeconds;
@property (nonatomic, readonly) _Bool isCompositionInjectionActiveTabOnlyEnabled;
@property (nonatomic, readonly) _Bool isMemoryReliefClearCachedDisplayTextEnabled;
@property (nonatomic, readonly) _Bool isPinnedTabsTopicsEnabled;
@property (nonatomic, readonly) NSString *pinnedTabsTopicsEducationVideoURLString;
@property (nonatomic, readonly) _Bool isPinnedTabsSubscriptionsEnabled;
@property (nonatomic, readonly) long long pinnedTabsManagementPinnedSectionInlineLimit;
@property (nonatomic, readonly) long long pinnedTabsLimit;
@property (nonatomic, readonly) _Bool isCustomTimelinesTrendingSocialContextEnabled;
@property (nonatomic, readonly) _Bool isCustomTimelinesTrendingSocialContextServerIconEnabled;
@property (nonatomic, readonly) _Bool isCustomTimelinesTrendingSocialContextSeeLessIconEnabled;
@property (nonatomic, readonly) _Bool isHomeCountryFilteredTimelineEnabled;
@property (nonatomic, readonly) _Bool isHomeCountryFilteredTimelinePremiumUpsellOnAboutThisProfileEnabled;
@property (nonatomic, readonly) _Bool isHomeTopicFilteredTimelineEnabled;
@property (nonatomic, readonly) _Bool isFilteredTimelineRefreshRequiresActiveFilterEnabled;
@property (nonatomic, readonly) long long filteredTimelineResetPeriodMinutes;
@property (nonatomic, readonly) _Bool isFilteredTimelineResetOnAppBackgroundEnabled;
@property (nonatomic, readonly) _Bool isFilteredTimelineShowAutoResetTextEnabled;
@property (nonatomic, readonly) _Bool isSnoozeModeEnabled;
@property (nonatomic, readonly) _Bool isModuleItemTreeDisplayMetadataSupportEnabled;
@property (nonatomic, readonly) _Bool isViewportAwareCacheClearingEnabled;
@property (nonatomic, readonly) _Bool isViewportAwareCacheClearingKeepEntryBelowAdEnabled;
@property (nonatomic, readonly) _Bool isTruncationSeamProtectionEnabled;
@property (nonatomic, readonly) _Bool isViewportAwareLoadingEnabled;
@property (nonatomic, readonly) long long alternateColdStartCacheTruncationVariant;
@property (nonatomic, readonly) _Bool shouldDisableDeduplicateStatusIDs;
@property (nonatomic, readonly) _Bool shouldDisableConversationReordering;
@property (nonatomic, readonly) _Bool shouldDisableDeduplicateSeenIDs;
@property (nonatomic, readonly) _Bool shouldDisableDeduplicateEntryIDs;
@property (nonatomic, readonly) _Bool isSkipDedupAdjacentToAdsEnabled;
@property (nonatomic, readonly) _Bool isRemoveAdsWithChangedAdjacentPostsEnabled;
@property (nonatomic, readonly) _Bool shouldDisableViewportAwareHoisting;
@property (nonatomic, readonly) _Bool isViewportAwareHoistingMatchPromotedByEntryIDEnabled;
@property (nonatomic, readonly) _Bool isClearCacheDeferAutoloadBottomEnabled;
@property (nonatomic, readonly) double coldStartLoadingDeferralSeconds;
@property (nonatomic, readonly) double coldStartMinLoadingSeconds;
@property (nonatomic, readonly) _Bool isColdStartShimmerFirstEnabled;
@property (nonatomic, readonly) double coldStartShimmerFirstTimeoutSeconds;
@property (nonatomic, readonly) double coldStartStaleCacheThresholdMinutes;
@property (nonatomic, readonly) _Bool separateTimelinePrefetchCheckEnabled;
@property (nonatomic, readonly) _Bool coldStartEarlyCacheTruncationEnabled;
@property (nonatomic, readonly) _Bool coldStartCacheTruncationNavigationInstructionEnabled;
@property (nonatomic, readonly) _Bool coldStartAllowNilTimelineWithTopCursorEnabled;
@property (nonatomic, readonly) _Bool isHomeTimelineShimmerWhenEmptyAndFetchingEnabled;
@property (nonatomic, readonly) _Bool isForYouRewriteEnabled;
@property (nonatomic, readonly) _Bool isGlobalSeenIdsCacheEnabled;
@property (nonatomic, readonly) _Bool isBottomBackoffNetworkFailureFastRetryEnabled;
@property (nonatomic, readonly) long long bottomBackoffNetworkFailureRetryIntervalMilliseconds;
@property (nonatomic, readonly) _Bool isBottomBackoffReachabilityResetEnabled;
@property (nonatomic, readonly) double homeTimelineForegroundRefreshMinBackgroundSeconds;
@property (nonatomic, readonly) _Bool isHomeTimelineSkipSignInActivationRefreshEnabled;
@property (nonatomic, readonly) NSString *homePremiumUpsellButtonVariant;
@property (nonatomic, readonly) long long homePremiumUpsellIntroOfferAmount;

/* class methods */
+ (_Bool)isActivityProgressToastEnabledWithFeatureSwitches:(id)switches;
+ (_Bool)isHomeTimelineSkipSignInActivationRefreshEnabledWithFeatureSwitches:(id)switches;

/* instance methods */
- (long long)homeTimelineMinimumAdSpacing;
- (_Bool)showsDiscoverPeopleNavButtonForAccount:(id)account;
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;

@end

#endif /* TwitterHomeFeatures_h */
