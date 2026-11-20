//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails33ConversationDetailsViewController_h
#define _TtC23ChatConversationDetails33ConversationDetailsViewController_h
@import Foundation;

@class ChatAttachmentViewer.AttachmentViewerBuilder, ChatConversationDetails.AddParticipantBuilder, ChatConversationDetails.ConversationAttachmentMessageBuilding, ChatConversationDetails.ConversationAttachmentTabsBuilder, ChatConversationDetails.ConversationDetailsListener ?, ChatConversationDetails.ConversationDetailsNavigation, ChatConversationDetails.ConversationDetailsViewModel, ChatConversationDetails.ConversationDetailsWorkerPluginPoint, ChatConversationDetails.ConversationEditBuilder, ChatConversationDetails.ConversationEditGroupBuilder, ChatConversationDetails.ConversationEditNicknameTrayBuilder, ChatConversationDetails.ConversationEncryptionUpsellBuilder, ChatConversationDetails.ConversationParticipantListBuilder, ChatConversationDetails.GroupPhotoPickerFlow, ChatConversationDetails.ParticipantSheetBuilder, ChatConversationDetails.SafetyNumberBuilder, ChatConversationDetails.VanishingModeBuilder, ChatConversationServices.ChatLinkWarningPresenter, ChatKotlin.ConversationObjectGraphProvider, ChatMessageComposer.MessageComposerSendCoordinating, ChatModels.ChatToastActionTriggerStream, ChatModels.ConversationMetadataStream, ChatSyncState.ChatContentProviding, ChatSyncState.ChatConversationProviding, ChatSyncState.ChatMediaDownloading, ChatUI.ChatPinnedHostingController _$s7SwiftUI7AnyViewVMn, ChatUI.ChatProviders, Swift.Bool, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatConversationDetails.ConversationDetailsViewController : ChatUI.ChatPinnedHostingController nominal type descriptor for SwiftUI.AnyView { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationDetailsListener ? listener;
    ChatConversationDetails.AddParticipantBuilder addParticipantBuilder;
    ChatConversationDetails.ConversationAttachmentTabsBuilder attachmentTabsBuilder;
    ChatAttachmentViewer.AttachmentViewerBuilder attachmentViewerBuilder;
    ChatUI.ChatProviders chatProviders;
    ChatConversationDetails.ConversationAttachmentMessageBuilding conversationAttachmentMessageBuilder;
    ChatConversationDetails.ConversationDetailsNavigation conversationDetailsNavigation;
    ChatConversationDetails.ConversationEditBuilder conversationEditBuilder;
    ChatConversationDetails.ConversationEditGroupBuilder conversationEditGroupBuilder;
    ChatConversationDetails.ConversationEditNicknameTrayBuilder conversationEditNicknameTrayBuilder;
    ChatConversationDetails.ConversationEncryptionUpsellBuilder conversationEncryptionUpsellBuilder;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatKotlin.ConversationObjectGraphProvider conversationObjectGraphProvider;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatConversationDetails.GroupPhotoPickerFlow groupPhotoPickerFlow;
    Swift.Bool isNativeRewrite;
    ChatConversationServices.ChatLinkWarningPresenter linkWarningPresenter;
    ChatMessageComposer.MessageComposerSendCoordinating messageComposerSendCoordinator;
    ChatConversationDetails.ConversationParticipantListBuilder participantListBuilder;
    ChatConversationDetails.ParticipantSheetBuilder participantSheetBuilder;
    ChatConversationDetails.SafetyNumberBuilder safetyNumberBuilder;
    ChatSyncState.ChatMediaDownloading mediaDownloader;
    ChatSyncState.ChatContentProviding contentProvider;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    ChatConversationDetails.VanishingModeBuilder vanishingModeBuilder;
    ChatConversationDetails.ConversationDetailsViewModel viewModel;
    ChatConversationDetails.ConversationDetailsWorkerPluginPoint workerPluginPoint;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

@end

#endif /* _TtC23ChatConversationDetails33ConversationDetailsViewController_h */
