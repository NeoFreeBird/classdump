//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestContainerViewDelegate_Protocol_h
#define PTVGuestContainerViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestContainerViewDelegate <NSObject>

@required

/* required instance methods */
- (void)didTapOnGuestView:(id)view;
- (void)didTapCancelCountdownOnGuestView:(id)view;
- (void)didTapHangUpButtonOnGuestView:(id)view;
- (void)didTapFlipCameraButtonOnGuestView:(id)view;

@optional

/* optional instance methods */
- (void)didTapUsernameButtonOnGuestView:(id)view;
- (void)guestView:(id)view isHighlighted:(_Bool)highlighted;

@end

#endif /* PTVGuestContainerViewDelegate_Protocol_h */
