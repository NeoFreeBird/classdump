//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIVoiceDockViewControllerContainer_Protocol_h
#define TUIVoiceDockViewControllerContainer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUIVoiceDockViewControllerContainer <NSObject>

@required

/* required instance methods */
- (void)voiceDockableViewControllerHasEndedSession:(id)session;
- (void)voiceDockableViewControllerRequestedAudioFocus:(id)focus;
- (void)voiceDockableViewControllerCanResignAudioFocus:(id)focus;

@optional

@end

#endif /* TUIVoiceDockViewControllerContainer_Protocol_h */
