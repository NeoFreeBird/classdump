//
#ifndef TAVHydraCoordinator_h
#define TAVHydraCoordinator_h
@import Foundation;

#include "TAVHydraCoordinatorDelegate-Protocol.h"
#include "TAVHydraMainBroadcaster.h"
#include "TAVTimerDispatchSourceProtocol-Protocol.h"

@class NSArray, NSNumber, NSObject;

@interface TAVHydraCoordinator : NSObject

@property (copy, nonatomic) NSArray *activeGuests;
@property (copy, nonatomic) NSNumber *targetRPO;
@property (copy, nonatomic) NSArray *participantsData;
@property (copy, nonatomic) NSArray *audioLevelData;
@property (readonly, nonatomic) id <TAVTimerDispatchSourceProtocol> syncTimer;
@property (readonly, nonatomic) id /* block */ timerFactory;
@property (weak, nonatomic) id <TAVHydraCoordinatorDelegate> delegate;
@property (readonly, nonatomic) TAVHydraMainBroadcaster *mainBroadcaster;

/* instance methods */
- (id)initWithMainBroadcaster:(id)broadcaster timerFactory:(id /* block */)factory;
- (id)initWithMainBroadcaster:(id)broadcaster;
- (void)handleTimedMetadataWithDescription:(id)description value:(id)value;
- (void)private_handleParticipantsData:(id)data;
- (void)private_handleAudioLevelData:(id)data;
- (void)private_syncTargetRPO;

@end

#endif /* TAVHydraCoordinator_h */
