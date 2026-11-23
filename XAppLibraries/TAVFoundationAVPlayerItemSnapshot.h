//
#ifndef TAVFoundationAVPlayerItemSnapshot_h
#define TAVFoundationAVPlayerItemSnapshot_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class AVPlayerItemErrorLog, NSArray, NSDate, NSDictionary, NSError, NSObject;

@interface TAVFoundationAVPlayerItemSnapshot : NSObject <NSCopying>

@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) AVPlayerItemErrorLog *errorLog;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, copy, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, copy, nonatomic) NSArray *loadedTimeRanges;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } presentationSize;
@property (readonly, copy, nonatomic) NSArray *accessLogEvents;
@property (readonly, nonatomic) _Bool avPlayerItemEnabledTrackHasAudio;
@property (readonly, nonatomic) double effectiveRate;
@property (readonly, copy, nonatomic) NSDictionary *mediaSelectionGroups;
@property (readonly, nonatomic) _Bool didEncounterVariantSwitch;

/* instance methods */
- (id)initWithStatus:(long long)status error:(id)error errorLog:(id)log duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration currentDate:(id)date tracks:(id)tracks loadedTimeRanges:(id)ranges effectiveRate:(double)rate mediaSelectionGroups:(id)groups presentationSize:(struct CGSize { double x0; double x1; })size didEncounterVariantSwitch:(_Bool)_switch accessLogEvents:(id)events avPlayerItemEnabledTrackHasAudio:(_Bool)audio;
- (_Bool)hasAudio;
- (struct opaqueCMFormatDescription *)testTurkeyAudioFormatDescription;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)init;

@end

#endif /* TAVFoundationAVPlayerItemSnapshot_h */
