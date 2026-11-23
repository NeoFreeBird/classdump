//
#ifndef TAVAnalyticsVVRSessionTrackerPlaythroughState_h
#define TAVAnalyticsVVRSessionTrackerPlaythroughState_h
@import Foundation;

#include "TAVAnalyticsCumulativeTimeHistogram.h"
#include "TAVAnalyticsPlayedRangesTracker.h"
#include "TAVAnalyticsSessionState.h"
#include "TAVAnalyticsVideoTimeToPlaybackPoint.h"

@class NSObject;

@interface TAVAnalyticsVVRSessionTrackerPlaythroughState : NSObject

@property (retain, nonatomic) TAVAnalyticsSessionState *lastAnalyticsSessionState;
@property (retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker;
@property (nonatomic) _Bool visibilityAtLeast25Percent;
@property (nonatomic) _Bool visibilityAtLeast50Percent;
@property (nonatomic) _Bool visibilityAtLeast75Percent;
@property (nonatomic) _Bool visibility100Percent;
@property (nonatomic) _Bool fullscreen;
@property (nonatomic) _Bool audible;
@property (nonatomic) _Bool audibleAnd100PercentVisible;
@property (nonatomic) _Bool audibleAndFullScreen;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } playedDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } durationWhileVisibilityAtLeast25Percent;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } durationWhileVisibilityAtLeast50Percent;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } durationWhileVisibilityAtLeast75Percent;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } durationWhile100PercentVisible;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } durationWhileFullscreen;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } durationWhileAudible;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } durationWhileAudibleAnd100PercentVisible;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } durationWhileAudibleAndFullscreen;
@property (retain, nonatomic) TAVAnalyticsVideoTimeToPlaybackPoint *videoTimeToPlaybackPoint;
@property (retain, nonatomic) TAVAnalyticsCumulativeTimeHistogram *cumulativePlaybackTimeByVisibilityPercentage;
@property (retain, nonatomic) TAVAnalyticsCumulativeTimeHistogram *cumulativePlaybackTimeWithAudioByVisibilityPercentage;
@property (retain, nonatomic) TAVAnalyticsCumulativeTimeHistogram *cumulativePlaybackTimeByWindowPercentage;
@property (retain, nonatomic) TAVAnalyticsCumulativeTimeHistogram *maxContinuousPlaybackTimeByVisibilityPercentage;
@property (retain, nonatomic) TAVAnalyticsCumulativeTimeHistogram *maxContinuousPlaybackTimeWithAudioByVisibilityPercentage;
@property (retain, nonatomic) TAVAnalyticsCumulativeTimeHistogram *currentContinuousPlaybackTimeByVisibilityPercentage;
@property (retain, nonatomic) TAVAnalyticsCumulativeTimeHistogram *currentContinuousPlaybackTimeWithAudioByVisibilityPercentage;
@property (nonatomic) long long viewportConsumptionPercentageThreshold;
@property (nonatomic) long long visibilityPercentageThreshold;
@property (nonatomic) _Bool isVisible;
@property (nonatomic) struct CGSize { double x0; double x1; } initialPlayerViewSize;
@property (nonatomic) struct CGSize { double x0; double x1; } initialViewportSize;
@property (nonatomic) _Bool initialSizesStored;
@property (nonatomic) double screenScale;
@property (nonatomic) _Bool firedVVRSession;

/* instance methods */
- (id)init;
- (void)updateWithPlaybackState:(id)state;
- (void)updatePlaybackDurations;
- (void)setupInitialSizesIfNeededWithPresentationState:(id)state;
- (void)updateConditionsWithSessionState:(id)state;
- (void)setupHistogramsIfNeeded;
- (void)resetContinuousHistograms;
- (void)updateContinuousHistograms;
- (void)updateHistogramsThresholdsWithPresentationState:(id)state;

@end

#endif /* TAVAnalyticsVVRSessionTrackerPlaythroughState_h */
