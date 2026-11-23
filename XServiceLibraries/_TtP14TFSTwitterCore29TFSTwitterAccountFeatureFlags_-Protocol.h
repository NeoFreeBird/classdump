//
#ifndef _TtP14TFSTwitterCore29TFSTwitterAccountFeatureFlags__Protocol_h
#define _TtP14TFSTwitterCore29TFSTwitterAccountFeatureFlags__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterCore.TFSTwitterAccountFeatureFlags <NSObject>

@required

/* required instance methods */
- (_Bool)isVitNotificationFilteringEnabled;
- (_Bool)isVitScopedNotificationsEnabled;
- (_Bool)isVitVerifiedFollowersViewEnabled;
- (long long)followersCountForTitleEnabled;
- (long long)followersCountForTitleMinimum;
- (long long)pollingIntervalForLoginChallenge;
- (double)intervalMultiplierForLoginChallengePolling;
- (_Bool)isStackTraceForPromotedEventErrorsEnabled;
- (_Bool)isPerftownEnabled;
- (id)perftownEventAllowList;
- (_Bool)shouldRunFeatureSwitchesAATest;
- (_Bool)shouldUseChangePasswordEndpoint;
- (id)countrySettingCodesAllowList;
- (long long)pushNotificationRateLimitInterval;
- (long long)pushNotificationRateLimitMaxEventsPerInterval;
- (long long)pushNotificationRateLimitMaxEvents;
- (_Bool)isDMConvoUpdateNameUsingGraphQLEnabled;
- (_Bool)isGraphQLFollowUserMutationEnabled;
- (_Bool)isLivePipelineEventsScribeEnabled;
- (_Bool)shouldDisplayBackstopPrepromptAfterImpressingTheUser;
- (unsigned long long)fetchBackstopPromptSoftLaunchDelayCount;
- (_Bool)isConversationControlChangeTooltipEnabled;
- (_Bool)isConversationControlPersistenceEnabled;
- (_Bool)isConversationControlMySubscribersEnabled;
- (_Bool)isConversationControlMultiSelectEnabled;
- (id)legacyClientEventDenyList;
- (_Bool)isProfessionalProfileEnabled;
- (_Bool)isDockedUploadControlBarEnabled;
- (_Bool)isTweetPromoteButtonEnabled;
- (_Bool)isTweetPromoteButtonAPIEnabled;
- (_Bool)isTweetPromoteButtonInTweetComposerEnabled;
- (_Bool)isTweetPromoteButtonInComposerUnverifiedEnabled;
- (_Bool)isTweetPromoteButtonInOverflowMenuEnabled;
- (_Bool)isTweetPromoteButtonInFocalTopToolbarEnabled;
- (_Bool)isTweetPromoteButtonBoostAgainInAuthorViewEnabled;
- (_Bool)isTweetPromoteButtonInFocalBottomToolbarEnabled;
- (_Bool)isTweetPromoteButtonInTweetAnalyticsEnabled;
- (_Bool)isTweetPromoteButtonInFocalTopAnalyticsEnabled;
- (_Bool)isTweetPromoteButtonLabelUpdateEnabled;
- (_Bool)isSelfServeBoostLabelEnabled;
- (_Bool)isThirdPartyBoostTransparencyLabelEnabled;
- (_Bool)isBoostOptimisticLabelEnabled;
- (_Bool)isBoostAnalyticsSheetEnabled;
- (_Bool)isBoosterStatusLabelEnabled;
- (_Bool)isBoostSocialContextLabelEnabled;
- (_Bool)isBoostLabelUpsellTrayEnabled;
- (_Bool)isTweetPromoteButtonSentTweetToastEnabled;
- (_Bool)isTweetPromoteButtonTimelineEnabled;
- (_Bool)isTweetPromoteButtonNonAuthorCheckDisabled;
- (_Bool)isTweetPromoteButtonRetweetsCheckDisabled;
- (_Bool)isTweetPromoteButtonQuoteTweetsCheckDisabled;
- (_Bool)isTweetPromoteButtonSuperfollowsCheckDisabled;
- (_Bool)isTweetPromoteButtonLimitedActionsCheckDisabled;
- (void)partiallyApplyPendingFeatureSwitches;
- (_Bool)isRepliesAndMentionsNotificationsEnabled;
- (_Bool)isCreatorSubscriptionsEmailShareEnabled;
- (_Bool)isCreatorSubscriptionsConnectTabEnabled;
- (_Bool)isCreatorSubscriptionsPollingAfterPurchaseEnabled;
- (_Bool)isCreatorSubscriptionsPollingGenericEnabled;
- (long long)rankedFollowingMinFollowCount;
- (_Bool)isRankedFollowingEnabledAsDefault;
- (double)flushScribeRecurringTaskInterval;
- (_Bool)isScribeEnterBackgroundSessionLengthResetEnabled;
- (long long)hydrationDurationScribingThresholdMS;
- (_Bool)isPollSwiftMigrationPollingCardEnabled;
- (_Bool)shouldShowMediaPollOptionsInList;
- (_Bool)isMediaPollSensitiveMediaBannerEnabled;
- (_Bool)isMediaPollShufflePollChoicesEnabled;
- (_Bool)isSensitiveTweetWarningsFixedHeightEnabled;
- (_Bool)isStampRallyFeatureEnabled;
- (_Bool)shouldShowStampGalleryInDashMenu;

@optional

@end

#endif /* _TtP14TFSTwitterCore29TFSTwitterAccountFeatureFlags__Protocol_h */
