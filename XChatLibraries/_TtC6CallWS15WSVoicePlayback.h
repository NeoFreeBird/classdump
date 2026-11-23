//
#ifndef _TtC6CallWS15WSVoicePlayback_h
#define _TtC6CallWS15WSVoicePlayback_h
@import Foundation;

@class CallWS.WSVoicePlaybackLevelMeter, Swift.Bool, _$sSSSg, _$sSo13AVAudioFormatC, _TtCs12_SwiftObject;

@interface CallWS.WSVoicePlayback : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? activeResponseID;
    __C.AVAudioFormat format;
    Swift.Bool hasStartedTurn;
    CallWS.WSVoicePlaybackLevelMeter levelMeter;
}

@end

#endif /* _TtC6CallWS15WSVoicePlayback_h */
