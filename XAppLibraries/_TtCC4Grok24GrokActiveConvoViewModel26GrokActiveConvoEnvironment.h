//
#ifndef _TtCC4Grok24GrokActiveConvoViewModel26GrokActiveConvoEnvironment_h
#define _TtCC4Grok24GrokActiveConvoViewModel26GrokActiveConvoEnvironment_h
@import Foundation;

@class Grok.GrokAccountLinkEntryRouteRecord ?, Grok.GrokActiveConvoViewModel.GrokActiveConvoEnvironment.SearchOverviewAttachment ?, Grok.GrokConversationsProviding, Grok.GrokConvoStartingValue, Grok.GrokDelegate ?, Grok.GrokEventScriber, Grok.GrokFeatureAccess, Grok.GrokGatewayAiOverviewService.CreatedConversation Grok.GrokSearchOverviewContinuation _$s_4Grok0A13Authenticable_p _$ss5Int64VMn _$syyYbcyAAYbScMYcctYaYbKc, Grok.GrokMediaDownloader ?, Grok.GrokMediaProvider, Grok.GrokModelChoice ?, Grok.GrokRealtimeVoiceSession ?, Grok.GrokScribeRoute ?, Grok.GrokSettingsProvider, Grok.GrokShareContinuation ?, Grok.GrokToolOverrides ?, Grok.GrokUserManager, Grok.GrokUsersProvider, Grok0A18AccountPerspective_p, Swift.Bool, _$s20TwitterActionService0bC0CMn, _$s7Combine14AnyCancellableCMn ?, _$s7Combine18PassthroughSubjectCMn Grok.GrokReportIssueRequest _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$s12CoreGraphics7CGFloatVMn ? _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$s12CoreGraphics7CGFloatVMn, _$s7Combine9PublishedVMn _$s12CoreGraphics7CGFloatVMn ?, _$s7Combine9PublishedVMn _$sSaySSG, _$s7Combine9PublishedVMn _$sSo7UIColorCSg, _$s7SwiftUI9AnimationVMn ?, _$sSS, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sShySSG, _$sSo16TIPImagePipelineC, _$syXlSg, _TtCs12_SwiftObject;

@interface Grok.GrokActiveConvoViewModel.GrokActiveConvoEnvironment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok0A18AccountPerspective_p account;
    __C.TIPImagePipeline imagePipeline;
    Grok.GrokDelegate ? delegate;
    Grok.GrokUsersProvider usersProvider;
    Grok.GrokMediaProvider mediaProvider;
    Grok.GrokConversationsProviding conversationsProvider;
    Grok.GrokSettingsProvider settingsProvider;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    Grok.GrokConvoStartingValue startingValue;
    Swift.String premiumReferringPage;
    Grok.GrokEventScriber grokEventScriber;
    Grok.GrokToolOverrides ? toolOverrides;
    Grok.GrokModelChoice ? modelChoice;
    nominal type descriptor for Combine.AnyCancellable ? modelChoiceCancellable;
    Swift.Bool isTemporaryChat;
    Swift.Bool isHostedInTray;
    Swift.Bool usesRedesignedChatBubbles;
    Swift.Bool usesSyncAnalyzePromptCard;
    nominal type descriptor for Combine.Published __C.UIColor? _hostSurfaceColor;
    nominal type descriptor for Combine.Published Swift.Bool _usesTrayAppearance;
    nominal type descriptor for Combine.Published nominal type descriptor for CoreGraphics.CGFloat ? _hostContentWidth;
    nominal type descriptor for Combine.CurrentValueSubject nominal type descriptor for CoreGraphics.CGFloat ? nominal type descriptor for Swift.Never hostComposerMaxHeight;
    nominal type descriptor for Combine.Published Swift.Bool _hostsGlassComposer;
    nominal type descriptor for Combine.Published nominal type descriptor for CoreGraphics.CGFloat _glassComposerContentOverlap;
    nominal type descriptor for Combine.Published Swift.Bool _isAwaitingHostLayout;
    nominal type descriptor for SwiftUI.Animation ? trayAppearanceAnimation;
    Grok.GrokFeatureAccess grokAccess;
    Swift.Bool usesRedesignedInputBar;
    nominal type descriptor for Combine.Published [Swift.String] _skillTokenNames;
    nominal type descriptor for Combine.AnyCancellable ? skillTokenNamesCancellable;
    Swift.Bool hasRequestedSkillsRefresh;
    Swift.Bool usesConnectors;
    Grok.GrokUserManager grokUserManager;
    Grok.GrokRealtimeVoiceSession ? $__lazy_storage_$_grokVoiceManager;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isVoiceModeActive;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isDictating;
    nominal type descriptor for Combine.PassthroughSubject Grok.GrokReportIssueRequest nominal type descriptor for Swift.Never showReportIssue;
    Swift.String? convoID;
    Grok.GrokShareContinuation ? shareContinuation;
    Grok.GrokActiveConvoViewModel.GrokActiveConvoEnvironment.SearchOverviewAttachment ? searchOverviewAttachment;
    Grok.GrokGatewayAiOverviewService.CreatedConversation Grok.GrokSearchOverviewContinuation  first-element-marker Grok.GrokAuthenticable nominal type descriptor for Swift.Int64 _$syyYbcyAAYbScMYcctYaYbKc searchOverviewConversationCreate;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never sharedWorkspaceUnavailable;
    Grok.GrokMediaDownloader ? mediaDownloader;
    Swift.Set<Swift.String> loggedUpsellImpressionChatItemIds;
    Grok.GrokConvoStartingValue initialStartingValue;
    Grok.GrokScribeRoute ? settledScribeRoute;
    Swift.Bool isKeyboardShown;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable keyboardCancellables;
    Swift.AnyObject? sharedMarkdownEnvironmentFactoryStorage;
    Swift.AnyObject? sharedMarkdownRenderStoreStorage;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? voiceRouteResolutionTask;
    Grok.GrokAccountLinkEntryRouteRecord ? $__lazy_storage_$_accountLinkEntryRouteRecord;
    Swift.Bool isMissingGatewayConversationForUnlinkedAccount;
}

@end

#endif /* _TtCC4Grok24GrokActiveConvoViewModel26GrokActiveConvoEnvironment_h */
