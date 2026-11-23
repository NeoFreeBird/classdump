//
#ifndef _TtC19ChatMessageComposer43MessageComposerMediaDropInteractionDelegate_h
#define _TtC19ChatMessageComposer43MessageComposerMediaDropInteractionDelegate_h
@import Foundation;

#include "UIDropInteractionDelegate-Protocol.h"

@class ChatMessageComposer.MessageComposerConfiguration, ChatMessageComposer.MessageComposerConversationContextStream, ChatMessageComposer.MessageComposerSource, ChatMessageComposer.MessageCompositionStream, ChatModelsCore.ChatHost, NSObject, _$sSo014Subsystem_ios_B30Arm64_mainXChatFeatureSwitches_p, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p, __C.UIDropOperation;

@interface ChatMessageComposer.MessageComposerMediaDropInteractionDelegate : NSObject <UIDropInteractionDelegate> { // (Swift)
    /* instance variables */
    ChatModelsCore.ChatHost chatHost;
    ChatMessageComposer.MessageComposerSource composerSource;
    __C.Subsystem_ios_iosArm64_mainXChatFeatureSwitches featureSwitches;
    ChatMessageComposer.MessageComposerConfiguration messageComposerConfiguration;
    ChatMessageComposer.MessageComposerConversationContextStream messageComposerConversationContextStream;
    ChatMessageComposer.MessageCompositionStream messageCompositionStream;
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
    __C.UIDropOperation proposedOperation;
}

/* instance methods */
- (_Bool)dropInteraction:(id)interaction canHandleSession:(id)session;
- (void)dropInteraction:(id)interaction sessionDidEnter:(id)enter;
- (id)dropInteraction:(id)interaction sessionDidUpdate:(id)update;
- (void)dropInteraction:(id)interaction performDrop:(id)drop;
- (id)init;

@end

#endif /* _TtC19ChatMessageComposer43MessageComposerMediaDropInteractionDelegate_h */
