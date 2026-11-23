//
#ifndef TAVFoundationPlayerTechnologyInternalState_h
#define TAVFoundationPlayerTechnologyInternalState_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TAVFoundationAVPlayerSnapshot.h"
#include "TAVPlayerTechnologyControlState.h"
#include "TAVPlayerTechnologyState.h"
#include "TAVVideoQualityState.h"
#include "TAVVidmanJSONMetadata.h"

@class AVPlayerItem, NSArray, NSError, NSObject;

@interface TAVFoundationPlayerTechnologyInternalState : NSObject

@property (copy, nonatomic) TAVFoundationAVPlayerSnapshot *avPlayerSnapshot;
@property (nonatomic) _Bool didPlayToEndTime;
@property (copy, nonatomic) TAVPlayerTechnologyState *lastStateSent;
@property (copy, nonatomic) TAVPlayerTechnologyControlState *controlState;
@property (nonatomic) unsigned long long preparationState;
@property (copy, nonatomic) NSError *preparationError;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } initialPlaybackTime;
@property (nonatomic) _Bool shouldSkipStallAvoidance;
@property (retain, nonatomic) TAVVidmanJSONMetadata *mostRecentPeriscopeJSONMetadata;
@property (copy, nonatomic) TAVVideoQualityState *videoQualityState;
@property (weak, nonatomic) AVPlayerItem *cachedAccessLogItem;
@property (copy, nonatomic) NSArray *cachedAccessLogEvents;
@property (nonatomic) double cachedAccessLogReadTime;
@property (retain, nonatomic) id <NSObject> accessLogEntryObserver;

/* instance methods */
- (id)init;

@end

#endif /* TAVFoundationPlayerTechnologyInternalState_h */
