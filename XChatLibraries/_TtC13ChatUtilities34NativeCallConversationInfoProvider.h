//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13ChatUtilities34NativeCallConversationInfoProvider_h
#define _TtC13ChatUtilities34NativeCallConversationInfoProvider_h
@import Foundation;

@class ChatModels.ComplatPlanNameProviding, ChatSyncState.ChatActionStream, ChatSyncState.ChatInboxProviding, _$sSbyc, _TtCs12_SwiftObject;

@interface ChatUtilities.NativeCallConversationInfoProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.ComplatPlanNameProviding complatPlanNames;
    () -> Swift.Bool isSubscriptionsVerifiedToPremiumEnabled;
    ChatSyncState.ChatActionStream actionStream;
    ChatSyncState.ChatInboxProviding inboxProvider;
}

@end

#endif /* _TtC13ChatUtilities34NativeCallConversationInfoProvider_h */
