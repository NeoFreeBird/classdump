//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVConfirmGuestCallViewControllerDelegate_Protocol_h
#define PTVConfirmGuestCallViewControllerDelegate_Protocol_h
@import Foundation;

@protocol PTVConfirmGuestCallViewControllerDelegate

@required

/* required instance methods */
- (void)confirmGuestCallViewControllerDidPressConfirmButton:(id)button isFirstConfirmation:(_Bool)confirmation isAudioOnly:(_Bool)only;

@optional

@end

#endif /* PTVConfirmGuestCallViewControllerDelegate_Protocol_h */
