//
#ifndef _TtC17GrokVoiceRealtime19OpusStreamingPlayer_h
#define _TtC17GrokVoiceRealtime19OpusStreamingPlayer_h
@import Foundation;

@class DispatchQueue, GrokVoiceRealtime.AnimationConversationController ?, GrokVoiceRealtime.OpusCodecProviding, _$sSSSg, _$sSaySfG, _$sSi, _$sSo16AVAudioMixerNodeCSg, _$sSo17AVAudioPlayerNodeC, _$sySd_SiSaySfGtcSg, _TtCs12_SwiftObject;

@interface GrokVoiceRealtime.OpusStreamingPlayer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.AVAudioPlayerNode playerNode;
    __C.AVAudioPlayerNode animationNode;
    __C.AVAudioMixerNode? speechMixer;
    DispatchQueue serialQueue;
    GrokVoiceRealtime.AnimationConversationController ? animationController;
    GrokVoiceRealtime.OpusCodecProviding opusCodec;
    [Swift.Float] accumulatedSamples;
    Swift.Int accumulatedFrameCount;
    ((Swift.Double, Swift.Int, [Swift.Float]) -> ())? accumulatedOnFlush;
    Swift.String? currentResponseId;
    Swift.Int accumulationThreshold;
}

@end

#endif /* _TtC17GrokVoiceRealtime19OpusStreamingPlayer_h */
