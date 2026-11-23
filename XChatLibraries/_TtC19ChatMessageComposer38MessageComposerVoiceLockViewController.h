//
#ifndef _TtC19ChatMessageComposer38MessageComposerVoiceLockViewController_h
#define _TtC19ChatMessageComposer38MessageComposerVoiceLockViewController_h
@import Foundation;

@class ChatMessageComposer.MessageComposerVoiceLockListener ?, ChatMessageComposer.MessageComposerVoiceLockView ?, ChatMessageComposer.MessageComposerVoicePanGestureStream, ChatUI.ChatColorProviding, UIViewController, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatMessageComposer.MessageComposerVoiceLockViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerVoiceLockListener ? listener;
    ChatMessageComposer.MessageComposerVoiceLockView ? $__lazy_storage_$_internalView;
    ChatUI.ChatColorProviding colorProvider;
    ChatMessageComposer.MessageComposerVoicePanGestureStream messageComposerVoicePanGestureStream;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC19ChatMessageComposer38MessageComposerVoiceLockViewController_h */
