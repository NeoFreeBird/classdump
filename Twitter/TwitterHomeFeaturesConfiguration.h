//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TwitterHomeFeaturesConfiguration_h
#define TwitterHomeFeaturesConfiguration_h
@import Foundation;

#include "TwitterHomeFeaturesConfigurationProtocol-Protocol.h"

@class NSObject, NSString, v24@?0@"TTMAssetRenderingResult"8@"NSError"16;

@interface TwitterHomeFeaturesConfiguration : NSObject <TwitterHomeFeaturesConfigurationProtocol> { // (Swift)
    /* instance variables */
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 networkQualityProvider;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 isColdStartShimmerFirstEligible;
}

@property (nonatomic, readonly) unsigned long long clientDedupingMaxRecentCacheEntries;
@property (nonatomic, readonly) unsigned long long homeRequestMaxSeenIDs;
@property (nonatomic, readonly) _Bool isClientDedupingUsingImpressionCacheEnabled;
@property (nonatomic, readonly) _Bool isModuleItemTreeDisplayTreesEnabled;
@property (nonatomic, readonly) id /* block */ minimumAdSpacing;
@property (nonatomic, readonly) _Bool isTopDownAdSpacingEnabled;
@property (nonatomic, readonly) _Bool isFirstPositionAdPreventionEnabled;
@property (nonatomic, readonly) _Bool isViewportAwareCacheClearingEnabled;
@property (nonatomic, readonly) _Bool isViewportAwareCacheClearingKeepEntryBelowAdEnabled;
@property (nonatomic, readonly) _Bool isViewportAwareLoadingEnabled;
@property (nonatomic, readonly) _Bool shouldDisableDeduplicateStatusIDs;
@property (nonatomic, readonly) _Bool shouldDisableDeduplicateSeenIDs;
@property (nonatomic, readonly) _Bool shouldDisableDeduplicateEntryIDs;
@property (nonatomic, readonly) _Bool shouldDisableConversationReordering;
@property (nonatomic, readonly) _Bool isSkipDedupAdjacentToAdsEnabled;
@property (nonatomic, readonly) _Bool isRemoveAdsWithChangedAdjacentPostsEnabled;
@property (nonatomic, readonly) _Bool shouldDisableViewportAwareHoisting;
@property (nonatomic, readonly) _Bool isViewportAwareHoistingMatchPromotedByEntryIDEnabled;
@property (nonatomic, readonly) _Bool separateTimelinePrefetchCheckEnabled;
@property (nonatomic, readonly) double coldStartStaleCacheThresholdMinutes;
@property (nonatomic, readonly) double coldStartLoadingDeferralSeconds;
@property (nonatomic, readonly) double coldStartMinLoadingSeconds;
@property (nonatomic, readonly) long long alternateColdStartCacheTruncationVariant;
@property (nonatomic, readonly) _Bool coldStartEarlyCacheTruncationEnabled;
@property (nonatomic, readonly) _Bool isTruncationSeamProtectionEnabled;
@property (nonatomic, readonly) _Bool coldStartCacheTruncationNavigationInstructionEnabled;
@property (nonatomic, readonly) _Bool isColdStartAllowNilTimelineWithTopCursorEnabled;
@property (nonatomic, readonly) double coldStartShimmerFirstTimeoutSeconds;
@property (nonatomic, readonly) long long timelineVariant;
@property (nonatomic, readonly) _Bool isGlobalSeenIdsCacheEnabled;
@property (nonatomic, readonly) _Bool isBottomBackoffNetworkFailureFastRetryEnabled;
@property (nonatomic, readonly) double bottomBackoffNetworkFailureRetryInterval;
@property (nonatomic, readonly) _Bool isBottomBackoffReachabilityResetEnabled;
@property (nonatomic, readonly) _Bool isCompositionInjectionActiveTabOnlyEnabled;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) _Bool isTopCursorPrefetchEnabled;
@property (nonatomic, readonly) NSString *scribePage;
@property (nonatomic, readonly) NSString *scribeSection;
@property (nonatomic, readonly) _Bool isColdStartShimmerFirstActive;
@property (nonatomic, readonly) _Bool enableHomeTimelineRequestWithSeenIDs;

/* instance methods */
- (id)initWithAccount:(id)account networkQualityProvider:(id)provider timelineVariant:(long long)variant;
- (id)init;

@end

#endif /* TwitterHomeFeaturesConfiguration_h */
