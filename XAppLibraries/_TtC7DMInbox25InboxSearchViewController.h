//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7DMInbox25InboxSearchViewController_h
#define _TtC7DMInbox25InboxSearchViewController_h
@import Foundation;

@class DMConversation.ConversationBuilder, DMInbox.InboxSearchWorkerPluginPoint, DMUI.InboxSearchBar, Swift.Bool, TFNViewController, _$s10ChatSearch0B11QueryStreamCMn, _$s17ChatInboxServices0B21SelectedGrokBotStreamCMn, _$s17ChatInboxServices0B26SelectedConversationStreamCMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerC;

@interface DMInbox.InboxSearchViewController : TFNViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for ChatSearch.SearchQueryStream searchQueryStream;
    __C.UIViewController chatSearchViewController;
    nominal type descriptor for ChatInboxServices.InboxSelectedConversationStream inboxSelectedConversationStream;
    nominal type descriptor for ChatInboxServices.InboxSelectedGrokBotStream inboxSelectedGrokBotStream;
    DMConversation.ConversationBuilder conversationBuilder;
    DMInbox.InboxSearchWorkerPluginPoint workerPluginPoint;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    DMUI.InboxSearchBar searchBar;
    Swift.Bool hasFocusedSearchBar;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7DMInbox25InboxSearchViewController_h */
