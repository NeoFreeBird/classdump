//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
