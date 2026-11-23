//
#ifndef _TtC19ChatMessageComposer29MessageComposerViewController_h
#define _TtC19ChatMessageComposer29MessageComposerViewController_h
@import Foundation;

@class ChatMessageComposer.InitialMessageComposerViewModelBuilder, ChatMessageComposer.MediaImageService, ChatMessageComposer.MessageComposerActionTriggerStream, ChatMessageComposer.MessageComposerContainerView ?, ChatMessageComposer.MessageComposerListener ?, ChatMessageComposer.MessageComposerMediaDropInteractionDelegate, ChatMessageComposer.MessageComposerSurface ?, ChatMessageComposer.MessageComposerViewModelStream, ChatMessageComposer.MessageComposerWorkerPluginPoint, ChatUI.ChatColorProviding, Swift.Bool, UIViewController, _$s13XAutocomplete23AutocompleteStateStreamCMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo17UIDropInteractionCSg;

@interface ChatMessageComposer.MessageComposerViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerListener ? listener;
    ChatUI.ChatColorProviding colorProvider;
    ChatMessageComposer.MessageComposerContainerView ? $__lazy_storage_$_internalView;
    ChatMessageComposer.MessageComposerSurface ? quickComposerSurface;
    nominal type descriptor for XAutocomplete.AutocompleteStateStream autocompleteStateStream;
    ChatMessageComposer.InitialMessageComposerViewModelBuilder initialMessageComposerViewModelBuilder;
    ChatMessageComposer.MessageComposerMediaDropInteractionDelegate mediaDropInteractionDelegate;
    ChatMessageComposer.MediaImageService mediaImageService;
    ChatMessageComposer.MessageComposerActionTriggerStream messageComposerActionTriggerStream;
    ChatMessageComposer.MessageComposerViewModelStream messageComposerViewModelStream;
    ChatMessageComposer.MessageComposerWorkerPluginPoint messageComposerWorkerPluginPoint;
    __C.UIDropInteraction? $__lazy_storage_$_mediaDropInteraction;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    Swift.Bool isVisible;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC19ChatMessageComposer29MessageComposerViewController_h */
