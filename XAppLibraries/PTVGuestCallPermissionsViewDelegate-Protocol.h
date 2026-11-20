//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
