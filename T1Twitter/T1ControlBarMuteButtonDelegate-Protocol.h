//
#ifndef T1ControlBarMuteButtonDelegate_Protocol_h
#define T1ControlBarMuteButtonDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ControlBarMuteButtonDelegate <NSObject>

@required

/* required instance methods */
- (void)controlBarMuteButton:(id)button didUpdateMuteState:(_Bool)state;

@optional

@end

#endif /* T1ControlBarMuteButtonDelegate_Protocol_h */
