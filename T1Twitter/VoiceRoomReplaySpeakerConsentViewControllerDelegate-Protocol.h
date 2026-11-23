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
