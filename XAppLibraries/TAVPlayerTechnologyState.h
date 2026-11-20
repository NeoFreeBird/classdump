//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlayerTechnologyState_h
#define TAVPlayerTechnologyState_h
@import Foundation;

#include "TAVMediaSelectionOption-Protocol.h"
#include "TAVPerformanceState.h"
#include "TAVVideoQualityState.h"

@class NSArray, NSDate, NSError, NSMutableDictionary, NSNumber, NSObject, NSString;

@interface TAVPlayerTechnologyState : NSObject

@property (readonly, copy, nonatomic) NSNumber *relativePresentationOffset;
@property (readonly, copy, nonatomic) NSNumber *minimumSafeRPO;
@property (readonly, nonatomic) NSNumber *testTurkeyAudioSampleRate;
@property (readonly, nonatomic) NSNumber *testTurkeyAudioFormatID;
@property (readonly, nonatomic) NSNumber *testTurkeyAudioChannelsPerFrame;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTimeRangeStart;
@property (nonatomic) unsigned int currentTimeRangeIdentifier;
@property (copy, nonatomic) NSDate *currentDate;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) _Bool hasAudio;
@property (nonatomic) _Bool isMuted;
@property (nonatomic) float volume;
@property (nonatomic) long long timeControlStatus;
@property (copy, nonatomic) NSString *waitingReason;
@property (nonatomic) _Bool didPlayToEndTime;
@property (nonatomic) float rate;
@property (copy, nonatomic) TAVVideoQualityState *videoQualityState;
@property (copy, nonatomic) NSArray *availableLegibleMediaOptions;
@property (copy, nonatomic) id <TAVMediaSelectionOption> selectedLegibleMediaOption;
@property (nonatomic) double rotation;
@property (copy, nonatomic) NSError *unrecoverableError;
@property (copy, nonatomic) TAVPerformanceState *performanceState;
@property (copy, nonatomic) NSMutableDictionary *customData;

/* instance methods */
- (id)initWithCurrentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time currentTimeRangeStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })start currentTimeRangeIdentifier:(unsigned int)identifier currentDate:(id)date duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration hasAudio:(_Bool)audio isMuted:(_Bool)muted volume:(float)volume rate:(float)rate videoQualityState:(id)state timeControlStatus:(long long)status waitingReason:(id)reason didPlayToEndTime:(_Bool)time availableLegibleMediaOptions:(id)options selectedLegibleMediaOption:(id)option rotation:(double)rotation unrecoverableError:(id)error performanceState:(id)state customData:(id)data;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)init;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)description;

@end

#endif /* TAVPlayerTechnologyState_h */
