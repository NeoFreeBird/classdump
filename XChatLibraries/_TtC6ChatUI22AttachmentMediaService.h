//
#ifndef _TtC6ChatUI22AttachmentMediaService_h
#define _TtC6ChatUI22AttachmentMediaService_h
@import Foundation;

@class ChatModelsCore.ConversationID, ChatUI.ChatImageLoading ?, ChatUtilities.AttachmentMediaRegistry, ChatUtilities.AttachmentMediaStateStream, ChatUtilities.VideoImageLoader, _$sSo7NSCacheCySo8NSStringCSo7UIImageCG, _TtCs12_SwiftObject;

@interface ChatUI.AttachmentMediaService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatUI.ChatImageLoading ? imageLoader;
    ChatUtilities.AttachmentMediaRegistry attachmentMediaRegistry;
    ChatUtilities.AttachmentMediaStateStream mediaStateStream;
    ChatUtilities.VideoImageLoader videoImageLoader;
    __C.NSCache<__C.NSString, __C.UIImage> videoThumbnailCache;
}

@end

#endif /* _TtC6ChatUI22AttachmentMediaService_h */
