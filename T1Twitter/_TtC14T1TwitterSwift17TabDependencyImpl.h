//
#ifndef _TtC14T1TwitterSwift17TabDependencyImpl_h
#define _TtC14T1TwitterSwift17TabDependencyImpl_h
@import Foundation;

@class ChatNetworking20RequestAuthenticator_p, Swift.Bool, _$s10CallEngine0A19ActionTriggerStreamCMn, _$s10ChatKotlin19ObjectGraphProviderCMn, _$s10ChatKotlin28NetworkConnectionStateStreamCMn, _$s10ChatModels0A15ContactsSyncingMp ?, _$s10ChatModels0A24NotificationSettingStoreMp, _$s10ChatModels0A24ToastActionTriggerStreamCMn, _$s10ChatModels19ActiveCreatorStreamCMn, _$s10ChatModels24ComplatPlanNameProvidingMp, _$s10ChatModels24UnreadMessageCountStreamCMn, _$s10ChatModels26AttachmentProcessingStreamCMn, _$s10ChatModels29PremiumSubscriptionTierStreamCMn, _$s10ChatModels35ConversationCallActionTriggerStreamCMn, _$s11ChatGrokBot0B21BotsUnreadCountStreamCMn, _$s11ChatGrokBot0bC10NavigationMp, _$s11ChatGrokBot0bC12DraftStorageCMn, _$s11ChatGrokBot0bC15AutoReviewStoreCMn, _$s11ChatGrokBot0bC15SessionProviderCMn, _$s11ChatGrokBot0bC16ConnectorSupportOMn, _$s11ChatGrokBot0bC17HostSettingsStoreCMn, _$s11ChatGrokBot0bC17IdentityProvidingMp, _$s11ChatGrokBot0bC18AvailabilityStreamCMn, _$s11ChatGrokBot0bC19TrainingOptInOffersCMn, _$s11ChatGrokBot0bC20AccountOAuthRedirectOMn, _$s11ChatGrokBot0bC21AttachmentUploadStoreCMn, _$s11ChatGrokBot0bC25VoiceCallSessionComponentCMn, _$s11ChatGrokBot0bC7SessionCMn, _$s11ChatGrokBot0bC8ScribingMp, _$s13ChatSyncState0A12ActionStreamCMn, _$s13ChatSyncState0A14InboxProvidingMp, _$s13ChatSyncState0A16AccountProvidingMp, _$s13ChatSyncState0A16ContentProvidingMp, _$s13ChatSyncState0A16MediaDownloadingMp, _$s13ChatSyncState0A17ComposerProvidingMp, _$s13ChatSyncState0A28ConversationProviderBuildingMp, _$s13ChatUtilities0A21AccountUserDefaultingMp, _$s13ChatUtilities23AudioSessionArbitratingMp, _$s14ChatGrokUpsell07PremiumC10NavigationMp, _$s14ChatModelsCore0A4HostOMn, _$s14DMConversation18MediaAssetRetainerCMn, _$s19ChatFeatureSwitches0A8FeaturesCMn, _$s20TwitterActionService0bC0CMn, _$s24ChatConversationServices0B10NavigationMp, _$s4DMUI14DMEventScriberCMn, _$s4DMUI14RootNavigationMp, _$s4DMUI17MediaAssetBuilderMp, _$s4DMUI27PostAttachmentViewBuildableMp, _$s4DMUI28ComposerPasteObserverBuilderMp, _$s4DMUI35GrokAutoTranslatePreferenceProviderMp, _$s4DMV223LocalKeypairStateStreamCMn, _$s4XGif14GifImageLoaderCMn, _$s6ChatUI0A12ImageLoadingMp, _$s6ChatUI0A14ColorProvidingMp, _$s6ChatUI0A22NavigationStackFactoryMp, _$s6ChatUI29JetfuelEventsHandlerBuildableMp, _$s6ChatUI30JetfuelAttachmentViewBuildableMp ?, _$s6ChatUI34UnifiedCardAttachmentViewBuildableMp ?, _$s6XVideo18PostVideoProvidingMp ?, _$s8DMModels23AccountSettingsProviderMp, _$s8DMModels32MoneyTransferActionTriggerStreamCMn, _$s8DMModels33WebSocketConnectionStateStreamingMp, _$s8XJetfuel0A7RuntimeCMn ?, _$sSS, _$sSo014Subsystem_ios_B25Arm64_mainIosAppLifecycleC, _$sSo014Subsystem_ios_B30Arm64_mainXChatFeatureSwitches_p, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p, _$sSo014Subsystem_ios_B42Arm64_mainMutableDataUsageSettingsProvider_p, _$sSo15XChatRootBadger_p, _$sSo16TIPImagePipelineC, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface T1TwitterSwift.TabDependencyImpl : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String accountID;
    protocol descriptor for DMModels.AccountSettingsProvider accountSettingsProvider;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    nominal type descriptor for ChatModels.ActiveCreatorStream activeCreatorStream;
    __C.Subsystem_ios_iosArm64_mainIosAppLifecycle appLifecycle;
    nominal type descriptor for ChatModels.AttachmentProcessingStream attachmentProcessingStream;
    protocol descriptor for ChatUtilities.AudioSessionArbitrating audioSessionArbiter;
    nominal type descriptor for CallEngine.CallActionTriggerStream callActionTriggerStream;
    nominal type descriptor for ChatModels.ConversationCallActionTriggerStream conversationCallActionTriggerStream;
    protocol descriptor for ChatUtilities.ChatAccountUserDefaulting chatAccountDefaults;
    nominal type descriptor for ChatFeatureSwitches.ChatFeatures chatFeatures;
    nominal type descriptor for ChatModelsCore.ChatHost chatHost;
    protocol descriptor for ChatUI.ChatColorProviding colorProvider;
    protocol descriptor for ChatModels.ComplatPlanNameProviding complatPlanNames;
    protocol descriptor for DMUI.ComposerPasteObserverBuilder composerPasteObserverBuilder;
    protocol descriptor for ChatModels.ChatContactsSyncing ? contactsSyncing;
    protocol descriptor for ChatConversationServices.ConversationNavigation conversationNavigation;
    nominal type descriptor for DMUI.DMEventScriber eventScriber;
    nominal type descriptor for XGif.GifImageLoader gifImageLoader;
    protocol descriptor for DMUI.GrokAutoTranslatePreferenceProvider grokAutoTranslatePreferenceProvider;
    nominal type descriptor for ChatGrokBot.GrokBotAccountOAuthRedirect grokBotAccountOAuthRedirect;
    nominal type descriptor for ChatGrokBot.GrokBotAttachmentUploadStore grokBotAttachmentUploadStore;
    nominal type descriptor for ChatGrokBot.GrokBotAutoReviewStore grokBotAutoReviewStore;
    nominal type descriptor for ChatGrokBot.GrokBotAvailabilityStream grokBotAvailabilityStream;
    nominal type descriptor for ChatGrokBot.GrokBotConnectorSupport grokBotConnectorSupport;
    nominal type descriptor for ChatGrokBot.GrokBotDraftStorage grokBotDraftStorage;
    nominal type descriptor for ChatGrokBot.GrokBotHostSettingsStore grokBotHostSettingsStore;
    protocol descriptor for ChatGrokBot.GrokBotIdentityProviding grokBotIdentityProvider;
    protocol descriptor for ChatGrokBot.GrokBotNavigation grokBotNavigation;
    protocol descriptor for ChatGrokBot.GrokBotScribing grokBotScriber;
    nominal type descriptor for ChatGrokBot.GrokBotSession grokBotSession;
    nominal type descriptor for ChatGrokBot.GrokBotSessionProvider grokBotSessionProvider;
    nominal type descriptor for ChatGrokBot.GrokBotTrainingOptInOffers grokBotTrainingOptInOffers;
    nominal type descriptor for ChatGrokBot.GrokBotVoiceCallSessionComponent grokBotVoiceCallSessionComponent;
    nominal type descriptor for ChatGrokBot.GrokBotsUnreadCountStream grokBotsUnreadCountStream;
    protocol descriptor for ChatUI.ChatImageLoading imageLoader;
    __C.TIPImagePipeline imagePipeline;
    Swift.Bool isNativeRewrite;
    protocol descriptor for ChatUI.JetfuelAttachmentViewBuildable ? jetfuelAttachmentViewBuilder;
    protocol descriptor for ChatUI.JetfuelEventsHandlerBuildable jetfuelEventsHandlerBuilder;
    nominal type descriptor for XJetfuel.XJetfuelRuntime ? jetfuelRuntime;
    nominal type descriptor for DMV2.LocalKeypairStateStream localKeypairStateStream;
    protocol descriptor for DMUI.MediaAssetBuilder mediaAssetBuilder;
    nominal type descriptor for DMConversation.MediaAssetRetainer mediaAssetRetainer;
    protocol descriptor for ChatUI.ChatNavigationStackFactory navigationStackFactory;
    nominal type descriptor for DMModels.MoneyTransferActionTriggerStream moneyTransferActionTriggerStream;
    nominal type descriptor for ChatKotlin.NetworkConnectionStateStream networkConnectionStateStream;
    protocol descriptor for ChatModels.ChatNotificationSettingStore notificationSettingStore;
    nominal type descriptor for ChatKotlin.ObjectGraphProvider objectGraphProvider;
    protocol descriptor for DMUI.PostAttachmentViewBuildable postAttachmentViewBuilder;
    protocol descriptor for XVideo.PostVideoProviding ? postVideoProvider;
    nominal type descriptor for ChatModels.PremiumSubscriptionTierStream premiumSubscriptionTierStream;
    protocol descriptor for ChatGrokUpsell.PremiumUpsellNavigation premiumUpsellNavigation;
    ChatNetworking20RequestAuthenticator_p requestAuthenticator;
    __C.XChatRootBadger rootBadger;
    protocol descriptor for DMUI.RootNavigation rootNavigation;
    nominal type descriptor for ChatSyncState.ChatActionStream actionStream;
    protocol descriptor for ChatSyncState.ChatMediaDownloading mediaDownloader;
    protocol descriptor for ChatSyncState.ChatAccountProviding accountProvider;
    protocol descriptor for ChatSyncState.ChatComposerProviding composerProvider;
    protocol descriptor for ChatSyncState.ChatContentProviding contentProvider;
    protocol descriptor for ChatSyncState.ChatConversationProviderBuilding conversationProviderBuilder;
    protocol descriptor for ChatSyncState.ChatInboxProviding inboxProvider;
    nominal type descriptor for ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    nominal type descriptor for ChatModels.UnreadMessageCountStream unreadMessageCountStream;
    nominal type descriptor for Swift.Int64 userID;
    protocol descriptor for DMModels.WebSocketConnectionStateStreaming webSocketConnectionStateStream;
    protocol descriptor for ChatUI.UnifiedCardAttachmentViewBuildable ? unifiedCardAttachmentViewBuilder;
    __C.Subsystem_ios_iosArm64_mainXChatFeatureSwitches featureSwitches;
    __C.Subsystem_ios_iosArm64_mainMutableDataUsageSettingsProvider mutableDataUsageSettingsProvider;
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
}

@end

#endif /* _TtC14T1TwitterSwift17TabDependencyImpl_h */
