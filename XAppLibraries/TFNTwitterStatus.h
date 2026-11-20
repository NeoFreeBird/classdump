//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterStatus_h
#define TFNTwitterStatus_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSItemProviderWriting-Protocol.h"
#include "TAFAdFormatsFeaturesPerspective-Protocol.h"
#include "TAPTweetUserPerspective-Protocol.h"
#include "TAPTwitterCompositionTweetPerspective-Protocol.h"
#include "TAVAnalyticsMediaIdentifier.h"
#include "TFCCardData.h"
#include "TFCCardDataSource-Protocol.h"
#include "TFCCardDataSourceObject-Protocol.h"
#include "TFCCardDataSourceProvider-Protocol.h"
#include "TFNSocialContextTweetPerspective-Protocol.h"
#include "TFNTwitterCanonicalStatus.h"
#include "TFNTwitterCanonicalTimelineStatus-Protocol.h"
#include "TFNTwitterCardDataSourceTweetPerspective-Protocol.h"
#include "TFNTwitterConversationMuteTweetPerspective-Protocol.h"
#include "TFNTwitterDisplayTextModel.h"
#include "TFNTwitterFeedbackInfo.h"
#include "TFNTwitterFeedbackInfoSource-Protocol.h"
#include "TFNTwitterFeedbackModule.h"
#include "TFNTwitterMutableDismissibleItem-Protocol.h"
#include "TFNTwitterStatusBanner-Protocol.h"
#include "TFNTwitterStatusConversationContext.h"
#include "TFNTwitterStatusConversationContextTweetPerspective-Protocol.h"
#include "TFNTwitterStatusConversationDetails.h"
#include "TFNTwitterStatusConversationTreeContext-Protocol.h"
#include "TFNTwitterStatusDisplayTextModel-Protocol.h"
#include "TFNTwitterStatusSocialContext-Protocol.h"
#include "TFNTwitterSuggestsInfo.h"
#include "TFSDateComparable-Protocol.h"
#include "TFSTwitterPromotedLoggable-Protocol.h"
#include "TTAEditTweetPerspective-Protocol.h"
#include "TTALegacyNavigationMetadataPerspective-Protocol.h"
#include "TTALegacyPromotedLoggablePerspective-Protocol.h"
#include "TTALegacyPromotedStatusLoggable-Protocol.h"
#include "TTALegacyStatusNotificationIdentifiable-Protocol.h"
#include "TTALegacyStatusScribablePerspective-Protocol.h"
#include "TTALegacyWebViewPerspective-Protocol.h"
#include "TUCTweetPerspective-Protocol.h"
#include "TUCUnifiedCard.h"
#include "TVPPlayerSessionSourceTweetPerspective-Protocol.h"
#include "_TtP10TwitterURT19URTTweetPerspective_-Protocol.h"
#include "_TtP14TFSTwitterCore20TFSTwitterStatusGrok_-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"
#include "_TtP14TFSTwitterCore24TFSTwitterStatusIdentity_-Protocol.h"
#include "_TtP14TFSTwitterCore25TFSTwitterStatusCommunity_-Protocol.h"
#include "_TtP14TFSTwitterCore25TFSTwitterStatusMediaInfo_-Protocol.h"
#include "_TtP14TFSTwitterCore25TFSTwitterStatusScribable_-Protocol.h"
#include "_TtP14TFSTwitterCore26TFSTwitterStatusEngagement_-Protocol.h"
#include "_TtP14TFSTwitterCore27TFSTwitterStatusEditHistory_-Protocol.h"
#include "_TtP14TFSTwitterCore27TFSTwitterStatusPerspective_-Protocol.h"
#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSObject, NSSet, NSString, TFNInlineCalloutConfiguration, TFNInlineFeedbackConfiguration, TFNInlineTooltipInfo, TFNTwitterTweetContext, TFSJetfuelAttachment, TFSReplySortingState, TFSTweetCommunityRelationship, TFSTwitterAppealable, TFSTwitterArticle, TFSTwitterBirdwatchPivot, TFSTwitterCommunityMembership, TFSTwitterCommunityReference, TFSTwitterContentDisclosures, TFSTwitterConversationAnnotation, TFSTwitterConversationControl, TFSTwitterDynamicVideoAd, TFSTwitterEntityMedia, TFSTwitterEntitySet, TFSTwitterEntityURL, TFSTwitterForwardPivot, TFSTwitterGeotag, TFSTwitterGrokAnnotation, TFSTwitterGrokTranslation, TFSTwitterImageInterstitial, TFSTwitterLiveEventPostContext, TFSTwitterMediaInfo, TFSTwitterNoteTweet, TFSTwitterPostCtaViewModel, TFSTwitterScribeTweetDetailsItem, TFSTwitterScribeTweetEditInformation, TFSTwitterSportsPostContext, TFSTwitterSspMetadata, TFSTwitterStatusQuickPromoteEligibility, TFSTwitterSuperFollowInfo, TFSTwitterUnifiedCard, TFSTwitterUserCommunityRelationshipRole, TFSTwitterUserReference, TFSTwitterVideoMonetizationSettings, TFSTwitterViewCountInfo, TFSTwitterVoiceInfo, TFSURTRichText, UIDragItem, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;
@protocol TAPTweetPerspective, TFNTwitterConversationStructure;

