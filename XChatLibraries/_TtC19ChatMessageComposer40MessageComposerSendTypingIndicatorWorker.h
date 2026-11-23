//
#ifndef _TtC19ChatMessageComposer40MessageComposerSendTypingIndicatorWorker_h
#define _TtC19ChatMessageComposer40MessageComposerSendTypingIndicatorWorker_h
@import Foundation;

@class ChatMessageComposer.MessageComposerConversationContextStream, ChatMessageComposer.MessageComposerTypingIndicatorSending, ChatMessageComposer.MessageCompositionStream, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatMessageComposer.MessageComposerSendTypingIndicatorWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerConversationContextStream messageComposerConversationContextStream;
    ChatMessageComposer.MessageCompositionStream messageCompositionStream;
    DispatchQueue queue;
    ChatMessageComposer.MessageComposerTypingIndicatorSending typingIndicatorSender;
}

@end

#endif /* _TtC19ChatMessageComposer40MessageComposerSendTypingIndicatorWorker_h */
