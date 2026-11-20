//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift20XTabbedAppNavigation_h
#define _TtC14T1TwitterSwift20XTabbedAppNavigation_h
@import Foundation;

#include "T1AppNavigation-Protocol.h"
#include "T1ComposePresenterDelegate-Protocol.h"
#include "T1LiveEventLegacyFloatingMiniPlayerController.h"
#include "T1PanelNavigationController-Protocol.h"
#include "T1ProfileVerificationPolicyViewControllerDelegate-Protocol.h"
#include "T1WebViewRequestsDelegate-Protocol.h"
#include "TFNComposerPresenting-Protocol.h"
#include "TTDTweetDraftListViewControllerDelegate-Protocol.h"
#include "_TtP14DMPasscodeFlow20PasscodeFlowListener_-Protocol.h"
#include "_TtP23TwitterProfileModulesUI59ProfessionalSettingsViewControllerCategorySelectionDelegate_-Protocol.h"

@class NSArray, NSObject, T1TwitterSwift.SubscriptionTiersFetcherItem ?, T1TwitterSwift.T1CommunitiesNavigation ?, T1TwitterSwift.XTabbedAppNavigationViewController ?, TFNTwitterAccount, UIViewController, _$s11XNavigation16TabBarControllerCMn, _$s2os6LoggerVMn, _$sSa -> T1TwitterSwift.XTabbedAppNavigationTab, _$sSd, _$sShySSG, _$sSo16UIViewControllerCSgXw, _$sSo17TFNTwitterAccountC, _$sSo18T1ComposePresenterCSg, _$sSo24T1OnboardingFlowLauncherC, _$sSo26T1BlockMuteActionPerformerCSg, _$sSo33T1SettingsOnboardingFlowPresenterCSg, _$sSo45TCRConversationControlTypeSelectionControllerCSg;

@interface T1TwitterSwift.XTabbedAppNavigation : NSObject <TTDTweetDraftListViewControllerDelegate, TwitterProfileModulesUI.ProfessionalSettingsViewControllerCategorySelectionDelegate, T1WebViewRequestsDelegate, T1ProfileVerificationPolicyViewControllerDelegate, DMPasscodeFlow.PasscodeFlowListener, T1ComposePresenterDelegate, TFNComposerPresenting, T1AppNavigation> { // (Swift)
    /* instance variables */
    nominal type descriptor for XNavigation.TabBarController tabBarController;
    Swift.Array -> T1TwitterSwift.XTabbedAppNavigationTab tabs;
    T1TwitterSwift.XTabbedAppNavigationViewController ? provider;
    __C.T1ComposePresenter? composePresenter;
    T1TwitterSwift.SubscriptionTiersFetcherItem ? subscriptionFetcherItem;
    __C.T1SettingsOnboardingFlowPresenter? $__lazy_storage_$_settingsOnboardingFlowPresenter;
    __C.T1OnboardingFlowLauncher onboardingFlowLauncher;
    __C.T1BlockMuteActionPerformer? $__lazy_storage_$_blockMuteActionPerformer;
    __C.TCRConversationControlTypeSelectionController? conversationControlTypeSelectionController;
    T1TwitterSwift.T1CommunitiesNavigation ? $__lazy_storage_$_communitiesNavigation;
    weak __C.UIViewController? presentedGIFPicker;
    Swift.Set<Swift.String> reportedMessages;
    nominal type descriptor for os.Logger logger;
    Swift.Double lastResignActiveTimestamp;
}

@property (nonatomic, readonly) NSArray *visiblePanelIDs;
@property (nonatomic, readonly) long long currentPanelID;
@property (nonatomic, readonly) UIViewController<T1PanelNavigationController> *currentPanelNavigationController;
@property (nonatomic, readonly) T1LiveEventLegacyFloatingMiniPlayerController *dockingController;
@property (nonatomic, readonly) TFNTwitterAccount *account;