@interface TFNTwitterStatus : NSObject <TwitterURT.URTTweetPerspective, TTAEditTweetPerspective, TFSTwitterCore.TFSTwitterStatusGrok, TFSTwitterCore.TFSTwitterStatusCommunity, TFSTwitterCore.TFSTwitterStatusMediaInfo, TFSTwitterCore.TFSTwitterStatusEditHistory, TFSTwitterCore.TFSTwitterStatusScribable, TFSTwitterCore.TFSTwitterStatusPerspective, TFSTwitterCore.TFSTwitterStatusEngagement, TFSTwitterCore.TFSTwitterStatusIdentity, TAFAdFormatsFeaturesPerspective, TAPTweet.TAPTweetPerspective, TAPTwitterCompositionTweetPerspective, TFNTwitterCardDataSourceTweetPerspective, TFNSocialContextTweetPerspective, TFNTwitterConversationMuteTweetPerspective, TVPPlayerSessionSourceTweetPerspective, TFNTwitterStatusConversationContextTweetPerspective, TTALegacyNavigationMetadataPerspective, TTALegacyStatusScribablePerspective, TTALegacyWebViewPerspective, TTALegacyPromotedLoggablePerspective, TUCTweetPerspective, TFNTwitterCanonicalTimelineStatus, TFSTwitterCore.TFSTwitterScribableItem, TFSDateComparable, TFNTwitterMutableDismissibleItem, TFNTwitterStatusDisplayTextModel, TFCCardDataSourceObject, TFCCardDataSourceProvider, TFCCardDataSource, TFNTwitterFeedbackInfoSource, NSCoding, NSItemProviderWriting, TTALegacyPromotedStatusLoggable, TTALegacyStatusNotificationIdentifiable> {
    /* instance variables */
    TFNTwitterDisplayTextModel *_displayTextModel;
    TFNTwitterDisplayTextModel *_fullNoteTweetDisplayTextModel;
    TFNTwitterDisplayTextModel *_withheldDisplayTextModel;
    TFSTwitterPostCtaViewModel *_postCtaViewModelOverride;
}

