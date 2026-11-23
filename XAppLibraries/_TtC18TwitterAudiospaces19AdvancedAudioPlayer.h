//
#ifndef _TtC18TwitterAudiospaces19AdvancedAudioPlayer_h
#define _TtC18TwitterAudiospaces19AdvancedAudioPlayer_h
@import Foundation;

@class NSObject, Swift.Bool, TwitterAudiospaces.AdvancedAudioPlayerDelegate ?, TwitterAudiospaces.AdvancedAudioPlayerLoopMode, _$s10Foundation3URLVMn ?, _$sSd, _$sSf, _$sSi, _$sSo11AVAudioUnitCSg, _$sSo13AVAudioEngineCSg, _$sSo16AVAudioMixerNodeCSg, _$sSo17AVAudioUnitReverbCSg, _$sSo20AVAudioUnitTimePitchCSg, _$sSo20AVAudioUnitVarispeedCSg, _$ss13OpaquePointerVMn ?, _$ss5Int64VMn, _$ss6UInt64VMn, __C.AudioStreamBasicDescription;

@interface TwitterAudiospaces.AdvancedAudioPlayer : NSObject { // (Swift)
    /* instance variables */
    TwitterAudiospaces.AdvancedAudioPlayerDelegate ? delegate;
    nominal type descriptor for Foundation.URL ? url;
    TwitterAudiospaces.AdvancedAudioPlayerLoopMode loop;
    Swift.Bool isPlaying;
    Swift.Int loopCount;
    Swift.Double startTime;
    nominal type descriptor for Swift.UInt64 framesPlayed;
    nominal type descriptor for Swift.Int64 cueStartPositionFrame;
    nominal type descriptor for Swift.Int64 cueEndPositionFrame;
    Swift.Bool isLoopingRange;
    __C.AudioStreamBasicDescription audioStreamBasicDescription;
    __C.AudioStreamBasicDescription playerStreamFormat;
    Swift.Double loopDuration;
    Swift.Double playbackTime;
    Swift.Float mixerVolume;
    nominal type descriptor for Swift.Int64 dataSize;
    nominal type descriptor for Swift.UInt64 packets;
    Swift.Double fileDuration;
    nominal type descriptor for Swift.UInt64 totalFrames;
    __C.AVAudioEngine? engine;
    nominal type descriptor for Swift.OpaquePointer ? inputFile;
    __C.AVAudioUnitVarispeed? varispeedAVUnit;
    __C.AVAudioUnitTimePitch? pitchUnit;
    __C.AVAudioUnitReverb? reverbUnit;
    __C.AVAudioUnit? filePlayerAVAudioUnit;
    __C.AVAudioMixerNode? mixerNode;
}

/* instance methods */
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC18TwitterAudiospaces19AdvancedAudioPlayer_h */
