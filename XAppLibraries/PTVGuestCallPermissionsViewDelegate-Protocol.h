//
#ifndef PTVGuestCallPermissionsViewDelegate_Protocol_h
#define PTVGuestCallPermissionsViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestCallPermissionsViewDelegate <NSObject>

@required

/* required instance methods */
- (void)guestCallPermissionsView:(id)view didUpdateMode:(unsigned long long)mode;
- (void)guestCallPermissionsViewDidTapOnMicrophoneButton:(id)button;
- (void)guestCallPermissionsViewDidTapOnCameraButton:(id)button;
- (void)guestCallPermissionsViewDidCancel:(id)cancel;

@optional

@end

#endif /* PTVGuestCallPermissionsViewDelegate_Protocol_h */
