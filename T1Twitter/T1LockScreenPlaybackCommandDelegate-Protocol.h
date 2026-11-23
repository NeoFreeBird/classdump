//
#ifndef T1LockScreenPlaybackCommandDelegate_Protocol_h
#define T1LockScreenPlaybackCommandDelegate_Protocol_h
@import Foundation;

@protocol T1LockScreenPlaybackCommandDelegate

@required

/* required instance methods */
- (_Bool)handleLockScreenPlaybackCommandWithAction:(long long)action player:(id)player;

@optional

@end

#endif /* T1LockScreenPlaybackCommandDelegate_Protocol_h */
