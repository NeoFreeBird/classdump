//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVAudioSession_TAVSharedAudioSession_h
#define AVAudioSession_TAVSharedAudioSession_h
@import Foundation;

@class NSObject;

@interface AVAudioSession (TAVSharedAudioSession) <TAVAVAudioSessionInterface>

/* class methods */
+ (_Bool)ptv_isExternalMic;

@end

#endif /* AVAudioSession_TAVSharedAudioSession_h */
