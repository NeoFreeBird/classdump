//
#ifndef _TtC19ChatMessageComposer35MessageComposerQuickComposerContent_h
#define _TtC19ChatMessageComposer35MessageComposerQuickComposerContent_h
@import Foundation;

@class ChatMessageComposer.ComposerCharacterCountView, ChatMessageComposer.ComposerHeaderView, ChatMessageComposer.ComposerTextView, ChatMessageComposer.MessageComposerQuickComposerVoiceTakeoverView, ChatMessageComposer.MessageComposerViewModel ?, ChatUI.ChatColorProviding, NSObject, QuickComposer.QuickComposerContentID, QuickComposer.QuickComposerContext ?, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$s7Combine14AnyCancellableCMn ?, _$sSD -> ChatMessageComposer.MessageComposerActionIdentifier ChatMessageComposer.MessageComposerQuickComposerActionButton, _$sSo17UIDropInteractionC, _$sSo6UIViewC, _$syycSg;

@interface ChatMessageComposer.MessageComposerQuickComposerContent : NSObject { // (Swift)
    /* instance variables */
    QuickComposer.QuickComposerContentID id;
    ChatUI.ChatColorProviding colorProvider;
    ChatMessageComposer.MessageComposerViewModel ? viewModel;
    __C.UIDropInteraction dropInteraction;
    ChatMessageComposer.ComposerTextView textView;
    ChatMessageComposer.ComposerHeaderView railView;
    ChatMessageComposer.ComposerHeaderView readOnlyView;
    ChatMessageComposer.MessageComposerQuickComposerVoiceTakeoverView voiceTakeoverView;
    __C.UIView destructiveBackgroundView;
    ChatMessageComposer.ComposerCharacterCountView characterCountView;
    Swift.Dictionary -> ChatMessageComposer.MessageComposerActionIdentifier ChatMessageComposer.MessageComposerQuickComposerActionButton actionButtons;
    QuickComposer.QuickComposerContext ? context;
    nominal type descriptor for CoreGraphics.CGFloat railHeight;
    Swift.Bool isFocusPending;
    (() -> ())? whenReady;
    nominal type descriptor for Combine.AnyCancellable ? autocompleteResultsSubscription;
    Swift.Bool isShowingAutocompleteResults;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC19ChatMessageComposer35MessageComposerQuickComposerContent_h */
