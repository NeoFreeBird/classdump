//
#ifndef _TtC4Grok24GrokActiveConvoViewModel_h
#define _TtC4Grok24GrokActiveConvoViewModel_h
@import Foundation;

@class Grok.GatewayLiveSyncRecoveryPolicy, Grok.GrokActiveConvoMetricsTracker, Grok.GrokActiveConvoViewModel.ConversationContinuation ?, Grok.GrokActiveConvoViewModel.ConversationViewVisibility, Grok.GrokActiveConvoViewModel.GrokActiveConvoEnvironment, Grok.GrokActiveConvoViewModel.SearchOverviewSeed ?, Grok.GrokAttachmentUploadTasks Swift.Bool, Grok.GrokBannerViewModel ?, Grok.GrokBuildTurnVerdicts, Grok.GrokChatItem ?, Grok.GrokConnectorAuthCardController ?, Grok.GrokConversationRequestGeneration, Grok.GrokDirectFlowPromptSheetManager ?, Grok.GrokGatewayConnectionPrewarmer, Grok.GrokHomePresetsViewModel ?, Grok.GrokInputBarView.ViewModel, Grok.GrokInputSpeechState ?, Grok.GrokMessageTree, Grok.GrokSearchOverviewContinuation ?, Grok.GrokVoiceInputBarViewModel ?, Grok.TextToSpeechManager ?, Swift.Bool, _$s10Foundation4DateVMn ?, _$s7Combine14AnyCancellableCMn ?, _$s7Combine18PassthroughSubjectCMn Grok.GrokActiveConvoViewModel.SentMessagePark _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn Grok.GrokChatItem _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn Grok.GrokSiblingSwitch _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$sySS _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn Grok.NewConvoButtonState _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySa -> Grok.GrokChatItem _$sG _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$s7Combine9PublishedVMn Grok.GrokActiveConvoViewModel.LoadState, _$s7Combine9PublishedVMn Grok.GrokChatItem ?, _$s7Combine9PublishedVMn Grok.GrokShareContinuation ?, _$s7Combine9PublishedVMn Grok.GrokUserQuestionResolution, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSSSg, _$s7Combine9PublishedVMn _$sySDySS Grok.GrokUserQuestionSubmission, _$s7Combine9PublishedVMn _$sySa -> Grok.GrokFile ?, _$sSD -> _$s10Foundation4UUIDVMn _$syc, _$sSDySS __C.CGSize, _$sSSSg, _$sSa -> Grok.Voice ?, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> Grok.GrokCachedReplayRevealKey, _$sSh -> _$s10Foundation4UUIDVMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sShySSG, _$sSi, _$sSo12UIScrollViewCSgXw, _$sSo25UIImpactFeedbackGeneratorC, _$sSo34TFNApplicationBackgroundTaskHandle_pSg, _TtCs12_SwiftObject;

