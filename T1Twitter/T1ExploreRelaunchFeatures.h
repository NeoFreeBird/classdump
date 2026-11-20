//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ExploreRelaunchFeatures_h
#define T1ExploreRelaunchFeatures_h
@import Foundation;

#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSObject, NSString, NSURL;

@interface T1ExploreRelaunchFeatures : NSObject

@property (readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (readonly, nonatomic) long long itemsLeftFetchThreshold;
@property (readonly, nonatomic) long long autoAdvanceDurationThreshold;
@property (readonly, nonatomic) _Bool immersiveVideoAttributionEnabled;
@property (readonly, nonatomic) _Bool videoAttributionOpensImmersiveEnabled;
@property (readonly, nonatomic) _Bool videoAttributionFastFocalLoadEnabled;
@property (readonly, nonatomic) _Bool videoAttributionProfileFallbackEnabled;
@property (readonly, nonatomic) _Bool isImmersiveVideoRetweetDrawerEnabled;
@property (readonly, nonatomic) _Bool immersiveRepostButtonDoesEmbedEnabled;
@property (readonly, nonatomic) _Bool isImmersiveThreadMediaContinuationEnabled;
@property (readonly, nonatomic) _Bool isImmersiveSlideshowUpwardPagingEnabled;
@property (readonly, nonatomic) _Bool isImmersiveVideoResolutionScribeEnabled;
@property (readonly, nonatomic) _Bool isLiveEventFullscreenReturnKeepsPlaybackEnabled;
@property (readonly, nonatomic) _Bool isOverrideLoadPageVideoRangeValuesEnabled;
@property (readonly, nonatomic) long long overrideLoadPageVideoRangeValuesLowerBound;
@property (readonly, nonatomic) long long overrideLoadPageVideoRangeValuesUpperBound;
@property (readonly, nonatomic) _Bool isLiveChatEmojisEnabled;
@property (readonly, nonatomic) _Bool isLiveChatNewMessagePillEnabled;
@property (readonly, nonatomic) _Bool isLiveChatAuthorHandlesEnabled;
@property (readonly, nonatomic) _Bool isLiveChatPerformanceImprovements1Enabled;
@property (readonly, nonatomic) _Bool isLiveChatFrequentEmojisEnabled;
@property (readonly, nonatomic) _Bool isLiveChatReportMessageEnabled;
@property (readonly, nonatomic) long long liveChatInputMaxCharLimit;
@property (readonly, nonatomic) double liveChatUserBatchWindowSeconds;
@property (readonly, nonatomic) _Bool isLiveChatLiveEdgeDisplayEnabled;
@property (readonly, nonatomic) _Bool isScheduledBroadcastCountdownEnabled;
@property (readonly, nonatomic) _Bool isScheduledBroadcastReminderEnabled;
@property (readonly, nonatomic) _Bool isScheduledBroadcastFixesEnabled;
@property (readonly, nonatomic) NSURL *scheduledBroadcastPlaceholderImageURL;
@property (readonly, nonatomic) _Bool isBroadcastDoubleTapSkipEnabled;
@property (readonly, nonatomic) _Bool isDockedBroadcastReopenEnabled;
@property (readonly, nonatomic) _Bool isLiveChatAutoOpenEnabled;
@property (readonly, nonatomic) _Bool isLiveChatEngagementOverlayEnabled;
@property (readonly, nonatomic) _Bool isLiveChatEngagementOverlayEnabledNoImpression;
@property (readonly, nonatomic) _Bool isVideoEngagementOverlayEnabled;
@property (readonly, nonatomic) _Bool isVideoEngagementOverlayEnabledNoImpression;
@property (readonly, copy, nonatomic) NSString *immersiveSprintChromeLayout;
@property (readonly, nonatomic) _Bool isImmersiveSprintHomeCarouselVerticalEngagementBarEnabled;
@property (readonly, nonatomic) _Bool isAutoUnmuteEnabled;
@property (readonly, nonatomic) _Bool isImmersivePrefetchEnabled;
@property (readonly, nonatomic) _Bool isImmersiveCardPositionOnLoadEnabled;
@property (readonly, nonatomic) _Bool isImmersivePrefetchEnabledNoImpression;
@property (readonly, nonatomic) double immersivePrefetchDelayTimeout;
@property (readonly, nonatomic) double immersivePrefetchReloadTimeout;
@property (readonly, nonatomic) double immersivePrefetchRequiredLastUseInterval;
@property (readonly, nonatomic) _Bool isImmersivePrefetchingOptimizationEnabled;
@property (readonly, nonatomic) _Bool isNonInterruptiveBookmarksFlowEnabled;
@property (readonly, nonatomic) long long immersiveAutoDockMinDurationSeconds;
@property (readonly, nonatomic) _Bool isImmersiveDragToDockEnabled;
@property (readonly, nonatomic) double immersiveDragToDockIntentHoldSeconds;
@property (readonly, nonatomic) _Bool isImmersiveFirstCardEasyDismissEnabled;
@property (readonly, nonatomic) _Bool isImmersiveBroadcastAutoDockOnDismissEnabled;
@property (readonly, nonatomic) _Bool isImmersiveAirplayAutoDockOnDismissEnabled;
@property (readonly, nonatomic) _Bool isImmersiveNativePiPDockEnabled;
@property (readonly, nonatomic) double immersiveNativePiPEndedDismissalSeconds;
@property (readonly, nonatomic) _Bool isImmersiveDockedPlayerMuteFixEnabled;
@property (readonly, nonatomic) _Bool isBroadcastNotificationPromptEnabled;
@property (readonly, nonatomic) double broadcastNotificationPromptMinWatchSeconds;
@property (readonly, nonatomic) _Bool isBroadcastNotificationBellEnabled;
@property (readonly, nonatomic) _Bool isImmersiveRepostCountIncludesQuotesEnabled;
@property (readonly, nonatomic) _Bool isImmersiveRepostCountIncludesQuotesEnabledNoImpression;
@property (readonly, nonatomic) _Bool isImmersiveMenuAuthorRowOpensProfileEnabled;
@property (readonly, nonatomic) _Bool isImmersiveSessionRestoreEnabled;
@property (readonly, nonatomic) double immersiveSessionRestoreWindowSeconds;
@property (readonly, nonatomic) _Bool isImmersiveLandscapeOnlyFeedEnabled;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;

@end

#endif /* T1ExploreRelaunchFeatures_h */
