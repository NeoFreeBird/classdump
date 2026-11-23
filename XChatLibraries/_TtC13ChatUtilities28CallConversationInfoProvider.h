//
#ifndef _TtC13ChatUtilities28CallConversationInfoProvider_h
#define _TtC13ChatUtilities28CallConversationInfoProvider_h
@import Foundation;

@class ChatModels.ComplatPlanNameProviding, ChatSyncState.ChatActionStream, ChatSyncState.ChatInboxProviding, _$sSbyc, _TtCs12_SwiftObject;

@interface ChatUtilities.CallConversationInfoProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.ComplatPlanNameProviding complatPlanNames;
    () -> Swift.Bool isSubscriptionsVerifiedToPremiumEnabled;
    ChatSyncState.ChatActionStream actionStream;
    ChatSyncState.ChatInboxProviding inboxProvider;
}

@end

#endif /* _TtC13ChatUtilities28CallConversationInfoProvider_h */
