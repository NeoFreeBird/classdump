//
#ifndef _TtC11ChatGrokBot31GrokBotPhoneToolsViewController_h
#define _TtC11ChatGrokBot31GrokBotPhoneToolsViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotPhoneTools, ChatGrokBot.GrokBotPhoneToolsListSections ?, ChatGrokBot.GrokBotPhoneToolsListView ?, UIViewController, _$sSD -> ChatGrokBot.GrokBotPhonePermission Swift.Bool, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotPhoneToolsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotPhoneToolsListView ? $__lazy_storage_$_internalView;
    ChatGrokBot.GrokBotPhoneToolsListSections ? $__lazy_storage_$_listSections;
    ChatGrokBot.GrokBotPhoneTools phoneTools;
    Swift.Dictionary -> ChatGrokBot.GrokBotPhonePermission Swift.Bool pendingStates;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot31GrokBotPhoneToolsViewController_h */
