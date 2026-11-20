//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer35MessageComposerTextViewModelBuilder_h
#define _TtC19ChatMessageComposer35MessageComposerTextViewModelBuilder_h
@import Foundation;

@class ChatMessageComposer.MessageComposerActionTriggerStream, ChatMessageComposer.MessageComposerCharacterCountViewModelBuilder ?, ChatMessageComposer.MessageComposerKeyboardStream, ChatMessageComposer.MessageComposerPasteActionHandlerPluginPoint, ChatMessageComposer.MessageCompositionStream, ChatModelsCore.ChatHost, _$sSo014Subsystem_ios_B30Arm64_mainXChatFeatureSwitches_p, _TtCs12_SwiftObject;

@interface ChatMessageComposer.MessageComposerTextViewModelBuilder : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerCharacterCountViewModelBuilder ? $__lazy_storage_$_characterCountViewModelBuilder;
    ChatModelsCore.ChatHost chatHost;
    __C.Subsystem_ios_iosArm64_mainXChatFeatureSwitches featureSwitches;
    ChatMessageComposer.MessageComposerActionTriggerStream messageComposerActionTriggerStream;
    ChatMessageComposer.MessageComposerKeyboardStream messageComposerKeyboardStream;
    ChatMessageComposer.MessageCompositionStream messageCompositionStream;
    ChatMessageComposer.MessageComposerPasteActionHandlerPluginPoint pasteActionHandlerPluginPoint;
}

@end

#endif /* _TtC19ChatMessageComposer35MessageComposerTextViewModelBuilder_h */
