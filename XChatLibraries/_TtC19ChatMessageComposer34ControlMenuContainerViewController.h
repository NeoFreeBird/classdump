//
#ifndef _TtC19ChatMessageComposer34ControlMenuContainerViewController_h
#define _TtC19ChatMessageComposer34ControlMenuContainerViewController_h
@import Foundation;

@class ChatMessageComposer.ControlMenuContainerLayout.EdgePreference, ChatMessageComposer.ControlMenuContainerListener ?, ChatMessageComposer.ControlMenuContainerView ?, UIViewController, _$sSa -> ChatMessageComposer.ControlMenuAction, __C.CGRect ?;

@interface ChatMessageComposer.ControlMenuContainerViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatMessageComposer.ControlMenuContainerListener ? listener;
    Swift.Array -> ChatMessageComposer.ControlMenuAction actions;
    ChatMessageComposer.ControlMenuContainerLayout.EdgePreference edgePreference;
    __C.CGRect ? sourceRect;
    ChatMessageComposer.ControlMenuContainerView ? $__lazy_storage_$_internalView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC19ChatMessageComposer34ControlMenuContainerViewController_h */
