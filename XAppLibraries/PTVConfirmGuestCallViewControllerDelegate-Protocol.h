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