/* instance methods */
- (void)showRadarWithAccount:(id)account radarURLParams:(id)urlparams source:(long long)source completion:(id /* block */)completion;
- (void)showArticleWithStringURL:(id)url status:(id)status username:(id)username statusID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showArticleWithStringURL:(id)url status:(id)status username:(id)username statusID:(id)id dismissModal:(_Bool)modal source:(long long)source completion:(id /* block */)completion;
- (void)showJetfuelPageWithPath:(id)path account:(id)account source:(long long)source completion:(id /* block */)completion;
- (void)showJetfuelDockWithPath:(id)path account:(id)account source:(long long)source completion:(id /* block */)completion;
- (void)startFaceLivenessWithAccount:(id)account source:(long long)source;
- (void)startFaceIDLivenessWithAccount:(id)account source:(long long)source;
- (void)startPalmLivenessWithAccount:(id)account source:(long long)source token:(id)token;
- (void)showImmersiveTimelineWithNavigationContext:(id)context source:(long long)source displayLocation:(id)location initialStatusID:(id)id startingAtTimestamp:(id)timestamp initialMediaIndex:(long long)index completion:(id /* block */)completion;
- (void)showElectionsHubWithElectionID:(id)id raceID:(id)id source:(long long)source entrySource:(id)source completion:(id /* block */)completion;
- (void)showNflTop100WithSource:(long long)source year:(id)year completion:(id /* block */)completion;
- (void)showSportsGameWithLeague:(id)league source:(long long)source gameID:(id)id page:(id)page entrySource:(id)source completion:(id /* block */)completion;
- (void)showSportsHubWithLeague:(id)league source:(long long)source entrySource:(id)source segment:(id)segment hubAction:(id)action completion:(id /* block */)completion;
- (void)showVoiceViewControllerWithSource:(long long)source completion:(id /* block */)completion;
- (void)showVoiceTabSearchContainerViewControllerForSearchParameters:(id)parameters source:(long long)source completion:(id /* block */)completion;
- (void)showActivityHistoryWithSource:(long long)source initialTab:(long long)tab completion:(id /* block */)completion;
- (void)showBookmarksWithSource:(long long)source withCompletion:(id /* block */)completion;
- (void)showOfflineVideosWithSource:(long long)source;
- (void)showPeopleAddressBookWithSource:(long long)source completion:(id /* block */)completion;
- (void)showPeopleScreenWithSource:(long long)source fromPanel:(long long)panel pivotParameters:(id)parameters completion:(id /* block */)completion;
- (void)showPeopleScreenWithSource:(long long)source pivotParameters:(id)parameters completion:(id /* block */)completion;
- (void)showWhoToFollowSuggestedUsersViewControllerWithSource:(long long)source userID:(long long)id completion:(id /* block */)completion;
- (void)showTrendsWithSource:(long long)source scribeContext:(id)context completion:(id /* block */)completion;
- (void)showListWithID:(long long)id onPage:(unsigned long long)page source:(long long)source acceptCachedRepresentation:(_Bool)representation completion:(id /* block */)completion;
- (void)showListCreationFlowFromSource:(long long)source completion:(id /* block */)completion;
- (void)showListDiscoveryPageFromSource:(long long)source completion:(id /* block */)completion;
- (void)showListManagementPageFromSource:(long long)source completion:(id /* block */)completion;
- (void)showListMembershipsForUsername:(id)username orUserID:(long long)id fromPanel:(long long)panel source:(long long)source completion:(id /* block */)completion;
- (void)showLocationPermissionWithSource:(long long)source completion:(id /* block */)completion;
- (void)showNotificationsPermissionWithSource:(long long)source completion:(id /* block */)completion;
- (void)showNotificationsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showNewTweetsNotificationTimelineWithSource:(long long)source timelineType:(long long)type completion:(id /* block */)completion;
- (void)showNotificationDetailTimelineWithSource:(long long)source notificationID:(id)id title:(id)title subtitle:(id)subtitle completion:(id /* block */)completion;
- (void)showTwitterAnniversaryAnnouncement:(id)announcement message:(id)message action:(id)action imageURL:(id)url imageDimensions:(struct CGSize { double x0; double x1; })dimensions tweetText:(id)text cursor:(struct _NSRange { unsigned long long x0; unsigned long long x1; })cursor source:(long long)source completion:(id /* block */)completion;
- (void)showSearchResultsWithOptions:(id)options fromPanel:(long long)panel source:(long long)source completion:(id /* block */)completion;
- (void)showSearchResultsWithOptions:(id)options source:(long long)source completion:(id /* block */)completion;
- (void)showLiveEventTimelineWithEventID:(id)id timelineID:(id)id sourceID:(id)id source:(long long)source fromPanel:(long long)panel completion:(id /* block */)completion;
- (void)showLiveEventTimelineWithMomentID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showMomentCapsuleWithMomentID:(id)id source:(long long)source navigationContext:(id)context completion:(id /* block */)completion;
- (void)showBroadcastWithBroadcastIDOrShareToken:(id)token source:(long long)source scribeContext:(id)context completion:(id /* block */)completion;
- (void)showMomentsGuideWithSource:(long long)source tabID:(id)id completion:(id /* block */)completion;
- (void)showGenericURTWithTimelineID:(id)id title:(id)title subtitle:(id)subtitle cacheID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showAiTrendDetailsWithID:(long long)id mode:(id)mode account:(id)account source:(long long)source completion:(id /* block */)completion;
- (_Bool)handleAutomaticHomeNavigationIfNecessaryWithActiveTimeStamp:(double)stamp inactiveTimeStamp:(double)stamp isWarmLaunch:(_Bool)launch account:(id)account;
- (void)showTimelineWithVariant:(long long)variant account:(id)account shouldRefresh:(_Bool)refresh completion:(id /* block */)completion;
- (void)showTimelineWithPushToHomeTweetID:(long long)id variant:(long long)variant account:(id)account completion:(id /* block */)completion;
- (void)showCustomTimelineWithTag:(id)tag pinImmediately:(_Bool)immediately account:(id)account completion:(id /* block */)completion;
- (void)selectNextInsertedPinnedTimeline;
- (void)showHomeTimelineFiltersSheetWithAccount:(id)account completion:(id /* block */)completion;
- (void)showContributeToBirdwatchWithStatusViewModel:(id)model source:(long long)source;
- (void)showContributeToBirdwatchWithTweetId:(long long)id source:(long long)source;
- (void)showBirdwatchNotesForTweetId:(long long)id source:(long long)source;
- (void)showBirdwatchNoteForNoteId:(long long)id source:(long long)source;
- (void)shouldBirdwatchSuggestionForSuggestionId:(long long)id source:(long long)source;
- (void)showBirdwatchProfileForAlias:(id)alias source:(long long)source;
- (void)showBirdwatchNoteRequest:(id)request source:(long long)source;
- (void)showBirdwatchTimelineForTabId:(id)id source:(long long)source;
- (void)tweetDraftListViewController:(id)controller didSelectCompositions:(id)compositions;
- (void)presentModalDraftsControllerFromViewController:(id)controller;
- (void)showAppStoreSheet:(long long)sheet scribeContext:(id)context completion:(id /* block */)completion;
- (void)showSignupFlowWithSource:(long long)source completion:(id /* block */)completion;
- (void)showLoginFlowWithSource:(long long)source completion:(id /* block */)completion;
- (void)showPasskeyCreationFlow:(long long)flow forceDismissModal:(_Bool)modal flowCompletion:(id /* block */)completion;
- (void)showPasskeyDeletionFlow:(long long)flow clientApplicationId:(id)id flowCompletion:(id /* block */)completion;
- (void)showAccountOwnershipVerificationFlow:(long long)flow forceDismissModal:(_Bool)modal flowCompletion:(id /* block */)completion;
- (void)showOnboardingFlowWithFlowSpec:(id)spec source:(long long)source cancellable:(_Bool)cancellable completion:(id /* block */)completion flowCompletion:(id /* block */)completion;
- (void)showQuickPromoteFlowForAccount:(id)account status:(id)status source:(long long)source scribeContext:(id)context entry:(long long)entry completion:(id /* block */)completion;
- (void)openPromotableTweetsTimeline:(id)timeline scribeContext:(id)context protocolSource:(long long)source completion:(id /* block */)completion;
- (void)launchCategorySelectionFrom:(id)from completion:(id /* block */)completion;
- (void)showSpotlightSettingsForSpotlightType:(id)type source:(long long)source completion:(id /* block */)completion;
- (void)showProfessionalHomeWithSource:(long long)source completion:(id /* block */)completion;
- (void)showProfessionalAccountSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showAgeAssuranceWithAccount:(id)account source:(long long)source urlArguments:(id)arguments withCompletion:(id /* block */)completion;
- (void)showIDVerificationStartWithFlow:(id)flow source:(long long)source withCompletion:(id /* block */)completion;
- (void)showQuickFreeTrialWithAccount:(id)account trialID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showAccountAnalyticsWithAccount:(id)account source:(long long)source completion:(id /* block */)completion;
- (void)showConversationControlTypeSelectionControllerWithInitialControlTypes:(id)types delegate:(id)delegate account:(id)account isMyNetworkAvailable:(_Bool)available geoOptions:(id)options sourceInfo:(id)info completion:(id /* block */)completion;
- (void)muteActionForConversation:(id)conversation isMuting:(_Bool)muting showAmbientNotification:(_Bool)notification scribePage:(id)page scribeSection:(id)section scribeComponent:(id)component scribeParameters:(id)parameters completion:(id /* block */)completion;
- (void)muteActionForUser:(id)user isMuting:(_Bool)muting showConfirmationIfNeeded:(_Bool)needed impressionID:(id)id isPromoted:(_Bool)promoted isEarned:(_Bool)earned scribePage:(id)page scribeSection:(id)section scribeComponent:(id)component scribeParameters:(id)parameters completion:(id /* block */)completion;
- (_Bool)shouldStartLoadWithRequest:(id)request;
- (_Bool)shouldCheckForPassbookContentForError:(id)error;
- (void)showBlockOrReportWithContext:(id)context source:(long long)source;
- (void)showCommunitiesFromSource:(long long)source completion:(id /* block */)completion;
- (void)showCreateCommunitiesFromSource:(long long)source completion:(id /* block */)completion;
- (void)showSuggestedCommunitiesFromSource:(long long)source completion:(id /* block */)completion;
- (void)showCommunityWithID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showCommunityAboutWithID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showCommunityMembersForCommunityID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showCommunityModeratorsForCommunityID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showCommunityMemberRequestsForCommunityID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showCommunityAuthorSearchForCommunityID:(id)id authorName:(id)name source:(long long)source completion:(id /* block */)completion;
- (void)showCommunityReportedTweetsForCommunityID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showCommunityInviteForCommunityID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showCommunitySettingsForCommunityID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showCommunityUpdateNameForCommunityID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showCommunityUpdatePurposeForCommunityID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showCommunityUpdateMembershipForCommunityID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showCommunityToolsForCommunityID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showCommunityManageRulesForCommunityID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showCommunityAddRuleForCommunityID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showFollowersForUsername:(id)username orUserID:(long long)id fromPanel:(long long)panel source:(long long)source completion:(id /* block */)completion;
- (void)showFollowingForUsername:(id)username orUserID:(long long)id fromPanel:(long long)panel source:(long long)source completion:(id /* block */)completion;
- (void)showFollowerRequestsFromPanel:(long long)panel navigationContext:(id)context source:(long long)source completion:(id /* block */)completion;
- (void)showTeamsInvitationFromPanel:(long long)panel navigationContext:(id)context source:(long long)source completion:(id /* block */)completion;
- (void)showAdsCompanionForPath:(id)path source:(long long)source completion:(id /* block */)completion;
- (void)showProfileForCurrentAccountFromSource:(long long)source sourceNavigationMetadata:(id)metadata completion:(id /* block */)completion;
- (void)showProfileForCurrentAccountFromSource:(long long)source sourceNavigationMetadata:(id)metadata options:(unsigned long long)options completion:(id /* block */)completion;
- (void)showProfileForUsername:(id)username orUserID:(long long)id fromPanel:(long long)panel source:(long long)source sourceNavigationMetadata:(id)metadata completion:(id /* block */)completion;
- (void)showProfileForUsername:(id)username orUserID:(long long)id fromPanel:(long long)panel source:(long long)source sourceNavigationMetadata:(id)metadata context:(id)context completion:(id /* block */)completion;
- (void)showProfileForUsername:(id)username orUserID:(long long)id fromPanel:(long long)panel source:(long long)source sourceNavigationMetadata:(id)metadata options:(unsigned long long)options completion:(id /* block */)completion;
- (void)showProfileForUsername:(id)username orUserID:(long long)id fromPanel:(long long)panel navigationContext:(id)context source:(long long)source sourceNavigationMetadata:(id)metadata completion:(id /* block */)completion;
- (void)showProfileForUsername:(id)username orUserID:(long long)id fromPanel:(long long)panel source:(long long)source navigationContext:(id)context sourceNavigationMetadata:(id)metadata options:(unsigned long long)options context:(id)context completion:(id /* block */)completion;
- (void)showEditProfileWithSource:(long long)source sourceNavigationMetadata:(id)metadata completion:(id /* block */)completion;
- (void)showEditProfileBirthdayWithSource:(long long)source sourceNavigationMetadata:(id)metadata completion:(id /* block */)completion;
- (void)showMyFollowersWithTab:(unsigned long long)tab source:(long long)source sourceNavigationMetadata:(id)metadata completion:(id /* block */)completion;
- (void)showPremiumHubWithSource:(long long)source withCompletion:(id /* block */)completion;
- (void)showPremiumHubAfterPurchaseWithSource:(long long)source withCompletion:(id /* block */)completion;
- (void)showPremiumHubProfileCustomizationWithSource:(long long)source withCompletion:(id /* block */)completion;
- (void)showPremiumHubManageSubscriptionWithSource:(long long)source withCompletion:(id /* block */)completion;
- (void)showDisplaySettingsWithSource:(long long)source withCompletion:(id /* block */)completion;
- (void)showPremiumHubAppIconWithSource:(long long)source withCompletion:(id /* block */)completion;
- (void)showPremiumHubIDVerificationWithSource:(long long)source returnSuccessURLString:(id)urlstring withCompletion:(id /* block */)completion;
- (void)showPremiumHubPremiumSettingsWithSource:(long long)source withCompletion:(id /* block */)completion;
- (void)showPremiumHubCustomizeNavigationWithSource:(long long)source withCompletion:(id /* block */)completion;
- (void)showSettingsBioWithSource:(long long)source withCompletion:(id /* block */)completion;
- (void)showPremiumPageWithReferringPage:(id)page tier:(id)tier source:(long long)source withCompletion:(id /* block */)completion;
- (void)showPremiumPageWithReferringPage:(id)page tier:(id)tier plan:(id)plan source:(long long)source withCompletion:(id /* block */)completion;
- (void)showPremiumPageWithReferringPage:(id)page tier:(id)tier plan:(id)plan source:(long long)source paywallThresholdTier:(id)tier withCompletion:(id /* block */)completion;
- (void)showTwitterBlueBillingErrorMenuSheetForAccount:(id)account originatingPlatform:(id)platform;
- (void)showSubscriptionMembershipForAccount:(id)account tier:(id)tier plan:(id)plan paywallThresholdTier:(id)tier referringPage:(id)page source:(long long)source redirectSuccessURL:(id)url completion:(id /* block */)completion;
- (void)showLeaveConversationPrompt;
- (void)showSuperFollowsBlockedAccountMessageForCreatorUsername:(id)username;
- (void)showSuperFollowsBillingErrorMenuSheetForAccount:(id)account originatingPlatform:(id)platform;
- (void)presentSuperFollowsPaywallForCreatorUsername:(id)username orUserID:(long long)id scribeContext:(id)context referringPage:(id)page completion:(id /* block */)completion;
- (void)profileVerificationPolicyViewControllerDidTapClose:(id)close;
- (void)profileVerificationPolicyViewControllerDidTapGotIt:(id)it;
- (void)showVerificationPolicyViewControllerForAccount:(id)account completion:(id /* block */)completion;
- (void)showImagineComposerWithParams:(id)params completion:(id /* block */)completion;
- (void)showGrokFromSource:(long long)source grokURLParams:(id)urlparams completion:(id /* block */)completion;
- (void)showPaymentsHomeWithAccount:(id)account paymentsSource:(id)source urlParams:(id)params urlSource:(long long)source completion:(id /* block */)completion;
- (void)showStampsGalleryWithAccount:(id)account collectionID:(id)id stampID:(id)id source:(long long)source completion:(id /* block */)completion;
- (void)showPostInteractionsViewControllerForStatusID:(long long)id statusUserID:(long long)id account:(id)account animated:(_Bool)animated completion:(id /* block */)completion;
- (void)showTimelineWithInjectedTweet:(id)tweet account:(id)account completion:(id /* block */)completion;
- (void)showConversationViewControllerForViewModel:(id)model statusID:(long long)id fromPanel:(long long)panel source:(long long)source navigationContext:(id)context statusNavigationContext:(id)context sourceNavigationMetadata:(id)metadata completion:(id /* block */)completion;
- (void)showConversationViewControllerForViewModel:(id)model statusID:(long long)id fromPanel:(long long)panel source:(long long)source navigationContext:(id)context statusNavigationContext:(id)context sourceNavigationMetadata:(id)metadata shouldNotifyDisplayLatestEdit:(_Bool)edit completion:(id /* block */)completion;
- (void)showConversationViewControllerForViewModel:(id)model statusID:(long long)id fromPanel:(long long)panel source:(long long)source navigationContext:(id)context statusNavigationContext:(id)context sourceNavigationMetadata:(id)metadata shouldNotifyDisplayLatestEdit:(_Bool)edit shouldStartQuickPromoteOnOpen:(_Bool)open completion:(id /* block */)completion;
- (void)showConversationViewControllerAndConversationControlPickerForViewModel:(id)model statusID:(long long)id fromPanel:(long long)panel source:(long long)source navigationContext:(id)context statusNavigationContext:(id)context sourceNavigationMetadata:(id)metadata scribeContext:(id)context account:(id)account completion:(id /* block */)completion;
- (void)passcodeFlowDidFinishWithViewController:(id)controller;
- (void)showXChatWithConversationID:(id)id account:(id)account source:(long long)source completion:(id /* block */)completion;
- (void)showGrokBotsWithAgentID:(id)id account:(id)account source:(long long)source completion:(id /* block */)completion;
- (void)showXChatRequestToJoinWithConversationID:(id)id token:(id)token account:(id)account source:(long long)source completion:(id /* block */)completion;
- (void)showXChatChangePasscodeFlowWithAccount:(id)account source:(long long)source completion:(id /* block */)completion;
- (void)showMessagesInboxWithSource:(long long)source completion:(id /* block */)completion;
- (void)showMessagesComposeWithText:(id)text source:(long long)source completion:(id /* block */)completion;
- (void)showMessagesWithConversationID:(id)id navigationContext:(id)context source:(long long)source completion:(id /* block */)completion;
- (void)showMessagesComposeWithRecipient:(id)recipient text:(id)text welcomeMessageID:(id)id navigationContext:(id)context source:(long long)source completion:(id /* block */)completion;
- (void)showChangePasswordSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showEmailSettingsWithCompletion:(id /* block */)completion;
- (void)showAutomationOptInWithCompletion:(id /* block */)completion;
- (void)showDeleteSecurityKeySettingsWithMethodID:(long long)id completion:(id /* block */)completion;
- (void)showRenameSecurityKeySettingsWithMethodID:(long long)id completion:(id /* block */)completion;
- (void)showPhoneSettingsWithCompletion:(id /* block */)completion;
- (void)showUsernameSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showYourTwitterDataWithSource:(long long)source completion:(id /* block */)completion;
- (void)showYourTwitterDataDownloadWithSource:(long long)source completion:(id /* block */)completion;
- (void)showYourDevicesWithSource:(long long)source completion:(id /* block */)completion;
- (void)showConnectedAppsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showMonetizationSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showSuperFollowsSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showNotificationSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showNotificationSettingsWithSource:(long long)source identifier:(id)identifier completion:(id /* block */)completion;
- (void)showModalNotificationSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showLoginRequestsForAccount:(id)account source:(long long)source completion:(id /* block */)completion;
- (void)switchToContributorForTeamsAccount:(id)account source:(long long)source completion:(id /* block */)completion;
- (void)showSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showSettingsWithSource:(long long)source hierarchy:(id)hierarchy completion:(id /* block */)completion;
- (void)showAccountSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showLoginVerificationSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showPersonalizationSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showMuteKeywordSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showTrendsSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showDeviceFollowSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showPostInteractionSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showAboutWithSource:(long long)source completion:(id /* block */)completion;
- (void)showLanguageSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showTimelineSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)showSportsSettingsWithSource:(long long)source completion:(id /* block */)completion;
- (void)composePresenterDidBeginSession:(id)session;
- (void)composePresenterDidEndSession:(id)session;
- (void)presentComposerFromViewController:(id)controller;
- (void)recalculateVisiblePanels;
- (void)recalculateVisiblePanelsWithUpdatedPanelIDs:(id)ids;
- (void)setCurrentPanel:(long long)panel animated:(_Bool)animated completion:(id /* block */)completion;
- (void)setCurrentPanel:(long long)panel preserveModals:(_Bool)modals animated:(_Bool)animated completion:(id /* block */)completion;
- (_Bool)showPanel:(long long)panel animated:(_Bool)animated completion:(id /* block */)completion;
- (id)conversationViewControllerForViewModel:(id)model statusID:(long long)id account:(id)account statusNavigationContext:(id)context scribeContext:(id)context sourceNavigationMetadata:(id)metadata overrideNavigationMetadata:(id)metadata shouldNotifyDisplayLatestEdit:(_Bool)edit shouldStartQuickPromoteOnOpen:(_Bool)open excludedStatusIDs:(id)ids content:(id)content;
- (void)showConversationViewControllerForViewModel:(id)model statusID:(long long)id account:(id)account statusNavigationContext:(id)context scribeContext:(id)context sourceNavigationMetadata:(id)metadata fromViewController:(id)controller animated:(_Bool)animated;
- (void)showSearchControllerWithOptions:(id)options fromViewController:(id)controller completion:(id /* block */)completion;
- (void)showComposerWithSessionConfig:(id)config;
- (void)showGIFSearchWithCommunityReference:(id)reference protocolSource:(long long)source sourceInfo:(id)info;
- (void)dealloc;
- (void)recordResignActiveTimestamp;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift20XTabbedAppNavigation_h */
