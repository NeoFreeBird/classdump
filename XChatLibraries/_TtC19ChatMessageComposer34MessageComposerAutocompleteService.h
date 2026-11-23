//
#ifndef _TtC19ChatMessageComposer34MessageComposerAutocompleteService_h
#define _TtC19ChatMessageComposer34MessageComposerAutocompleteService_h
@import Foundation;

@class ChatModelsCore.ConversationID, ChatSyncState.ChatComposerProviding, ChatSyncState.ChatInboxProviding, _$s7Combine19CurrentValueSubjectCMn _$sySSSg _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface ChatMessageComposer.MessageComposerAutocompleteService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.String? nominal type descriptor for Swift.Never cashtagQuery;
    ChatSyncState.ChatComposerProviding composerProvider;
    ChatModelsCore.ConversationID conversationID;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.String? nominal type descriptor for Swift.Never hashtagQuery;
    ChatSyncState.ChatInboxProviding inboxProvider;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.String? nominal type descriptor for Swift.Never userQuery;
}

@end

#endif /* _TtC19ChatMessageComposer34MessageComposerAutocompleteService_h */
