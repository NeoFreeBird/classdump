//
#ifndef TAVScribeThriftVideoDetails_h
#define TAVScribeThriftVideoDetails_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TAVScribeThriftCumulativeHistogram.h"
#include "TAVScribeThriftSizesInfo.h"

@class NSNumber, NSObject;

@interface TAVScribeThriftVideoDetails : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *isPrerollVideo;
@property (copy, nonatomic) NSNumber *videoLengthMS;
@property (copy, nonatomic) NSNumber *timeWatchedMS;
@property (copy, nonatomic) NSNumber *timeWatched25MS;
@property (copy, nonatomic) NSNumber *timeWatched50MS;
@property (copy, nonatomic) NSNumber *timeWatched75MS;
@property (copy, nonatomic) NSNumber *timeWatched100MS;
@property (copy, nonatomic) NSNumber *timeWatchedFullscreenMS;
@property (copy, nonatomic) NSNumber *timeWatchedWithAudioMS;
@property (copy, nonatomic) NSNumber *timeWatched100WithAudioMS;
@property (copy, nonatomic) NSNumber *videoType;
@property (copy, nonatomic) NSNumber *timeWatchedFullscreenWithAudioMs;
@property (copy, nonatomic) NSNumber *videoTimeTo2SecMS;
@property (copy, nonatomic) NSNumber *videoTimeToStartMS;
@property (copy, nonatomic) TAVScribeThriftCumulativeHistogram *watchedMSByInViewPct;
@property (copy, nonatomic) TAVScribeThriftCumulativeHistogram *watchedWithAudioMsByInViewPct;
@property (copy, nonatomic) TAVScribeThriftCumulativeHistogram *watchedMsByViewportPct;
@property (copy, nonatomic) TAVScribeThriftCumulativeHistogram *maxContinuousWatchedMsByInViewPct;
@property (copy, nonatomic) TAVScribeThriftCumulativeHistogram *maxContinuousWatchedWithAudioMsByInViewPct;
@property (copy, nonatomic) TAVScribeThriftSizesInfo *sizesInfoAtTheStart;

/* instance methods */
- (id)initWithIsPrerollVideo:(id)video videoLengthMS:(id)ms timeWatchedMS:(id)ms timeWatched25MS:(id)ms timeWatched50MS:(id)ms timeWatched75MS:(id)ms timeWatched100MS:(id)ms timeWatchedFullscreenMS:(id)ms timeWatchedWithAudioMS:(id)ms timeWatched100WithAudioMS:(id)ms timeWatchedFullscreenWithAudioMs:(id)ms videoType:(id)type videoTimeTo2SecMS:(id)ms videoTimeToStartMS:(id)ms watchedMsByInViewPct:(id)pct watchedMsByViewportPct:(id)pct watchedWithAudioMsByInViewPct:(id)pct maxContinuousWatchedMsByInViewPct:(id)pct maxContinuousWatchedWithAudioMsByInViewPct:(id)pct sizesInfoAtTheStart:(id)start;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)marshallerDictionary;

@end

#endif /* TAVScribeThriftVideoDetails_h */
