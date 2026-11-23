//
#ifndef _TtC16ChatConversation29MessageInfoSenderAvatarWorker_h
#define _TtC16ChatConversation29MessageInfoSenderAvatarWorker_h
@import Foundation;

@class ChatConversation.MessageInfoDetailsStream, ChatConversation.MessageInfoSenderAvatarStream, ChatModels.ChatAvatarShape, ChatUI.ChatImageLoading, _$s10Foundation3URLVMn ?, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.MessageInfoSenderAvatarWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatUI.ChatImageLoading imageLoader;
    ChatModels.ChatAvatarShape messageAvatarShape;
    nominal type descriptor for Foundation.URL ? messageAvatarURL;
    ChatConversation.MessageInfoDetailsStream messageInfoDetailsStream;
    ChatConversation.MessageInfoSenderAvatarStream messageInfoSenderAvatarStream;
}

@end

#endif /* _TtC16ChatConversation29MessageInfoSenderAvatarWorker_h */
