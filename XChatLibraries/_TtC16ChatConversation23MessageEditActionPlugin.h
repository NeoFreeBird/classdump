//
#ifndef _TtC16ChatConversation23MessageEditActionPlugin_h
#define _TtC16ChatConversation23MessageEditActionPlugin_h
@import Foundation;

@class ChatConversation.MessageActionIdentifier, ChatConversation.MessageActionPluginContext, ChatConversation.MessageActionSection, ChatConversation.MessageComposerTargetResolving, ChatMessageComposer.MessageComposerActionTriggerStream, _$s6XIcons5XIconOMn ?, _$sSS, _TtCs12_SwiftObject;

@interface ChatConversation.MessageEditActionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversation.MessageActionPluginContext context;
    ChatMessageComposer.MessageComposerActionTriggerStream messageComposerActionTriggerStream;
    ChatConversation.MessageComposerTargetResolving messageComposerTargetResolver;
    ChatConversation.MessageActionIdentifier identifier;
    ChatConversation.MessageActionSection section;
    Swift.String title;
    nominal type descriptor for XIcons.XIcon ? icon;
}

@end

#endif /* _TtC16ChatConversation23MessageEditActionPlugin_h */
