//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPerformanceState_h
#define TAVPerformanceState_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TAVPerformanceState : NSObject <NSCopying, NSMutableCopying, NSCoding>

@property (copy, nonatomic) NSString *variantUri;
@property (copy, nonatomic) NSString *variantPlaylistType;
@property (nonatomic) double variantIndicatedBitrate;
@property (nonatomic) double variantObservedBitrate;
@property (nonatomic) double variantAverageAudioBitrate;
@property (nonatomic) double variantAverageVideoBitrate;
@property (nonatomic) double variantSwitchBitrate;
@property (nonatomic) double sessionTransferDuration;
@property (nonatomic) long long sessionNumberOfBytesTransferred;
@property (nonatomic) long long sessionMediaRequestsWWAN;
@property (nonatomic) long long sessionMediaRequestsWIFI;
@property (nonatomic) long long sessionNumberOfDroppedVideoFrames;
@property (nonatomic) long long sessionNumberOfStalls;
@property (copy, nonatomic) NSArray *itemLoadedTimeRanges;
@property (nonatomic) double itemPreferredForwardBufferDuration;
@property (nonatomic) double itemPreferredPeakBitrate;
@property (nonatomic) struct CGSize { double x0; double x1; } itemPreferredMaximumResolution;
@property (nonatomic) struct CGSize { double x0; double x1; } itemPresentationSize;
@property (retain, nonatomic) NSArray *accessLogEvents;

/* class methods */
+ (id)performanceStateWithPreviousPerformanceState:(id)state accessLogEvents:(id)events loadedTimeRanges:(id)ranges preferredForwardBufferDuration:(double)duration preferredPeakBitRate:(double)rate preferredMaximumResolution:(struct CGSize { double x0; double x1; })resolution presentationSize:(struct CGSize { double x0; double x1; })size;

/* instance methods */
- (id)initWithVariantUri:(id)uri variantPlaylistType:(id)type variantIndicatedBitrate:(double)bitrate variantObservedBitrate:(double)bitrate variantAverageAudioBitrate:(double)bitrate variantAverageVideoBitrate:(double)bitrate variantSwitchBitrate:(double)bitrate sessionTransferDuration:(double)duration sessionNumberOfBytesTransferred:(long long)transferred sessionMediaRequestsWWAN:(long long)wwan sessionMediaRequestsWIFI:(long long)wifi sessionNumberOfDroppedVideoFrames:(long long)frames sessionNumberOfStalls:(long long)stalls itemLoadedTimeRanges:(id)ranges itemPreferredForwardBufferDuration:(double)duration itemPreferredPeakBitrate:(double)bitrate itemPreferredMaximumResolution:(struct CGSize { double x0; double x1; })resolution itemPresentationSize:(struct CGSize { double x0; double x1; })size accessLogEvents:(id)events;
- (id)init;
- (id)mergeAggregateValuesWithState:(id)state;
- (id)copyWithAggregateValuesFromState:(id)state;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVPerformanceState_h */
