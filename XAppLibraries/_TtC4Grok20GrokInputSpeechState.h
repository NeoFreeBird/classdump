//
#ifndef _TtC4Grok20GrokInputSpeechState_h
#define _TtC4Grok20GrokInputSpeechState_h
@import Foundation;

@class Grok.GrokSpeechRecognizer, Grok.TextToSpeechPlayer, _$s7Combine9PublishedVMn Grok.TextToSpeechPlayer, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface Grok.GrokInputSpeechState : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GrokSpeechRecognizer speechRecognizer;
    nominal type descriptor for Combine.Published Swift.Bool _isManuallyStoppedTranscription;
    nominal type descriptor for Combine.Published Swift.Bool _isTranscribing;
    nominal type descriptor for Combine.Published Swift.String _transcript;
    nominal type descriptor for Combine.Published Grok.TextToSpeechPlayer _textToSpeechPlayer;
    Grok.TextToSpeechPlayer placeholderTextToSpeechPlayer;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@end

#endif /* _TtC4Grok20GrokInputSpeechState_h */
