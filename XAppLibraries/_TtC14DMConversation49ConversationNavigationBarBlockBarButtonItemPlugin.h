//
#ifndef _TtC14DMConversation49ConversationNavigationBarBlockBarButtonItemPlugin_h
#define _TtC14DMConversation49ConversationNavigationBarBlockBarButtonItemPlugin_h
@import Foundation;

@class DMConversation.ConversationNavigationBarRightBarButtonItemPluginContext, _$s10ChatKotlin19ObjectGraphProviderCMn, _$s10ChatModels0A24ToastActionTriggerStreamCMn, _$s14ChatModelsCore14ConversationIDOMn, _$s16ChatConversation20MessageRequestActingMp, _$sSo8UIActionCSg, _TtCs12_SwiftObject;

@interface DMConversation.ConversationNavigationBarBlockBarButtonItemPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    DMConversation.ConversationNavigationBarRightBarButtonItemPluginContext context;
    nominal type descriptor for ChatModelsCore.ConversationID conversationID;
    protocol descriptor for ChatConversation.MessageRequestActing messageRequestActionSender;
    nominal type descriptor for ChatKotlin.ObjectGraphProvider objectGraphProvider;
    nominal type descriptor for ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    __C.UIAction? $__lazy_storage_$_trailingItemAction;
}

/* instance methods */
- (void)didTapBlockButton;

@end

#endif /* _TtC14DMConversation49ConversationNavigationBarBlockBarButtonItemPlugin_h */
