//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
