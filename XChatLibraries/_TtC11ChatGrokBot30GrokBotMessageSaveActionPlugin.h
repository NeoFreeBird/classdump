//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot30GrokBotMessageSaveActionPlugin_h
#define _TtC11ChatGrokBot30GrokBotMessageSaveActionPlugin_h
@import Foundation;

@class ChatAttachmentViewer.AttachmentMediaSaver, ChatGrokBot.GrokBotMessageActionPluginContext, ChatGrokBot.GrokBotMessageActionSection, ChatGrokBot.GrokBotMessageAttachmentFileResolver, ChatModels.ChatToastActionTriggerStream, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotMessageSaveActionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotMessageAttachmentFileResolver attachmentFileResolver;
    ChatGrokBot.GrokBotMessageActionPluginContext context;
    ChatAttachmentViewer.AttachmentMediaSaver mediaSaver;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    ChatGrokBot.GrokBotMessageActionSection section;
}

@end

#endif /* _TtC11ChatGrokBot30GrokBotMessageSaveActionPlugin_h */
