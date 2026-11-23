//
#ifndef _TtC19ChatMessageComposer25ControlMenuViewController_h
#define _TtC19ChatMessageComposer25ControlMenuViewController_h
@import Foundation;

@class ChatMessageComposer.ControlMenuListener ?, ChatMessageComposer.ControlMenuView ?, UIViewController, _$sSa -> ChatMessageComposer.ControlMenuAction;

@interface ChatMessageComposer.ControlMenuViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatMessageComposer.ControlMenuListener ? listener;
    ChatMessageComposer.ControlMenuView ? $__lazy_storage_$_internalView;
    Swift.Array -> ChatMessageComposer.ControlMenuAction actions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC19ChatMessageComposer25ControlMenuViewController_h */
