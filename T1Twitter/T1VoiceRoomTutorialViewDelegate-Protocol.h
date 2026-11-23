//
#ifndef T1VoiceRoomTutorialViewDelegate_Protocol_h
#define T1VoiceRoomTutorialViewDelegate_Protocol_h
@import Foundation;

@protocol T1VoiceRoomTutorialViewDelegate

@required

/* required instance methods */
- (void)voiceRoomTutorialView:(id)view didTapToNavigateToViewController:(id)controller;

@optional

@end

#endif /* T1VoiceRoomTutorialViewDelegate_Protocol_h */
