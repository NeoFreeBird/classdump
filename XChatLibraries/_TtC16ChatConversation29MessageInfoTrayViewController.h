//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation29MessageInfoTrayViewController_h
#define _TtC16ChatConversation29MessageInfoTrayViewController_h
@import Foundation;

@class ChatConversation.MessageInfoDetailsStream, ChatConversation.MessageInfoSenderAvatarStream, ChatConversation.MessageInfoTrayListItemPluginPoint, ChatConversation.MessageInfoTrayWorkerPluginPoint, ChatConversation.MessageReactionsStream, ChatModels.ChatMessageItem, _$s13XDesignSystem29TrayListContentViewControllerCN, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatConversation.MessageInfoTrayViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    ChatConversation.MessageInfoTrayListItemPluginPoint listItemPluginPoint;
    ChatModels.ChatMessageItem message;
    ChatConversation.MessageInfoDetailsStream messageInfoDetailsStream;
    ChatConversation.MessageInfoSenderAvatarStream messageInfoSenderAvatarStream;
    ChatConversation.MessageReactionsStream messageReactionsStream;
    ChatConversation.MessageInfoTrayWorkerPluginPoint workerPluginPoint;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)viewDidLoad;

@end

#endif /* _TtC16ChatConversation29MessageInfoTrayViewController_h */
