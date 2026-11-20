//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsPlayedRangesTracker_h
#define TAVAnalyticsPlayedRangesTracker_h
@import Foundation;

@class NSObject;

@interface TAVAnalyticsPlayedRangesTracker : NSObject

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } lastUpdateChange;
@property (nonatomic) unsigned int currentTimeRangeIdentifier;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } currentTimeRange;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } initialIgnoredTimeRange;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } totalPlayedDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } playedRangeStart;
@property (nonatomic) unsigned int initialTimeRangeIdentifier;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } playedDuration;

/* instance methods */
- (id)initWithPlaybackState:(id)state;
- (void)updateWithPlaybackState:(id)state;
- (id)init;
- (id)initWithInitialIgnoredTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range currentTimeRangeIdentifier:(unsigned int)identifier;
- (void)updateWithCurrentTimeRangeIdentifier:(unsigned int)identifier currentTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
- (id)description;

@end

#endif /* TAVAnalyticsPlayedRangesTracker_h */
