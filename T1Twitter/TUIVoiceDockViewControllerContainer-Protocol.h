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
