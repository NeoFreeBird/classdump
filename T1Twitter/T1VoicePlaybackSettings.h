//
#ifndef T1VoicePlaybackSettings_h
#define T1VoicePlaybackSettings_h
@import Foundation;

@class NSObject;

@interface T1VoicePlaybackSettings : NSObject

/* class methods */
+ (int)preferredTimeScale;
+ (unsigned long long)forwardInterval;
+ (unsigned long long)backwardInterval;

@end

#endif /* T1VoicePlaybackSettings_h */
