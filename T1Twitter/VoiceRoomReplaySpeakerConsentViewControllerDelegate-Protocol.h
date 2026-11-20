//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef VoiceRoomReplaySpeakerConsentViewControllerDelegate_Protocol_h
#define VoiceRoomReplaySpeakerConsentViewControllerDelegate_Protocol_h
@import Foundation;

@protocol VoiceRoomReplaySpeakerConsentViewControllerDelegate

@required

/* required instance methods */
- (void)replaySpeakerConsentViewControllerDidConfirm:(id)confirm;
- (void)replaySpeakerConsentViewControllerDidCancel:(id)cancel;

@optional

@end

#endif /* VoiceRoomReplaySpeakerConsentViewControllerDelegate_Protocol_h */
