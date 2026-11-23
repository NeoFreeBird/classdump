//
#ifndef _TtC4Grok19GrokComposerContent_h
#define _TtC4Grok19GrokComposerContent_h
@import Foundation;

@class Grok.GrokComposerContent.State, Grok.GrokComposerHostedView, Grok.GrokComposerMicButton, Grok.GrokComposerPlusButton, Grok.GrokComposerSendButton, Grok.GrokComposerSpeakButton, Grok.GrokComposerSuggestionsOverlay, Grok.GrokComposerVoiceTakeoverView, Grok.GrokInputBarView.ViewModel, Grok.GrokInputSpeechState, Grok.GrokModeTip ?, Grok.GrokSettingsProvider, Grok.ResizableTextFieldModel, Grok.ResizableTextViewRepresentable.Coordinator, NSObject, Swift.Bool, _$s10TFNUISwift27HostingEnvironmentViewModelCMn, _$s12CoreGraphics7CGFloatVMn, _$s13QuickComposer0aB7ContextCMn ?, _$s13QuickComposer0aB9ContentIDVMn, _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo18NSAttributedStringCSg, _$syyc;

@interface Grok.GrokComposerContent : NSObject { // (Swift)
    /* instance variables */
    nominal type descriptor for QuickComposer.QuickComposerContentID id;
    Grok.GrokInputBarView.ViewModel inputViewModel;
    Grok.GrokSettingsProvider settingsProvider;
    Grok.GrokInputSpeechState speechState;
    Grok.ResizableTextFieldModel textFieldModel;
    Grok.ResizableTextViewRepresentable.Coordinator textViewCoordinator;
    () -> () onEditPromptClose;
    Swift.Bool isDictationVersion2Enabled;
    nominal type descriptor for CoreGraphics.CGFloat maximumBodyPointSize;
    Swift.String placeholderHint;
    Grok.GrokComposerPlusButton plusButton;
    Grok.GrokComposerMicButton micButton;
    Grok.GrokComposerSendButton sendButton;
    Grok.GrokComposerSendButton stopButton;
    Grok.GrokComposerSpeakButton speakButton;
    Grok.GrokComposerSendButton voiceStopButton;
    Grok.GrokComposerVoiceTakeoverView voiceTakeoverView;
    nominal type descriptor for TFNUISwift.HostingEnvironmentViewModel hostingEnvironment;
    Grok.GrokComposerHostedView headerView;
    Grok.GrokComposerHostedView railView;
    Grok.GrokComposerHostedView transcribingBackgroundView;
    Grok.GrokComposerHostedView dictationTakeoverView;
    Grok.GrokComposerSuggestionsOverlay suggestionsOverlay;
    nominal type descriptor for QuickComposer.QuickComposerContext ? context;
    Grok.GrokComposerContent.State state;
    Swift.Bool isFocusPending;
    Swift.Bool isBodyFontRefreshPending;
    Swift.Bool isEditingPrompt;
    __C.NSAttributedString? restingDraft;
    Grok.GrokModeTip ? modeTip;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC4Grok19GrokComposerContent_h */
