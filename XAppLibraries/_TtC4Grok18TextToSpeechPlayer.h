//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok18TextToSpeechPlayer_h
#define _TtC4Grok18TextToSpeechPlayer_h
@import Foundation;

@class Grok.TextToSpeechCore ?, Grok.TextToSpeechPlayer _$scSg ->, Grok.TextToSpeechPlayerDelegate ?, Swift.Bool, TAVSharedAudioSession.SharedAudioSession.ConfigurationToken ?, _$s7Combine9PublishedVMn Grok.Playback.Speed, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sSd, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _$sSd, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$ss5ErrorMp _$scSg ->, _$syycSg, _TtCs12_SwiftObject;

@interface Grok.TextToSpeechPlayer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TAVSharedAudioSession.SharedAudioSession.ConfigurationToken ? audioSessionToken;
    nominal type descriptor for Combine.Published Swift.Bool _isLoading;
    nominal type descriptor for Combine.Published Swift.Bool _isPlaying;
    nominal type descriptor for Combine.Published Swift.Bool _hasError;
    nominal type descriptor for Combine.Published Swift.Double _currentTime;
    nominal type descriptor for Combine.Published Swift.Double _duration;
    nominal type descriptor for Combine.Published Swift.Bool _isStreaming;
    nominal type descriptor for Combine.Published Grok.Playback.Speed _speed;
    nominal type descriptor for Combine.Published Swift.Bool _isOpen;
    nominal type descriptor for Combine.Published Swift.String _title;
    Grok.TextToSpeechPlayerDelegate ? delegate;
    Swift.Double latestTime;
    Swift.String responseID;
    Swift.Double timeCallbackInterval;
    Swift.Bool staysOpenAfterCompletion;
    Grok.TextToSpeechCore ? core;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Bool isTerminated;
    Swift.Bool hasStartedPlayback;
    Swift.Int commandGeneration;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? commandChain;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? terminalCleanupTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? terminalNotificationTask;
    (() -> ())? onCompletion;
    protocol descriptor for Swift.Error _$scSg -> onError;
    Grok.TextToSpeechPlayer _$scSg -> onTerminal;
}

@end

#endif /* _TtC4Grok18TextToSpeechPlayer_h */
