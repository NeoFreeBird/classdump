//
#ifndef T1VoiceRoomSetupController_h
#define T1VoiceRoomSetupController_h
@import Foundation;

@class NSObject;

@interface T1VoiceRoomSetupController : NSObject

/* class methods */
+ (void)presentMicrophoneSetupForContext:(id)context fromViewController:(id)controller mode:(long long)mode completion:(id /* block */)completion;
+ (void)presentCameraSetupForContext:(id)context completion:(id /* block */)completion;
+ (_Bool)hasMicrophonePermissions;
+ (_Bool)hasCameraPermissions;

@end

#endif /* T1VoiceRoomSetupController_h */