@property (readonly, nonatomic) id <TAPTweetPerspective> perspective;
@property (readonly, nonatomic) long long statusID;
@property (readonly, nonatomic) NSNumber *statusIDNumber;
@property (readonly, copy, nonatomic) NSString *statusIDString;
@property (readonly, copy, nonatomic) NSString *originalText;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDate *comparableDate;
@property (readonly, nonatomic) long long fromUserID;
@property (readonly, copy, nonatomic) NSString *fromUserFullName;
@property (readonly, copy, nonatomic) NSString *fromUserName;
@property (readonly, nonatomic) long long inReplyToStatusID;
@property (readonly, nonatomic) long long inReplyToUserID;
@property (readonly, copy, nonatomic) NSString *inReplyToUsername;
@property (readonly, nonatomic) long long conversationID;
@property (readonly, nonatomic) long long selfThreadID;
@property (readonly, nonatomic) long long retweetID;
@property (readonly, nonatomic) long long quoteID;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *unifiedID;
@property (readonly, nonatomic) long long draftTweetID;
@property (readonly, nonatomic) _Bool isWithheld;
@property (readonly, nonatomic) _Bool isSelfThreadStatus;
@property (readonly, nonatomic) double score;
@property (readonly, copy, nonatomic) NSArray *unmentionedIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long favoriteCount;
@property (readonly, nonatomic) long long bookmarkCount;
@property (readonly, nonatomic) long long retweetCount;
@property (readonly, nonatomic) long long quoteCount;
@property (readonly, nonatomic) long long replyCount;
@property (readonly, nonatomic) _Bool favoritedByLoadingAccount;
@property (readonly, nonatomic) _Bool bookmarkedByLoadingAccount;
@property (readonly, nonatomic) _Bool seenAsRetweeted;
@property (readonly, nonatomic) _Bool seenAsFavorited;
@property (readonly, nonatomic) _Bool seenAsDownvoted;
@property (readonly, nonatomic) _Bool seenAsBookmarked;
@property (readonly, nonatomic) TFSTwitterViewCountInfo *viewCountInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id <TAPTweetPerspective> perspective;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *scribeParameters;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (readonly, copy, nonatomic) NSDictionary *scribeItemForQuotedTweet;
@property (readonly, copy, nonatomic) NSDictionary *scribeGuideDetails;
@property (readonly, copy, nonatomic) NSDictionary *extraScribeItem;
@property (readonly, copy, nonatomic) NSString *scribeElementAccountingForQuoteTweet;
@property (readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property (readonly, copy, nonatomic) NSString *scribeItemFirstImpressionID;
@property (readonly, copy, nonatomic) NSString *scribeItemContentID;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;
@property (readonly, nonatomic) TFSTwitterScribeTweetDetailsItem *tweetDetailsScribeItem;
@property (readonly, copy, nonatomic) NSString *scribeReferringEvent;
@property (readonly, nonatomic) NSNumber *scribePercentScreenHeight;
@property (readonly, copy, nonatomic) NSString *mediaScribeContentID;
@property (readonly, nonatomic) NSNumber *mediaScribePublisherID;
@property (readonly, nonatomic) NSNumber *mediaScribeType;
@property (readonly, nonatomic) unsigned long long isDuplicateContentIDInstance;
@property (readonly, nonatomic) unsigned long long isCurrentlyFirstImpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _Bool hasEditHistory;
@property (readonly, nonatomic) _Bool isInEditableTimeWindow;
@property (readonly, nonatomic) _Bool isLatestEdit;
@property (readonly, nonatomic) _Bool isEditEligible;
@property (readonly, nonatomic) long long editsRemaining;
@property (readonly, nonatomic) _Bool isStaleTweet;
@property (readonly, nonatomic) _Bool isEditable;
@property (readonly, nonatomic) long long latestTweetID;
@property (readonly, copy, nonatomic) NSArray *editedTweetIDs;
@property (readonly, nonatomic) double editWindowTimeInterval;
@property (readonly, copy, nonatomic) NSDate *editableUntilDate;
@property (readonly, nonatomic) TFSTwitterScribeTweetEditInformation *scribeEditInformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _Bool isGIF;
@property (readonly, nonatomic) _Bool isPhoto;
@property (readonly, nonatomic) _Bool isPlayable;
@property (readonly, nonatomic) _Bool isMediaEntityVideo;
@property (readonly, nonatomic) _Bool isAmplifyCardVideo;
@property (readonly, nonatomic) _Bool isVideoCardTypeAmplify;
@property (readonly, nonatomic) _Bool isAdsVideoCard;
@property (readonly, nonatomic) _Bool isAudioArticle;
@property (readonly, nonatomic) _Bool isPeriscope;
@property (readonly, nonatomic) _Bool isPoll;
@property (readonly, nonatomic) _Bool isSurvey;
@property (readonly, nonatomic) _Bool isMomentCard;
@property (readonly, nonatomic) _Bool isLiveEvent;
@property (readonly, nonatomic) _Bool isBroadcast;
@property (readonly, nonatomic) _Bool isScheduledBroadcast;
@property (readonly, nonatomic) _Bool isYouTubeCard;
@property (readonly, nonatomic) _Bool isVideoReaction;
@property (readonly, nonatomic) long long reactedToPostID;
@property (readonly, nonatomic) long long reactedToUserID;
@property (readonly, nonatomic) _Bool primaryMediaRequiresAttribution;
@property (readonly, copy, nonatomic) NSString *primaryMediaVideoURL;
@property (readonly, copy, nonatomic) NSString *mediaPlaylistUrl;
@property (readonly, copy, nonatomic) NSArray *inlineMediaInfos;
@property (readonly, nonatomic) TFSTwitterMediaInfo *primaryMediaInfo;
@property (readonly, copy, nonatomic) NSArray *representedMediaEntities;
@property (readonly, nonatomic) TFSTwitterUserReference *primaryMediaOwnerReference;
@property (readonly, nonatomic) NSNumber *primaryMediaOwnerID;
@property (readonly, nonatomic) TFSTwitterVoiceInfo *voiceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *communityID;
@property (readonly, nonatomic) TFSTwitterCommunityReference *communityReference;
@property (readonly, nonatomic) TFSTwitterCommunityMembership *communityMembership;
@property (retain, nonatomic) TFSTweetCommunityRelationship *communityRelationship;
@property (readonly, nonatomic) TFSTwitterUserCommunityRelationshipRole *authorCommunityRelationship;
@property (nonatomic) _Bool hasModeratedReplies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *grokAnalysisFollowups;
@property (readonly, nonatomic) _Bool grokAnalysisButton;
@property (readonly, nonatomic) TFSTwitterGrokTranslation *grokTranslatedPost;
@property (readonly, nonatomic) TFSTwitterGrokAnnotation *grokAnnotations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _Bool isAnyEditFavorited;
@property (readonly, nonatomic) _Bool isAnyEditRetweeted;
@property (readonly, nonatomic) id <TAPTweet.TAPTweetPerspective> perspective;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long authenticatedUserID;
@property (nonatomic) struct { unsigned int x0:1; unsigned int x1:1; unsigned int x2:2; unsigned int x3:2; } flags;
@property (readonly, nonatomic) NSString *dynamicAdsScribeValue;
@property (nonatomic) _Bool derivedSocialContextInitialized;
@property (retain, nonatomic) TFCCardData *contextualCardData;
@property (readonly, nonatomic) NSSet *unmentionedUserIDSet;
@property (readonly, nonatomic) TFNTwitterCanonicalStatus *canonicalStatus;
@property (readonly, nonatomic) long long statusID;
@property (readonly, nonatomic) NSString *originalText;
@property (retain, nonatomic) id <TAPTweetUserPerspective> fromUser;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long inReplyToStatusID;
@property (readonly, nonatomic) long long inReplyToUserID;
@property (readonly, nonatomic) NSString *inReplyToUsername;
@property (retain, nonatomic) TFSReplySortingState *replySortingState;
@property (readonly, nonatomic) TFSTwitterGeotag *geotag;
@property (readonly, nonatomic) TFSTwitterEntitySet *entities;
@property (readonly, nonatomic) NSArray *unmentionedIDs;
@property (readonly, nonatomic) NSString *cardDataURL;
@property (readonly, nonatomic) TFCCardData *cardData;
@property (readonly, nonatomic) TFSTwitterUnifiedCard *twitterUnifiedCard;
@property (readonly, nonatomic) TUCUnifiedCard *unifiedCard;
@property (nonatomic) _Bool isPostInstallPromptVisible;
@property (readonly, nonatomic) _Bool conversationMuted;
@property (readonly, nonatomic) _Bool isPossiblySensitive;
@property (readonly, nonatomic) _Bool renderAsAttachmentTombstone;
@property (readonly, nonatomic) long long retweetID;
@property (nonatomic) long long quoteID;
@property (retain, nonatomic) TFNTwitterStatus *quotedStatus;
@property (readonly, nonatomic) TFSTwitterEntityURL *quotedStatusPermalinkEntity;
@property (readonly, nonatomic) long long quoteCount;
@property (readonly, nonatomic) long long retweetCount;
@property (readonly, nonatomic) long long favoriteCount;
@property (readonly, nonatomic) long long bookmarkCount;
@property (readonly, nonatomic) long long replyCount;
@property (readonly, nonatomic) TFSTwitterViewCountInfo *viewCountInfo;
@property (readonly, nonatomic) TFSTwitterArticle *article;
@property (readonly, nonatomic) TFSTwitterNoteTweet *noteTweet;
@property (readonly, nonatomic) NSArray *withheldInCountries;
@property (readonly, nonatomic) NSString *withheldScope;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) _Bool favoritedByLoadingAccount;
@property (readonly, nonatomic) _Bool bookmarkedByLoadingAccount;
@property (readonly, nonatomic) long long conversationID;
@property (readonly, nonatomic) long long selfThreadID;
@property (readonly, copy, nonatomic) NSString *withheldText;
@property (readonly, nonatomic) TFSTwitterEntitySet *withheldEntities;
@property (retain, nonatomic) NSArray *limitedActions;
@property (readonly, nonatomic) TFSTwitterVoiceInfo *voiceInfo;
@property (readonly, nonatomic) _Bool isTranslatable;
@property (readonly, nonatomic) TFSTwitterStatusQuickPromoteEligibility *quickPromoteEligibility;
@property (readonly, nonatomic) TFSTwitterSuperFollowInfo *superFollowInfo;
@property (readonly, nonatomic) NSString *communityID;
@property (readonly, nonatomic) TFSTwitterCommunityReference *communityReference;
@property (readonly, nonatomic) TFSTwitterCommunityMembership *communityMembership;
@property (retain, nonatomic) TFSTweetCommunityRelationship *communityRelationship;
@property (readonly, nonatomic) TFNTwitterStatusConversationDetails *conversationDetails;
@property (readonly, nonatomic) TFSTwitterUserCommunityRelationshipRole *authorCommunityRelationship;
@property (readonly, nonatomic) _Bool hasBirdwatchNotes;
@property (readonly, nonatomic) TFSTwitterBirdwatchPivot *birdwatchPivot;
@property (readonly, nonatomic) TFSTwitterBirdwatchPivot *birdwatchTombstonePivot;
@property (readonly, nonatomic) NSArray *grokAnalysisFollowups;
@property (readonly, nonatomic) _Bool grokAnalysisButton;
@property (readonly, nonatomic) TFSTwitterGrokTranslation *grokTranslatedPost;
@property (readonly, nonatomic) TFSTwitterGrokAnnotation *grokAnnotations;
@property (readonly, nonatomic) TFSJetfuelAttachment *jetfuelAttachment;
@property (readonly, nonatomic) TFSTwitterSportsPostContext *sportsPostContext;
@property (readonly, nonatomic) TFSTwitterLiveEventPostContext *liveEventPostContext;
@property (readonly, nonatomic) _Bool spaceEntity;
@property (readonly, nonatomic) NSNumber *statusIDNumber;
@property (readonly, nonatomic) NSString *statusIDString;
@property (readonly, nonatomic) _Bool isWithheld;
@property (readonly, nonatomic) _Bool isSelfThreadStatus;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } displayTextRange;
@property (readonly, nonatomic) NSString *composerSource;
@property (readonly, nonatomic) TFSTwitterConversationControl *conversationControl;
@property (readonly, nonatomic) NSString *unifiedID;
@property (retain, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (retain, nonatomic) TFSTwitterDynamicVideoAd *prerollContent;
@property (retain, nonatomic) TFNTwitterStatus *retweetedStatus;
@property (readonly, weak, nonatomic) TFNTwitterStatus *retweetingStatus;
@property (retain, nonatomic) NSDate *fakeDate;
@property (readonly, nonatomic) NSArray *inlineMediaInfos;
@property (readonly, nonatomic) TFSTwitterMediaInfo *primaryMediaInfo;
@property (readonly, nonatomic) NSString *primaryMediaVideoURL;
@property (readonly, nonatomic) unsigned long long primaryMediaType;
@property (readonly, nonatomic) TFSTwitterUserReference *primaryMediaOwnerReference;
@property (readonly, nonatomic) NSNumber *primaryMediaOwnerID;
@property (readonly, nonatomic) long long primaryCardType;
@property (readonly, nonatomic) NSString *mediaScribeContentID;
@property (readonly, nonatomic) NSString *mediaPlaylistUrl;
@property (readonly, nonatomic) NSNumber *mediaScribePublisherID;
@property (readonly, nonatomic) NSNumber *mediaScribeType;
@property (readonly, nonatomic) _Bool primaryMediaRequiresAttribution;
@property (readonly, nonatomic) NSArray *representedMediaEntities;
@property (readonly, nonatomic) _Bool didPrepare;
@property (nonatomic) _Bool hasRecordedImpression;
@property (nonatomic) _Bool hasRecordedDwellImpression;
@property (retain, nonatomic) NSString *entryID;
@property (nonatomic) long long timelineModuleItemIndex;
@property (nonatomic) long long timelineSortIndex;
@property (retain, nonatomic) TFNTwitterTweetContext *tweetContext;
@property (retain, nonatomic) id <TFNTwitterStatusSocialContext> socialContext;
@property (nonatomic) _Bool innerTombstoneDismissed;
@property (retain, nonatomic) TFSURTRichText *innerTombstoneRichText;
@property (retain, nonatomic) TFSURTRichText *innerTombstoneRichRevealText;
@property (nonatomic) _Bool outerTombstoneDismissed;
@property (retain, nonatomic) TFSURTRichText *outerTombstoneRichText;
@property (retain, nonatomic) TFSURTRichText *outerTombstoneRichRevealText;
@property (nonatomic) _Bool hasModeratedReplies;
@property (readonly, nonatomic) TFNTwitterStatusConversationContext *conversationContext;
@property (retain, nonatomic) id <TFNTwitterStatusConversationTreeContext> conversationTreeContext;
@property (retain, nonatomic) id <TFNTwitterStatusBanner> banner;
@property (nonatomic) _Bool isPinned;
@property (nonatomic) _Bool isReplyPinnedByAuthor;
@property (nonatomic) long long replyPinState;
@property (retain, nonatomic) TFNTwitterSuggestsInfo *suggestsInfo;
@property (retain, nonatomic) TFNTwitterFeedbackModule *feedbackModule;
@property (retain, nonatomic) TFNTwitterFeedbackInfo *feedbackInfo;
@property (retain, nonatomic) TFNInlineCalloutConfiguration *inlineCalloutConfiguration;
@property (retain, nonatomic) TFNInlineFeedbackConfiguration *inlineFeedbackConfiguration;
@property (retain, nonatomic) TFNInlineTooltipInfo *inlineTooltipInfo;
@property (copy, nonatomic) NSString *debugString;
@property (retain, nonatomic) TFSTwitterConversationAnnotation *conversationAnnotation;
@property (nonatomic) _Bool isCardHidden;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *displayText;
@property (readonly, nonatomic) NSString *fullText;
@property (readonly, nonatomic) NSArray *usernames;
@property (readonly, nonatomic) NSDate *comparableDate;
@property (readonly, nonatomic) NSString *accessibilityText;
@property (readonly, nonatomic) NSArray *hiddenMentionEntities;
@property (readonly, nonatomic) TFSTwitterEntitySet *entitiesRemovingUnmentioned;
@property (readonly, nonatomic) NSArray *hiddenURLEntities;
@property (readonly, nonatomic) NSArray *richTextTagsForTweetText;
@property (readonly, nonatomic) TFNTwitterStatus *representedStatus;
@property (readonly, nonatomic) TFNTwitterStatus *representeeStatus;
@property (readonly, nonatomic) TFNTwitterStatus *mediaForwardStatus;
@property (readonly, nonatomic) NSArray *mediaForwardStatuses;
@property (readonly, nonatomic) id <TAPTweetUserPerspective> retweetedBy;
@property (readonly, nonatomic) _Bool isRetweet;
@property (readonly, nonatomic) _Bool isReply;
@property (readonly, nonatomic) _Bool isTrending;
@property (retain, nonatomic) TFSTwitterPostCtaViewModel *postCtaViewModel;
@property (readonly, nonatomic) TFSTwitterContentDisclosures *contentDisclosures;
@property (readonly, nonatomic) _Bool hasPaidPromotionDisclosure;
@property (readonly, nonatomic) _Bool hasAIGeneratedDisclosure;
@property (readonly, nonatomic) long long fromUserID;
@property (readonly, nonatomic) NSString *fromUserFullName;
@property (readonly, nonatomic) NSString *fromUserName;
@property (readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity;
@property (readonly, nonatomic) _Bool hasSensitiveMediaWarningsFlaggedByAuthor;
@property (readonly, nonatomic) unsigned long long encodedDisplayTextLength;
@property (readonly, nonatomic) _Bool isPromoted;
@property (readonly, nonatomic) _Bool isPrivateOrNonCompliant;
@property (readonly, nonatomic) _Bool isPoliticalAd;
@property (readonly, nonatomic) _Bool isIssueAd;
@property (readonly, nonatomic) _Bool isRTBCreative;
@property (nonatomic) unsigned long long isDuplicateContentIDInstance;
@property (nonatomic) unsigned long long isCurrentlyFirstImpression;
@property (readonly, nonatomic) _Bool isUserRecommendation;
@property (readonly, nonatomic) _Bool shouldBeRenderedFromRight;
@property (readonly, nonatomic) NSString *twitterStatusesURL;
@property (readonly, nonatomic) NSString *twitterURL;
@property (readonly, nonatomic) NSString *xURL;
@property (readonly, nonatomic) NSString *textWithExpandedURLs;
@property (readonly, nonatomic) NSDictionary *scribeParameters;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (readonly, nonatomic) NSDictionary *scribeItemForQuotedTweet;
@property (retain, nonatomic) NSDictionary *scribeGuideDetails;
@property (readonly, nonatomic) NSDictionary *extraScribeItem;
@property (readonly, nonatomic) NSString *scribeElementAccountingForQuoteTweet;
@property (readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property (readonly, copy, nonatomic) NSString *scribeItemFirstImpressionID;
@property (readonly, copy, nonatomic) NSString *scribeItemContentID;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;
@property (readonly, nonatomic) TFSTwitterScribeTweetDetailsItem *tweetDetailsScribeItem;
@property (retain, nonatomic) NSString *scribeReferringEvent;
@property (retain, nonatomic) NSNumber *scribePercentScreenHeight;
@property (readonly, nonatomic) _Bool isQuoted;
@property (readonly, nonatomic) _Bool isQuoteStatus;
@property (readonly, nonatomic) _Bool isIncompleteQuotedStatus;
@property (readonly, nonatomic) _Bool isVideoReaction;
@property (readonly, nonatomic) long long reactedToPostID;
@property (readonly, nonatomic) long long reactedToUserID;
@property (nonatomic) double score;
@property (nonatomic) long long draftTweetID;
@property (retain, nonatomic) TFSTwitterVideoMonetizationSettings *videoMonetizationSettings;
@property (nonatomic) long long minSpacing;
@property (retain, nonatomic) NSString *conversationSection;
@property (retain, nonatomic) id <TFNTwitterConversationStructure> conversationPayload;
@property (nonatomic) _Bool isConversationAncestor;
@property (nonatomic) _Bool isConversationModuleGap;
@property (nonatomic) _Bool isConversationFocalStatus;
@property (nonatomic) _Bool isConversationPrecededByAncestor;
@property (nonatomic) _Bool isConversationRoot;
@property (nonatomic) long long conversationFocalStatusID;
@property (readonly, nonatomic) _Bool isConversationStatus;
@property (readonly, nonatomic) _Bool isConversationSingleBranchedReplyStatus;
@property (readonly, nonatomic) _Bool isReplyAndShouldShowSocialContext;
@property (readonly, nonatomic) _Bool selfReply;
@property (readonly, nonatomic) _Bool seenAsRetweeted;
@property (readonly, nonatomic) _Bool seenAsFavorited;
@property (readonly, nonatomic) _Bool seenAsDownvoted;
@property (readonly, nonatomic) _Bool seenAsBookmarked;
@property (readonly, nonatomic) _Bool isAmplifyCardVideo;
@property (readonly, nonatomic) _Bool isVideoCardTypeAmplify;
@property (readonly, nonatomic) _Bool isGIF;
@property (readonly, nonatomic) _Bool isMediaEntityVideo;
@property (readonly, nonatomic) _Bool isPhoto;
@property (readonly, nonatomic) _Bool isPlayable;
@property (readonly, nonatomic) _Bool isAdsVideoCard;
@property (readonly, nonatomic) _Bool isAudioArticle;
@property (readonly, nonatomic) _Bool isPeriscope;
@property (readonly, nonatomic) _Bool isPoll;
@property (readonly, nonatomic) _Bool isSurvey;
@property (readonly, nonatomic) _Bool isMomentCard;
@property (readonly, nonatomic) _Bool isLiveEvent;
@property (readonly, nonatomic) _Bool isBroadcast;
@property (readonly, nonatomic) _Bool isScheduledBroadcast;
@property (readonly, nonatomic) _Bool isYouTubeCard;
@property (readonly, nonatomic) _Bool isLeaveConversationEnabled;
@property (readonly, nonatomic) _Bool isViewerUnmentioned;
@property (readonly, nonatomic) _Bool isUserUnmentioned;
@property (readonly, nonatomic) _Bool isInReplyToUserUnmentioned;
@property (readonly, nonatomic) _Bool allowDynamicAd;
@property (readonly, nonatomic) UIDragItem *dragItem;
@property (retain, nonatomic) TFSTwitterForwardPivot *forwardPivot;
@property (retain, nonatomic) TFSTwitterAppealable *appealable;
@property (retain, nonatomic) TFSTwitterImageInterstitial *imageInterstitial;
@property (retain, nonatomic) TFSTwitterImageInterstitial *innerImageInterstitial;
@property (readonly, nonatomic) _Bool hasForwardPivot;
@property (readonly, nonatomic) _Bool hasSoftIntervention;
@property (readonly, nonatomic) _Bool hasAppealableWarning;
@property (readonly, nonatomic) _Bool hasImageInterstitial;
@property (retain, nonatomic) TFSTwitterForwardPivot *innerForwardPivot;
@property (retain, nonatomic) NSArray *engagementNudges;
@property (readonly, nonatomic) _Bool hasEditHistory;
@property (readonly, nonatomic) _Bool isInEditableTimeWindow;
@property (readonly, nonatomic) _Bool isLatestEdit;
@property (readonly, nonatomic) _Bool isEditEligible;
@property (readonly, nonatomic) long long editsRemaining;
@property (readonly, nonatomic) _Bool isStaleTweet;
@property (readonly, nonatomic) _Bool isEditable;
@property (readonly, nonatomic) long long latestTweetID;
@property (readonly, nonatomic) NSArray *editedTweetIDs;
@property (readonly, nonatomic) double editWindowTimeInterval;
@property (readonly, nonatomic) NSDate *editableUntilDate;
@property (readonly, nonatomic) TFSTwitterScribeTweetEditInformation *scribeEditInformation;
@property (retain, nonatomic) TFSTwitterSspMetadata *sspMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id <TAPTweet.TAPTweetPerspective> perspective;
@property (readonly, nonatomic) long long aiGeneratedDetectionSource;
@property (readonly, nonatomic) _Bool canEditAIGeneratedDisclosure;
@property (readonly, nonatomic) _Bool isVoice;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (readonly, nonatomic) NSNumber *playerStatusID;
@property (readonly, nonatomic) id <TFSTwitterPromotedLoggable> logInput;
@property (readonly, copy, nonatomic) TAVAnalyticsMediaIdentifier *contentMediaIdentifier;
@property (readonly, nonatomic) NSString *grokPostID;
@property (readonly, copy, nonatomic) NSString *scribeItemDebugDisplayName;
@property (readonly, nonatomic) NSString *statusItemViewModelDidUpdateNotificationName;
@property (readonly, nonatomic) unsigned long long displayTextOffset;
@property (readonly, nonatomic) _Bool isSelfReply;
@property (readonly, nonatomic) _Bool isConversationMuted;
@property (nonatomic) _Bool dismissing;
@property (readonly, nonatomic) _Bool dismissible;
@property (readonly, nonatomic) unsigned long long dismissibleContentType;
@property (readonly, nonatomic) NSNumber *sourceID;
@property (readonly, nonatomic) long long senderID;
@property (readonly, copy, nonatomic) NSString *senderDisplayUsername;
@property (readonly, copy, nonatomic) NSString *senderDisplayFullName;
@property (readonly, nonatomic) id <TAPTweetPerspective> tweet;
@property (readonly, nonatomic) NSDictionary *cardEvent;
@property (readonly, weak, nonatomic) id <TFCCardDataSourceObject> sourceObject;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

/* class methods */
+ (id)statusForPerspective:(id)perspective;
+ (id)statusForPerspectiveOrNil:(id)nil;
+ (id)quotedStatusNestingCapFeatureSwitch;
+ (void)setQuotedStatusNestingCapBlock:(id /* block */)block;
+ (_Bool)quotedStatusNestingCap;
+ (id)quotedStatusNestingCapDisabledFeatureSwitch;
+ (void)setQuotedStatusNestingCapDisabledBlock:(id /* block */)block;
+ (_Bool)quotedStatusNestingCapDisabled;
+ (_Bool)_tfn_isCanonicalStatusValid:(id)valid;
+ (id)propertyTypesRequiringAnimatedUpdates;
+ (id)writableTypeIdentifiersForItemProvider;
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)identifier;

/* instance methods */
- (id)initWithStatusBundle:(id)bundle;
- (id)initWithCanonicalStatus:(id)status fromUser:(id)user;
- (id)initWithCanonicalStatus:(id)status fromUser:(id)user conversationDetails:(id)details hasValidCanonicalStatus:(_Bool)status;
- (id)initWithCanonicalStatus:(id)status fromUser:(id)user retweetedStatus:(id)status quotedStatus:(id)status conversationDetails:(id)details;
- (void)dealloc;
- (_Bool)isEqual:(id)equal;
- (void)replaceCanonicalStatusForAssimilation:(id)assimilation;
- (void)prepareWithAuthenticatedAccountUserID:(long long)id;
- (long long)reverseCompare:(id)compare;
- (long long)compare:(id)compare;
- (long long)profileImageShape;
- (id)allUsers;
- (void)postStatusNotificationUserInfo:(id)info;
- (id)accessibilityTextForOptions:(unsigned long long)options;
- (id)displayTextForOptions:(unsigned long long)options;
- (id)displayTextRangesForOptions:(unsigned long long)options;
- (id)displayTextURLRangesForOptions:(unsigned long long)options;
- (id)displayTextHashflagsForOptions:(unsigned long long)options;
- (id)displayTextContentMatchedAnimatedHashflagsForOptions:(unsigned long long)options;
- (_Bool)displayTextMayHaveUndetectedHashflagsForOptions:(unsigned long long)options;
- (long long)attributedTextModelHeightForOptions:(id)options;
- (id)attributedTextModelForOptions:(id)options;
- (id)_tfn_displayTextModelForOptions:(unsigned long long)options;
- (id)_tfn_displayTextModel;
- (id)_tfn_fullNoteTweetDisplayTextModel;
- (id)_tfn_withheldDisplayTextModel;
- (id)_tfn_displayTextModelWithheld:(_Bool)withheld showFullNoteTweet:(_Bool)tweet;
- (id)_tfn_displayTextModelConfigurationWithheld:(_Bool)withheld showFullNoteTweet:(_Bool)tweet;
- (id)_tfn_trailingEntityURL;
- (id)_encodedDisplayText;
- (_Bool)_tfn_shouldOmitCardURLForCardData:(id)data;
- (long long)quotedStatusID;
- (id)unmentionedIDsExcludingFromUser;
- (void)applyBirdwatchTombstonePivot:(id)pivot;
- (_Bool)downvotedByLoadingAccount;
- (void)_tfn_addObserverForCanonicalStatus;
- (void)_tfn_addObserverForQuotedStatus;
- (void)_tfn_addObserverForChildStatus:(id)status;
- (void)_tfn_handleChildStatusUpdateNotification:(id)notification;
- (void)_tfn_removeObserverForCanonicalStatus;
- (void)_tfn_removeObserverForQuotedStatus;
- (void)_tfn_removeObserverForChildStatus:(id)status;
- (id)mediaUserWithUserIDIsTaggedIn:(long long)in;
- (id)scribeMediaDetailsForMediaAtIndex:(long long)index;
- (id)_scribeMediaDetailsForMediaEntity:(id)entity;
- (_Bool)isDismissible;
- (id)entityForURL:(id)url;
- (_Bool)isPrerollContent;
- (_Bool)isSpaceEntity;
- (id)scribeItemWithUnifiedCardParams:(_Bool)params;
- (id)baseScribeItem;
- (id)conversationDetailsScribeItem;
- (id)_tfn_editControl;
- (id)_tfn_editControlInitial;
- (id)mutableCopyIncludingContextObjects:(_Bool)objects;
- (id)initWithStatus:(id)status includeContextObjects:(_Bool)objects;
- (id)_tfn_displayTextKeyForKey:(id)key options:(unsigned long long)options;
- (_Bool)isEqualToStatus:(id)status differentProperties:(out id *)properties;
- (id)loadDataWithTypeIdentifier:(id)identifier forItemProviderCompletionHandler:(id /* block */)handler;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)tfs_debugStrings;
- (_Bool)isDismissing;
- (_Bool)isInnerTombstoneDismissed;
- (_Bool)isOuterTombstoneDismissed;

@end

#endif /* TFNTwitterStatus_h */
