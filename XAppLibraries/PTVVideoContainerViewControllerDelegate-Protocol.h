//
#ifndef PTVVideoContainerViewControllerDelegate_Protocol_h
#define PTVVideoContainerViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVVideoContainerViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)videoContainerViewControllerVideoConnectionStatusDidChange:(id)change;
- (void)videoContainerViewControllerDurationDidChange:(id)change;
- (void)videoContainerViewControllerDidReachEndOfVideo:(id)video;
- (void)videoContainerViewControllerMetadataStatusDidChange:(id)change;
- (void)videoContainerViewControllerGuestPublishingStateDidChange:(id)change;
- (void)videoContainerViewControllerDidTapUsernameOfGuestUser:(id)user;
- (void)videoContainerViewControllerDidReceiveGuestPublishingLogEntry:(id)entry;
- (void)videoContainerViewControllerGuestDidPressHangUpButton:(id)button;
- (void)videoContainerViewController:(id)controller didCollectGuestBroadcastingPeriodicPublishingStats:(id)stats;
- (void)videoContainerViewController:(id)controller didCollectGuestBroadcastingPeriodicPlaybackStats:(id)stats;
- (void)videoContainerViewController:(id)controller didCollectGuestBroadcastingEndOfStreamStats:(id)stats;

@end

#endif /* PTVVideoContainerViewControllerDelegate_Protocol_h */