@interface Grok.GrokActiveConvoViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GrokActiveConvoViewModel.GrokActiveConvoEnvironment grokActiveConvoEnvironment;
    Grok.GrokActiveConvoMetricsTracker grokActiveConvoMetricsTracker;
    weak __C.UIScrollView? hostedScrollView;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never hostedScrollViewDidChangeSubject;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never conversationDidRevealSubject;
    Swift.Bool isHostPanDismissible;
    nominal type descriptor for Combine.Published Grok.GrokActiveConvoViewModel.LoadState _loadState;
    nominal type descriptor for Combine.Published Swift.Bool _isInitialJumpPending;
    nominal type descriptor for Combine.Published Swift.Bool _showDirectFlowPromptSheet;
    Grok.GrokInputBarView.ViewModel inputViewModel;
    Grok.GrokVoiceInputBarViewModel ? voiceInputBarViewModel;
    Grok.GrokInputSpeechState ? $__lazy_storage_$_inputSpeechState;
    Grok.GrokConnectorAuthCardController ? $__lazy_storage_$_connectorAuthCards;
    Grok.GrokHomePresetsViewModel ? $__lazy_storage_$_presetsViewModel;
    Grok.GrokBannerViewModel ? $__lazy_storage_$_bannerViewModel;
    Grok.GrokDirectFlowPromptSheetManager ? directFlowPromptSheetManager;
    Grok.TextToSpeechManager ? $__lazy_storage_$_textToSpeechManager;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Array -> Grok.GrokChatItem _$sG nominal type descriptor for Swift.Never chatItems;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never hasMessages;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isTemporaryChatActive;
    nominal type descriptor for Combine.CurrentValueSubject Grok.NewConvoButtonState nominal type descriptor for Swift.Never newConvoButtonState;
    nominal type descriptor for Combine.Published Swift.Bool _isGenerating;
    nominal type descriptor for Combine.Published  empty-list Swift.Dictionary empty-list Swift.String Grok.GrokUserQuestionSubmission _provisionalUserQuestionSubmissions;
    nominal type descriptor for Combine.Published Grok.GrokUserQuestionResolution _userQuestions;
    nominal type descriptor for Combine.Published Grok.GrokChatItem ? _editChatItem;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Grok.GrokFile ? _fileAttachments;
    nominal type descriptor for Combine.Published Swift.Bool _isOpenedFromAnalyze;
    Swift.Set -> Grok.GrokCachedReplayRevealKey claimedCachedReplayReveals;
    nominal type descriptor for Combine.Published Swift.Bool _isDownloadBannerDismissed;
    nominal type descriptor for Combine.Published Swift.String? _olderHistoryCursor;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? olderHistoryTask;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.String nominal type descriptor for Swift.Never willPrependOlderHistory;
    nominal type descriptor for Combine.Published Swift.Bool _isReadOnlyBuildConversation;
    Grok.GrokBuildTurnVerdicts buildTurnVerdicts;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? prevTask;
    Grok.GrokActiveConvoViewModel.ConversationContinuation ? conversationContinuation;
    Grok.GrokConversationRequestGeneration conversationRequestGeneration;
    Swift.Int activeUploadCount;
    Grok.GrokAttachmentUploadTasks Swift.Bool gatewayUploadTasks;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID _$syc attachmentUploadRetries;
    Swift.Set -> nominal type descriptor for Foundation.UUID videoExportGuardIDs;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? voiceConnectTask;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable voiceSessionCancellables;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? agentTranscriptTask;
    Swift.Bool didShowVoiceRateLimitCard;
    Swift.Bool didReceiveVoiceChatItem;
    __C.TFNApplicationBackgroundTaskHandle? backgroundTaskForConversationRequest;
    nominal type descriptor for Foundation.Date ? lastStreamingResponseDate;
    nominal type descriptor for Foundation.Date ? lastGatewayForegroundReloadDate;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? gatewayForegroundReloadTask;
    Swift.Bool hasPendingGatewayForegroundReload;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? gatewayLiveSyncTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? gatewayLiveSyncRecoveryTask;
    Grok.GatewayLiveSyncRecoveryPolicy gatewayLiveSyncRecovery;
    nominal type descriptor for Combine.AnyCancellable ? gatewayConnectionStateCancellable;
    nominal type descriptor for Combine.AnyCancellable ? gatewayResponsePersistedCancellable;
    Grok.GrokGatewayConnectionPrewarmer gatewayPrewarmer;
    Grok.GrokActiveConvoViewModel.ConversationViewVisibility conversationViewVisibility;
    Swift.String? lastIngestedForeignUserItemId;
    Swift.Set<Swift.String> endedForeignResponseIds;
    Swift.String? unadoptedInflightResponseId;
    Swift.Set<Swift.String> branchedAwayOwnItemIds;
    Swift.Set<Swift.String> scribedUnknownChunkFields;
    Swift.Set<Swift.String> unpersistedResponseIds;
    Swift.Set<Swift.String> stoppedTurnsAwaitingServerCancel;
    Grok.GrokSearchOverviewContinuation ? searchOverviewContinuation;
    Grok.GrokActiveConvoViewModel.SearchOverviewSeed ? searchOverviewSeed;
    nominal type descriptor for Combine.PassthroughSubject Grok.GrokChatItem nominal type descriptor for Swift.Never sentNewMessage;
    Grok.GrokChatItem ? messageSentBeforeViewAppeared;
    Swift.Bool hasHostFinishedPresenting;
    nominal type descriptor for Combine.PassthroughSubject Grok.GrokActiveConvoViewModel.SentMessagePark nominal type descriptor for Swift.Never parkMessageSentBeforePresentation;
    nominal type descriptor for Combine.PassthroughSubject Grok.GrokChatItem nominal type descriptor for Swift.Never regeneratedMessage;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never requestedScrollToBottom;
    nominal type descriptor for Combine.PassthroughSubject Grok.GrokSiblingSwitch nominal type descriptor for Swift.Never switchedSibling;
    __C.UIImpactFeedbackGenerator tappedHaptic;
    Swift.Dictionary empty-list Swift.String __C.CGSize chatItemSizesMap;
    Grok.GrokMessageTree messageTree;
    Swift.Bool isSiblingNavigationInFlight;
    nominal type descriptor for Combine.Published Grok.GrokShareContinuation ? _gatewayShareContinuation;
    Swift.Array -> Grok.Voice ? $__lazy_storage_$_readAloudVoices;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

/* instance methods */
- (void)didTakeScreenshot;

@end

#endif /* _TtC4Grok24GrokActiveConvoViewModel_h */
