//
#ifndef PTVGuestPublishingViewDelegate_Protocol_h
#define PTVGuestPublishingViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestPublishingViewDelegate <NSObject>

@required

/* required instance methods */
- (void)guestPublishingView:(id)view didTapOnGuestView1:(id)view1;
- (void)guestPublishingView:(id)view didTapOnGuestView2:(id)view2;
- (void)guestPublishingView:(id)view didTapOnGuestView3:(id)view3;
- (void)guestPublishingViewDidRequestCameraFlip:(id)flip;
- (void)guestPublishingView:(id)view didTapCancelCountdownOnGuestView1:(id)view1;
- (void)guestPublishingView:(id)view didTapCancelCountdownOnGuestView2:(id)view2;
- (void)guestPublishingView:(id)view didTapCancelCountdownOnGuestView3:(id)view3;
- (void)guestPublishingView:(id)view didTapHangUpOnGuestView1:(id)view1;
- (void)guestPublishingView:(id)view didTapHangUpOnGuestView2:(id)view2;
- (void)guestPublishingView:(id)view didTapHangUpOnGuestView3:(id)view3;
- (void)guestPublishingView:(id)view didTapUsernameButtonOnGuestView1:(id)view1;
- (void)guestPublishingView:(id)view didTapUsernameButtonOnGuestView2:(id)view2;
- (void)guestPublishingView:(id)view didTapUsernameButtonOnGuestView3:(id)view3;
- (void)guestPublishingView:(id)view renderingDidChange:(_Bool)change atPosition:(unsigned long long)position;

@optional

@end

#endif /* PTVGuestPublishingViewDelegate_Protocol_h */
