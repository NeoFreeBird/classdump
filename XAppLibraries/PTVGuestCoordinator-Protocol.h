//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestCoordinator_Protocol_h
#define PTVGuestCoordinator_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "PTVGuestCoordinatorDelegate-Protocol.h"

@class NSArray;

@protocol PTVGuestCoordinator <NSObject>

@required

@property (weak, nonatomic) id <PTVGuestCoordinatorDelegate> delegate;
@property (nonatomic) long long loggedInUserParticipantIndex;
@property (nonatomic) _Bool locallyMuted;
@property (nonatomic) _Bool locallyCameraDisabled;
@property (retain, nonatomic) NSArray *guestReconciliationArray;

/* required instance methods */
- (void)joinBroadcast;
- (void)shutdownWithCompletion:(id /* block */)completion;
- (id)usernameForUserID:(id)id;
- (long long)participantIndexForUserID:(id)id;
- (void)renderingDidChange:(_Bool)change withUserID:(id)id;
- (_Bool)isFullyConnectedToUserID:(id)id;
- (id)guestParticipantUserForUserID:(id)id;
- (void)didSetPrimaryView:(id)view;
- (_Bool)canToggleAudioVideoForUserID:(id)id;
- (void)toggleAudioVideoForUserID:(id)id;
- (_Bool)isLocallyMuted;
- (_Bool)isLocallyCameraDisabled;

@optional

@end

#endif /* PTVGuestCoordinator_Protocol_h */
