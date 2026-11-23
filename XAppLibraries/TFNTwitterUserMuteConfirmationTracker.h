//
#ifndef TFNTwitterUserMuteConfirmationTracker_h
#define TFNTwitterUserMuteConfirmationTracker_h
@import Foundation;

@class NSObject;

@interface TFNTwitterUserMuteConfirmationTracker : NSObject // (Swift)

/* class methods */
+ (_Bool)shouldDisplayConfirmationAlert;
+ (void)recordConfirmationAlertShown;

/* instance methods */
- (id)init;

@end

#endif /* TFNTwitterUserMuteConfirmationTracker_h */
