//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
