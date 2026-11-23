//
#ifndef T1VoiceRoomHostReconnectViewControllerDelegate_Protocol_h
#define T1VoiceRoomHostReconnectViewControllerDelegate_Protocol_h
@import Foundation;

@protocol T1VoiceRoomHostReconnectViewControllerDelegate

@required

/* required instance methods */
- (void)voiceRoomHostReconnectViewControllerDidEnd:(id)end isReplayAvailable:(_Bool)available;
- (void)voiceRoomHostReconnectViewControllerDidReconnect:(id)reconnect;

@optional

@end

#endif /* T1VoiceRoomHostReconnectViewControllerDelegate_Protocol_h */
