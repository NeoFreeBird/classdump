//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer31MessageComposerViewModelBuilder_h
#define _TtC19ChatMessageComposer31MessageComposerViewModelBuilder_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatMessageComposer.MessageComposerActionTriggerStream, ChatMessageComposer.MessageComposerActionsViewModelBuilder ?, ChatMessageComposer.MessageComposerHeaderViewModelBuilder ?, ChatMessageComposer.MessageComposerKeyboardStream, ChatMessageComposer.MessageComposerPasteActionHandlerPluginPoint, ChatMessageComposer.MessageComposerQuickActionsViewModelBuilder ?, ChatMessageComposer.MessageComposerTextViewModelBuilder ?, ChatMessageComposer.MessageComposerVoiceViewModelBuilder ?, ChatMessageComposer.MessageCompositionStream, ChatModels.AudioPlaybackStream, ChatModels.ComplatPlanNameProviding, ChatModelsCore.ChatHost, ChatUI.ChatNavigationStackFactory, _$sSo014Subsystem_ios_B30Arm64_mainXChatFeatureSwitches_p, _TtCs12_SwiftObject;

@interface ChatMessageComposer.MessageComposerViewModelBuilder : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerActionsViewModelBuilder ? $__lazy_storage_$_actionsViewModelBuilder;
    ChatMessageComposer.MessageComposerHeaderViewModelBuilder ? $__lazy_storage_$_headerViewModelBuilder;
    ChatMessageComposer.MessageComposerQuickActionsViewModelBuilder ? $__lazy_storage_$_quickActionsViewModelBuilder;
    ChatMessageComposer.MessageComposerTextViewModelBuilder ? $__lazy_storage_$_textViewModelBuilder;
    ChatMessageComposer.MessageComposerVoiceViewModelBuilder ? $__lazy_storage_$_voiceViewModelBuilder;
    ChatModels.AudioPlaybackStream audioPlaybackStream;
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatModelsCore.ChatHost chatHost;
    ChatModels.ComplatPlanNameProviding complatPlanNames;
    __C.Subsystem_ios_iosArm64_mainXChatFeatureSwitches featureSwitches;
    ChatMessageComposer.MessageComposerActionTriggerStream messageComposerActionTriggerStream;
    ChatMessageComposer.MessageComposerKeyboardStream messageComposerKeyboardStream;
    ChatMessageComposer.MessageCompositionStream messageCompositionStream;
    ChatUI.ChatNavigationStackFactory navigationStackFactory;
    ChatMessageComposer.MessageComposerPasteActionHandlerPluginPoint pasteActionHandlerPluginPoint;
}

@end

#endif /* _TtC19ChatMessageComposer31MessageComposerViewModelBuilder_h */
