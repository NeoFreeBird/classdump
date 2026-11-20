//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVFoundationAVPlayerObserverInternalState_h
#define TAVFoundationAVPlayerObserverInternalState_h
@import Foundation;

#include "TAVFoundationAVPlayerObserverDelegate-Protocol.h"
#include "TAVFoundationAVPlayerSnapshot.h"

@class AVPlayerItem, AVPlayerItemErrorLog, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSObject;

@interface TAVFoundationAVPlayerObserverInternalState : NSObject

@property (weak, nonatomic) id <TAVFoundationAVPlayerObserverDelegate> delegate;
@property (nonatomic) long long nestedKVODepth;
@property (readonly, nonatomic) NSMutableDictionary *observedValues;
@property (copy, nonatomic) TAVFoundationAVPlayerSnapshot *lastSentSnapshot;
@property (nonatomic) unsigned long long lastSentSnapshotPlayerItemHash;
@property (retain, nonatomic) AVPlayerItem *currentItem;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (nonatomic) _Bool readBlockingAVPlayerItemPropertiesInProgress;
@property (nonatomic) _Bool avPlayerItemEnabledTrackHasAudio;
@property (copy, nonatomic) NSArray *accessLogEvents;
@property (copy, nonatomic) NSDate *currentDate;
@property (nonatomic) unsigned long long nilCurrentDateReadCount;
@property (nonatomic) double lastCurrentDateReadTime;
@property (copy, nonatomic) NSNumber *relativePresentationOffset;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } lastTimeJumpTime;
@property (nonatomic) unsigned int timeJumpCount;
@property (nonatomic) double effectiveRate;
@property (copy, nonatomic) NSArray *availableMediaCharacteristicsWithMediaSelectionOptions;
@property (copy, nonatomic) NSDictionary *mediaSelectionGroups;
@property (copy, nonatomic) AVPlayerItemErrorLog *errorLog;
@property (copy, nonatomic) id /* block */ synchronizeNotifyBlock;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) _Bool mediaOptionsNeedUpdate;

/* instance methods */
- (id)init;

@end

#endif /* TAVFoundationAVPlayerObserverInternalState_h */
