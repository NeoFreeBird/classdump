//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
