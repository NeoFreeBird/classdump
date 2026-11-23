//
#ifndef TAVLHLSPlayerTechnologyInternalState_h
#define TAVLHLSPlayerTechnologyInternalState_h
@import Foundation;

#include "LHLSPlayerClient-Protocol.h"
#include "TAVPlayerTechnologyControlState.h"
#include "TAVPlayerTechnologyState.h"
#include "TAVTimerDispatchSourceProtocol-Protocol.h"
#include "TAVWallTime.h"

@class NSError, NSObject;

@interface TAVLHLSPlayerTechnologyInternalState : NSObject

@property (nonatomic) double rotation;
@property (nonatomic) struct CGSize { double x0; double x1; } videoResolution;
@property (nonatomic) _Bool didPlayToEnd;
@property (nonatomic) _Bool needsSeekToInitialPlaybackTime;
@property (copy, nonatomic) TAVPlayerTechnologyControlState *controlState;
@property (copy, nonatomic) TAVPlayerTechnologyState *lastStateSent;
@property (copy, nonatomic) NSError *unrecoverableError;
@property (retain, nonatomic) id <LHLSPlayerClient> lhls;
@property (nonatomic) _Bool isEndPending;
@property (copy, nonatomic) id /* block */ seekCompletion;
@property (retain, nonatomic) id <TAVTimerDispatchSourceProtocol> stateUpdateTimer;
@property (copy, nonatomic) TAVWallTime *livePauseStartTime;
@property (nonatomic) unsigned int baseTimeJumpCount;
@property (copy, nonatomic) TAVWallTime *connectedOrReceivedDataTimestamp;
@property (nonatomic) _Bool audioSessionIsDeactivating;

/* instance methods */

@end

#endif /* TAVLHLSPlayerTechnologyInternalState_h */
