//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails41ConversationParticipantListViewController_h
#define _TtC23ChatConversationDetails41ConversationParticipantListViewController_h
@import Foundation;

@class ChatConversationDetails.ConversationParticipantListSearchBar ?, ChatConversationDetails.ConversationParticipantListViewModel, ChatModels.ConversationMetadataStream, ChatUI.ChatPinnedHostingController _$s7SwiftUI7AnyViewVMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatConversationDetails.ConversationParticipantListViewController : ChatUI.ChatPinnedHostingController nominal type descriptor for SwiftUI.AnyView { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationParticipantListSearchBar ? $__lazy_storage_$_searchBar;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatConversationDetails.ConversationParticipantListViewModel viewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

@end

#endif /* _TtC23ChatConversationDetails41ConversationParticipantListViewController_h */
