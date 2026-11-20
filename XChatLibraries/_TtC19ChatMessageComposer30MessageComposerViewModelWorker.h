//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer30MessageComposerViewModelWorker_h
#define _TtC19ChatMessageComposer30MessageComposerViewModelWorker_h
@import Foundation;

@class ChatMessageComposer.MessageComposerActionPluginPoint, ChatMessageComposer.MessageComposerConversationContextStream, ChatMessageComposer.MessageComposerKeyboardStream, ChatMessageComposer.MessageComposerViewModelBuilder, ChatMessageComposer.MessageComposerViewModelStream, ChatMessageComposer.MessageComposerVoicePanGestureStream, ChatMessageComposer.MessageComposerWorkerPluginContext, ChatMessageComposer.MessageCompositionStream, ChatModels.AttachmentProcessingStream, ChatModels.AudioPlaybackStream, ChatModels.ConversationQuickReplyStream, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatMessageComposer.MessageComposerViewModelWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatModels.AttachmentProcessingStream attachmentProcessingStream;
    ChatModels.AudioPlaybackStream audioPlaybackStream;
    ChatMessageComposer.MessageComposerWorkerPluginContext context;
    ChatModels.ConversationQuickReplyStream conversationQuickReplyStream;
    ChatMessageComposer.MessageComposerActionPluginPoint messageComposerActionPluginPoint;
    ChatMessageComposer.MessageComposerConversationContextStream messageComposerConversationContextStream;
    ChatMessageComposer.MessageComposerKeyboardStream messageComposerKeyboardStream;
    ChatMessageComposer.MessageComposerViewModelBuilder messageComposerViewModelBuilder;
    ChatMessageComposer.MessageComposerViewModelStream messageComposerViewModelStream;
    ChatMessageComposer.MessageComposerVoicePanGestureStream messageComposerVoicePanGestureStream;
    ChatMessageComposer.MessageCompositionStream messageCompositionStream;
    DispatchQueue queue;
}

@end

#endif /* _TtC19ChatMessageComposer30MessageComposerViewModelWorker_h */
