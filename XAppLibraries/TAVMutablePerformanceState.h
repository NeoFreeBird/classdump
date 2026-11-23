//
#ifndef TAVMutablePerformanceState_h
#define TAVMutablePerformanceState_h
@import Foundation;

#include "TAVPerformanceState.h"

@class NSArray, NSString;

@interface TAVMutablePerformanceState : TAVPerformanceState

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

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TAVMutablePerformanceState_h */
