//
#ifndef _TtC6CallWS18WSVoiceAudioEngine_h
#define _TtC6CallWS18WSVoiceAudioEngine_h
@import Foundation;

@class CallMedia.UnfairLock, _$sSo13AVAudioEngineCSg, _$sSo13AVAudioFormatC, _$sSo17AVAudioPlayerNodeCSg, _TtCs12_SwiftObject;

@interface CallWS.WSVoiceAudioEngine : Swift._SwiftObject { // (Swift)
    /* instance variables */
    CallMedia.UnfairLock lock;
    __C.AVAudioFormat playbackFormat;
    __C.AVAudioEngine? engine;
    __C.AVAudioPlayerNode? playerNode;
}

@end

#endif /* _TtC6CallWS18WSVoiceAudioEngine_h */
