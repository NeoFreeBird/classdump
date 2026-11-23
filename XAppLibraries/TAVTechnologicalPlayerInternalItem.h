//
#ifndef TAVTechnologicalPlayerInternalItem_h
#define TAVTechnologicalPlayerInternalItem_h
@import Foundation;

#include "TAVPerformanceState.h"
#include "TAVPlayerTechnology-Protocol.h"
#include "TAVPlayerTechnologyControlState.h"
#include "TAVPlayerTechnologyState.h"
#include "TAVPlaylistItem.h"
#include "TAVVideoQualityEndpoint.h"

@class NSMutableArray, NSObject;

@interface TAVTechnologicalPlayerInternalItem : NSObject

@property (readonly, nonatomic) TAVPlaylistItem *config;
@property (retain, nonatomic) id <TAVPlayerTechnology> tech;
@property (retain, nonatomic) TAVPlayerTechnologyState *lastKnownState;
@property (retain, nonatomic) TAVPlayerTechnologyControlState *lastAppliedControlState;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) TAVVideoQualityEndpoint *resetQualityEndpoint;
@property (nonatomic) _Bool hasTimeControlStatusEverBeenPlaying;
@property (nonatomic) _Bool didEngageUser;
@property (nonatomic) unsigned int numberOfAutomaticRetryAttemptsInitiated;
@property (retain, nonatomic) NSMutableArray *errorsToReportQueue;
@property (retain, nonatomic) TAVPerformanceState *aggregatedPerformanceStateFromDiscardedTechs;
@property (readonly, nonatomic) TAVPerformanceState *aggregatedPerformanceStateIncludingCurrentTech;

/* instance methods */
- (id)initWithConfig:(id)config;
- (id)description;
- (void)dealloc;
- (id)init;

@end

#endif /* TAVTechnologicalPlayerInternalItem_h */
