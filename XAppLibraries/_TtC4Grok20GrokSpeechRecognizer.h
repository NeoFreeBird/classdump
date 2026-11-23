//
#ifndef _TtC4Grok20GrokSpeechRecognizer_h
#define _TtC4Grok20GrokSpeechRecognizer_h
@import Foundation;

@class Builtin.DefaultActorStorage, Grok.GrokSpeechRecognizer.AudioSessionSettings ?, Swift.Bool, TAVSharedAudioSession.SharedAudioSession.SuspensionToken ?, _$s7Combine9PublishedVMn Grok.Transcription ?, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sSf, _$sSa -> _$s7Combine14AnyCancellableCMn, _$sSo13AVAudioEngineCSg, _$sSo18SFSpeechRecognizerCSg, _$sSo23SFSpeechRecognitionTaskCSg, _$sSo37SFSpeechAudioBufferRecognitionRequestCSg, _TtCs12_SwiftObject;

@interface Grok.GrokSpeechRecognizer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    nominal type descriptor for Combine.Published Swift.String _transcript;
    nominal type descriptor for Combine.Published Swift.Bool _isTranscribing;
    nominal type descriptor for Combine.Published Swift.Bool _transcribeButtonPressed;
    nominal type descriptor for Combine.Published Grok.Transcription ? _lastMessage;
    nominal type descriptor for Combine.Published Grok.Transcription ? _lastConfidentMessage;
    nominal type descriptor for Combine.Published Swift.String _lastTranscription;
    nominal type descriptor for Combine.Published Swift.String _previousTranscriptions;
    nominal type descriptor for Combine.Published Swift.Float _currentAmplitude;
    __C.AVAudioEngine? audioEngine;
    __C.SFSpeechAudioBufferRecognitionRequest? request;
    Grok.GrokSpeechRecognizer.AudioSessionSettings ? prevAudioSettings;
    TAVSharedAudioSession.SharedAudioSession.SuspensionToken ? audioSessionSuspensionToken;
    __C.SFSpeechRecognitionTask? task;
    __C.SFSpeechRecognizer? recognizer;
    Swift.Bool speechModelLoaded;
    Swift.Array -> nominal type descriptor for Combine.AnyCancellable lifecycleCancellables;
}

@end

#endif /* _TtC4Grok20GrokSpeechRecognizer_h */
