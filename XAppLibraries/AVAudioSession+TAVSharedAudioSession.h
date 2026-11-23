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
