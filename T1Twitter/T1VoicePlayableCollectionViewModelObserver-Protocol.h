//
#ifndef T1VoicePlayableCollectionViewModelObserver_Protocol_h
#define T1VoicePlayableCollectionViewModelObserver_Protocol_h
@import Foundation;

@protocol T1VoicePlayableCollectionViewModelObserver

@required

/* required instance methods */
- (void)voicePlayableViewModel:(id)model didUpdatePlaybackState:(id)state;
- (void)voicePlayableViewModel:(id)model didUpdateClip:(id)clip;

@optional

@end

#endif /* T1VoicePlayableCollectionViewModelObserver_Protocol_h */
