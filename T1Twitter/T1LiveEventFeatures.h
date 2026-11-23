//
#ifndef T1LiveEventFeatures_h
#define T1LiveEventFeatures_h
@import Foundation;

#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSObject;

@interface T1LiveEventFeatures : NSObject

@property (readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;
- (_Bool)isLiveEventExperienceEnabled;
- (double)liveEventVideoLoopingThresholdDuration;
- (long long)liveEventVideoLoopingCount;
- (_Bool)isLiveEventTimelineServerControlledRefreshRateEnabled;
- (double)liveEventTimelineDefaultRefreshRateInterval;
- (double)liveEventTimelineMinimumRefreshRateInterval;
- (double)liveEventTimelineNewTweetsPillShowingInterval;
- (double)liveEventCardCAPIRefreshInterval;
- (double)liveEventCardUBSRefreshInterval;
- (_Bool)isLiveEventHeaderVodEnabled;
- (_Bool)isLiveEventSquishyHeaderSupported;
- (_Bool)isLiveEventChromeSyncEnabled;
- (_Bool)isLiveEventSquishyHeaderNavigationButtonsAboveVideoEnabled;
- (_Bool)isLiveEventSquishyHeaderScoreCardRedesignEnabled;
- (_Bool)isLiveEventSquishyHeaderMultiVideoCarouselPinningEnabled;
- (_Bool)isLiveEventHeaderLockingEnabled;
- (_Bool)isLiveEventSquishyHeaderShowTapToExpandLabelEnabled;
- (double)liveEventMultiVideoAutoAdvanceTransitionDuration;
- (_Bool)isLiveEventInterstitialSeenCacheEnabled;

@end

#endif /* T1LiveEventFeatures_h */
