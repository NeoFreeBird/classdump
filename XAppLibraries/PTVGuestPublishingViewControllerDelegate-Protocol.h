//
#ifndef PTVGuestPublishingViewControllerDelegate_Protocol_h
#define PTVGuestPublishingViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestPublishingViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)guestPublishingViewController:(id)controller didTapUsernameOfUser:(id)user;
- (void)guestPublishingViewControllerDidDetectEndOfBroadcast:(id)broadcast;
- (void)guestPublishingViewControllerDidSetPrimaryView:(id)view;
- (void)guestPublishingViewControllerCameraStartDidComplete:(id)complete;
- (void)guestPublishingViewController:(id)controller didUpdateCameraPreviewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)didReceiveGuestPublishingLogEntry:(id)entry;
- (void)guestPublishingViewControllerDidRequestCameraFlip:(id)flip;
- (void)guestPublishingViewControllerGuestDidPressHangUpButton:(id)button;
- (void)guestPublishingViewController:(id)controller didCollectPeriodicPublishingStats:(id)stats;
- (void)guestPublishingViewController:(id)controller didCollectPeriodicPlaybackStats:(id)stats;
- (void)guestPublishingViewController:(id)controller didCollectEndOfStreamStats:(id)stats;

@end

#endif /* PTVGuestPublishingViewControllerDelegate_Protocol_h */
