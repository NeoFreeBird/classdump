//
#ifndef _TtC18TwitterAudiospaces24AdvancedAudioOutputMixer_h
#define _TtC18TwitterAudiospaces24AdvancedAudioOutputMixer_h
@import Foundation;

@class NSObject, Swift.Bool, _$s10Foundation3URLVMn ?, _$sSo11AVAudioTimeCSg, _$sSo13AVAudioEngineC;

@interface TwitterAudiospaces.AdvancedAudioOutputMixer : NSObject { // (Swift)
    /* instance variables */
    __C.AVAudioEngine engine;
    nominal type descriptor for Foundation.URL ? mixerOutputFileURL;
    Swift.Bool isRecording;
    __C.AVAudioTime? startTime;
    __C.AVAudioTime? time;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC18TwitterAudiospaces24AdvancedAudioOutputMixer_h */
