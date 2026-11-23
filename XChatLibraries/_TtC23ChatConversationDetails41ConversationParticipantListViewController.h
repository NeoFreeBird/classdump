//
#ifndef _TtC23ChatConversationDetails41ConversationParticipantListViewController_h
#define _TtC23ChatConversationDetails41ConversationParticipantListViewController_h
@import Foundation;

@class ChatConversationDetails.ConversationParticipantListSearchBar ?, ChatConversationDetails.ConversationParticipantListViewModel, ChatModels.ConversationMetadataStream, ChatUI.ChatPinnedHostingController _$s7SwiftUI7AnyViewVMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo18UISearchControllerCSg;

@interface ChatConversationDetails.ConversationParticipantListViewController : ChatUI.ChatPinnedHostingController nominal type descriptor for SwiftUI.AnyView { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationParticipantListSearchBar ? $__lazy_storage_$_searchBar;
    __C.UISearchController? $__lazy_storage_$_searchController;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatConversationDetails.ConversationParticipantListViewModel viewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)viewDidLoad;

@end

#endif /* _TtC23ChatConversationDetails41ConversationParticipantListViewController_h */
