//
#ifndef TAVHydraCoordinatorDelegate_Protocol_h
#define TAVHydraCoordinatorDelegate_Protocol_h
@import Foundation;

@protocol TAVHydraCoordinatorDelegate

@required

/* required instance methods */
- (void)hydraCoordinator:(id)coordinator didUpdateActiveGuestsWithAddedGuests:(id)guests removedGuests:(id)guests;
- (void)hydraCoordinatorDidUpdateAudioLevels:(id)levels;
- (void)hydraCoordinatorDidUpdateTargetRPO:(id)rpo;
- (id)hydraCoordinator:(id)coordinator playerStateForParticipant:(id)participant;

@optional

@end

#endif /* TAVHydraCoordinatorDelegate_Protocol_h */
