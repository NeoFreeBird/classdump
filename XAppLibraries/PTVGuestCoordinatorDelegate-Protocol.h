//
#ifndef PTVGuestCoordinatorDelegate_Protocol_h
#define PTVGuestCoordinatorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestCoordinatorDelegate <NSObject>

@required

/* required instance methods */
- (void)guestCoordinator:(id)coordinator didLogEntry:(id)entry;
- (void)guestCoordinatorDidDetectEndOfBroadcast:(id)broadcast;
- (_Bool)guestCoordinator:(id)coordinator canAddGuestWithUserID:(id)id;
- (void)guestCoordinator:(id)coordinator addGuestView:(id)view;
- (id)guestCoordinator:(id)coordinator guestViewWithUserID:(id)id;
- (void)guestCoordinator:(id)coordinator removeGuestViewWithUserID:(id)id shouldReshuffleGuestViews:(_Bool)views;
- (void)guestCoordinator:(id)coordinator reconcileAndRemoveUserIDs:(id)ids;
- (void)guestCoordinator:(id)coordinator didUpdateGuestCallerSession:(id)session;
- (void)guestCoordinator:(id)coordinator didChangeLocallyMuted:(_Bool)muted;
- (void)guestCoordinator:(id)coordinator didUpdateFullyConnected:(_Bool)connected forUserID:(id)id;
- (void)guestCoordinator:(id)coordinator updateCameraPreviewView:(id)view;
- (void)guestCoordinatorCameraStartDidComplete:(id)complete;
- (void)guestCoordinator:(id)coordinator updateVideoOrientationWithCameraPreferredOrientation:(long long)orientation;
- (void)guestCoordinatorFailedToJoinBroadcast:(id)broadcast;
- (void)guestCoordinator:(id)coordinator didCollectPeriodicPlaybackStats:(id)stats;
- (void)guestCoordinator:(id)coordinator didCollectPeriodicPublishingStats:(id)stats;
- (void)guestCoordinator:(id)coordinator didCollectEndOfStreamStats:(id)stats;

@optional

@end

#endif /* PTVGuestCoordinatorDelegate_Protocol_h */
