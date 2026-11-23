//
#ifndef T1LiveEventPlayerStateControllerDelegate_Protocol_h
#define T1LiveEventPlayerStateControllerDelegate_Protocol_h
@import Foundation;

@protocol T1LiveEventPlayerStateControllerDelegate

@required

/* required instance methods */
- (void)liveEventPlayerStateControllerDidRequestPlaybackResume:(id)resume;
- (void)liveEventPlayerStateControllerDidRequestPlaybackPause:(id)pause;
- (void)liveEventPlayerStateControllerDidUpdateFullscreenPresentationState:(id)state;

@optional

@end

#endif /* T1LiveEventPlayerStateControllerDelegate_Protocol_h */
