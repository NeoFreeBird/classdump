//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC17GrokVoiceRealtime18SharedAudioSession_h
#define _TtC17GrokVoiceRealtime18SharedAudioSession_h
@import Foundation;

@class GrokVoiceRealtime.AVAudioSessionInterface, GrokVoiceRealtime.SharedAudioSession.TAVSuspension ?, GrokVoiceRealtime.TAVSessionInterface, _$s7Combine18PassthroughSubjectCMn GrokVoiceRealtime.SharedAudioSession.UpdateErrorEvent _$ss5NeverOMn, _$sSbSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo11NSHashTableC GrokVoiceRealtime.SharedAudioSession.Token, _TtCs12_SwiftObject;

@interface GrokVoiceRealtime.SharedAudioSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.PassthroughSubject GrokVoiceRealtime.SharedAudioSession.UpdateErrorEvent nominal type descriptor for Swift.Never updateErrorPublisher;
    __C.NSHashTable GrokVoiceRealtime.SharedAudioSession.Token tokens;
    GrokVoiceRealtime.SharedAudioSession.TAVSuspension ? tavSuspension;
    GrokVoiceRealtime.AVAudioSessionInterface avAudioSession;
    GrokVoiceRealtime.TAVSessionInterface tavSession;
    Swift.Bool? isActive;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@end

#endif /* _TtC17GrokVoiceRealtime18SharedAudioSession_h */
