//
#ifndef TTACoreStatusViewModel_Protocol_h
#define TTACoreStatusViewModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TAVPlayerFactoryIdentifiable-Protocol.h"
#include "TFCCardDataSource-Protocol.h"
#include "TFCCardDataSourceObject-Protocol.h"
#include "TFCCardDataSourceProvider-Protocol.h"
#include "TFNTwitterConversationStructure-Protocol.h"
#include "TFNTwitterConversationTreeContextProvider-Protocol.h"
#include "TFNTwitterDismissibleItem-Protocol.h"
#include "TFNTwitterStatusConversationTreeContext-Protocol.h"
#include "TFNTwitterStatusDisplayTextModel-Protocol.h"
#include "TFNTwitterSuggestedItem-Protocol.h"
#include "TTACoreShareable-Protocol.h"
#include "TTACoreStatusViewModelCardAdditions-Protocol.h"
#include "TTACoreStatusViewModelDisplayAdditions-Protocol.h"
#include "TTACoreStatusViewModelPromotedContentAdditions-Protocol.h"
#include "TTACoreStatusViewModelURT-Protocol.h"
#include "TTALegacyStatusNotificationIdentifiable-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"
#include "_TtP7TAPUser18TAPUserPerspective_-Protocol.h"
#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, TFCCardData, TFNTwitterFeedbackInfo, TFNTwitterStatusConversationContext, TFNTwitterStatusConversationDetails, TFNTwitterSuggestsInfo, TFNTwitterTweetContext, TFSJetfuelAttachment, TFSPCFLabel, TFSReplySortingState, TFSTwitterArticle, TFSTwitterBirdwatchPivot, TFSTwitterCommunityMembership, TFSTwitterCommunityReference, TFSTwitterConversationAnnotation, TFSTwitterConversationControl, TFSTwitterEntitySet, TFSTwitterGeotag, TFSTwitterGrokAnnotation, TFSTwitterGrokTranslation, TFSTwitterLiveEventPostContext, TFSTwitterMediaInfo, TFSTwitterNoteTweet, TFSTwitterPostCtaViewModel, TFSTwitterScribeTweetDetailsItem, TFSTwitterSportsPostContext, TFSTwitterSspMetadata, TFSTwitterStatusQuickPromoteEligibility, TFSTwitterSuperFollowInfo, TFSTwitterUnifiedCard, TFSTwitterUserCommunityRelationshipRole, TFSTwitterUserDesignatorInfo, TFSTwitterVideoMonetizationSettings, TFSTwitterViewCountInfo, TUCUnifiedCard, UIDragItem;
@protocol TFNTwitterStatusBanner;

@protocol TTACoreStatusViewModel <NSObject, TFSTwitterCore.TFSTwitterScribableItem, TFNTwitterDismissibleItem, TFNTwitterSuggestedItem, TFNTwitterStatusDisplayTextModel, TTACoreStatusViewModelCardAdditions, TTACoreStatusViewModelDisplayAdditions, TTACoreStatusViewModelPromotedContentAdditions, TTALegacyStatusNotificationIdentifiable, TFCCardDataSourceProvider, TFNTwitterConversationTreeContextProvider, TFCCardDataSourceObject, TFCCardDataSource, TTACoreShareable, TTACoreStatusViewModelURT>

@required

@property (nonatomic, readonly) NSString *unifiedID;
@property (nonatomic, readonly) long long statusID;
@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, readonly) id <TAPTweet.TAPTweetPerspective> tweet;
@property (nonatomic, readonly) id <TAPUser.TAPUserPerspective> fromUser;
@property (nonatomic, readonly) NSString *fromUserFullName;
@property (nonatomic, readonly) NSString *fromUserName;
@property (nonatomic, readonly) long long fromUserID;
@property (nonatomic, readonly) id <TAPUser.TAPUserPerspective> representedFromUser;
@property (nonatomic, readonly) NSString *representedFromUserName;
@property (nonatomic, readonly) long long representedFromUserFollowedByCurrentAccountState;
@property (nonatomic, readonly) long long representedFromUserID;
@property (nonatomic, readonly) id <TTACoreStatusViewModel> representedStatus;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *originalText;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *communityID;
@property (nonatomic, readonly) TFSTwitterCommunityReference *communityReference;
@property (nonatomic, readonly) TFSTwitterCommunityMembership *communityMembership;
@property (nonatomic, readonly) TFSTwitterUserCommunityRelationshipRole *authorCommunityRelationship;
@property (nonatomic, readonly) TFNTwitterStatusConversationDetails *conversationDetails;
@property (nonatomic, readonly) TFSTwitterEntitySet *entities;
@property (nonatomic, readonly) TFSTwitterEntitySet *entitiesRemovingUnmentioned;
@property (nonatomic, readonly) NSArray *unmentionedIDs;
@property (nonatomic, readonly) NSArray *hiddenMentionEntities;
@property (nonatomic, readonly) NSArray *hiddenURLEntities;
@property (nonatomic, readonly) long long inReplyToStatusID;
@property (nonatomic, readonly) long long inReplyToUserID;
@property (nonatomic, readonly) NSString *inReplyToUsername;
@property (nonatomic, retain) TFSReplySortingState *replySortingState;
@property (nonatomic, readonly) long long minSpacing;
@property (nonatomic, readonly) TFNTwitterTweetContext *tweetContext;
@property (nonatomic, readonly) _Bool shouldRenderAsAttachmentTombstone;
@property (nonatomic, readonly) _Bool isPinned;
@property (nonatomic, readonly) _Bool isReplyPinnedByAuthor;
@property (nonatomic, readonly) _Bool hasModeratedReplies;
@property (nonatomic, readonly) _Bool hasBirdwatchNotes;
@property (nonatomic, readonly) TFSTwitterBirdwatchPivot *birdwatchPivot;
@property (nonatomic, readonly) TFSTwitterBirdwatchPivot *birdwatchTombstonePivot;
@property (nonatomic, readonly) NSArray *grokAnalysisFollowups;
@property (nonatomic, readonly) _Bool grokAnalysisButton;
@property (nonatomic, readonly) TFSTwitterGrokTranslation *grokTranslatedPost;
@property (nonatomic, readonly) TFSTwitterGrokAnnotation *grokAnnotations;
@property (nonatomic, readonly) TFSJetfuelAttachment *jetfuelAttachment;
@property (nonatomic, readonly) TFSTwitterSportsPostContext *sportsPostContext;
@property (nonatomic, readonly) TFSTwitterLiveEventPostContext *liveEventPostContext;
@property (nonatomic, readonly) TFSTwitterPostCtaViewModel *postCtaViewModel;
@property (nonatomic, readonly) _Bool displayAsWithheld;
@property (nonatomic, readonly) _Bool isPrerollContent;
@property (nonatomic, readonly) TFSTwitterSspMetadata *sspMetadata;
@property (nonatomic, readonly) NSString *withheldScope;
@property (nonatomic, readonly) long long displayFavoriteCount;
@property (nonatomic, readonly) long long displayBookmarkCount;
@property (nonatomic, readonly) long long displayRetweetCount;
@property (nonatomic, readonly) long long displayReplyCount;
@property (nonatomic, readonly) long long displayQuoteCount;
@property (nonatomic, readonly) TFSTwitterViewCountInfo *viewCountInfo;
@property (nonatomic, readonly) TFSTwitterArticle *article;
@property (nonatomic, readonly) TFSTwitterNoteTweet *noteTweet;
@property (nonatomic, readonly) long long lastDisplayFavoriteCount;
@property (nonatomic, readonly) long long lastDisplayBookmarkCount;
@property (nonatomic, readonly) long long lastDisplayRetweetCount;
@property (nonatomic, readonly) long long lastDisplayReplyCount;
@property (nonatomic, readonly) long long lastDisplayQuoteCount;
@property (nonatomic, readonly) long long aggregatedDisplayFavoriteCount;
@property (nonatomic, readonly) long long aggregatedDisplayBookmarkCount;
@property (nonatomic, readonly) long long aggregatedDisplayRetweetCount;
@property (nonatomic, readonly) long long aggregatedDisplayReplyCount;
@property (nonatomic, readonly) long long aggregatedDisplayQuoteCount;
@property (nonatomic, readonly) long long lastAggregatedDisplayFavoriteCount;
@property (nonatomic, readonly) long long lastAggregatedDisplayBookmarkCount;
@property (nonatomic, readonly) long long lastAggregatedDisplayRetweetCount;
@property (nonatomic, readonly) long long lastAggregatedDisplayReplyCount;
@property (nonatomic, readonly) long long lastAggregatedDisplayQuoteCount;
@property (nonatomic, readonly) NSArray *limitedActions;
@property (nonatomic, readonly) _Bool isRetweet;
@property (nonatomic, readonly) long long retweetID;
@property (nonatomic, readonly) id <TTACoreStatusViewModel> retweetingStatus;
@property (nonatomic, readonly) id <TTACoreStatusViewModel> mediaForwardViewModel;
@property (nonatomic, readonly) _Bool isQuoteStatus;
@property (nonatomic, readonly) NSString *scribeElementAccountingForQuoteTweet;
@property (nonatomic, readonly) _Bool isVideoReaction;
@property (nonatomic, readonly) _Bool isQuoted;
@property (nonatomic, readonly) TFCCardData *cardData;
@property (nonatomic, readonly) TFCCardData *representedCardData;
@property (nonatomic, readonly) _Bool isCardHidden;
@property (nonatomic, readonly) TFSTwitterUnifiedCard *twitterUnifiedCard;
@property (nonatomic, readonly) TUCUnifiedCard *unifiedCard;
@property (nonatomic, readonly) TFNTwitterFeedbackInfo *feedbackInfo;
@property (nonatomic, readonly) NSArray *inlineMediaInfos;
@property (nonatomic, readonly) NSArray *representedMediaEntities;
@property (nonatomic, readonly) TFSTwitterMediaInfo *primaryMediaInfo;
@property (nonatomic, readonly) unsigned long long primaryMediaType;
@property (nonatomic, readonly) long long primaryCardType;
@property (nonatomic, readonly) _Bool isReply;
@property (nonatomic, readonly) _Bool isMediaEntityVideo;
@property (nonatomic, readonly) _Bool primaryMediaRequiresAttribution;
@property (nonatomic, readonly) TFSTwitterGeotag *representedGeotag;
@property (nonatomic, readonly) TFSTwitterGeotag *geotag;
@property (nonatomic, readonly) NSString *composerSource;
@property (nonatomic, readonly) long long conversationID;
@property (nonatomic, readonly) TFSTwitterConversationControl *conversationControl;
@property (nonatomic, retain) id <TFNTwitterConversationStructure> conversationPayload;
@property (nonatomic, readonly) TFSTwitterStatusQuickPromoteEligibility *quickPromoteEligibility;
@property (nonatomic, readonly) TFSTwitterSuperFollowInfo *superFollowInfo;
@property (nonatomic, retain) TFNTwitterSuggestsInfo *suggestsInfo;
@property (nonatomic, readonly) id <TFNTwitterStatusBanner> banner;
@property (nonatomic, readonly) _Bool isPromoted;
@property (nonatomic, readonly) NSString *advertiserName;
@property (nonatomic, readonly) _Bool isPoliticalAd;
@property (nonatomic, readonly) _Bool isIssueAd;
@property (nonatomic, readonly) _Bool displayAsMomentTimelineTweet;
@property (nonatomic, readonly) _Bool displayAsFollowForwardTweet;
@property (nonatomic, readonly) NSString *scribeElement;
@property (nonatomic, readonly) NSString *scribeComponent;
@property (nonatomic, readonly) TFSTwitterScribeTweetDetailsItem *tweetDetailsScribeItem;
@property (nonatomic, retain) NSNumber *scribePercentScreenHeight;
@property (nonatomic, readonly) NSDictionary *scribeParameters;
@property (nonatomic, copy) NSString *scribeReferringEvent;
@property (nonatomic, readonly) _Bool displayAsRetweeted;
@property (nonatomic, readonly) _Bool displayAsFavorited;
@property (nonatomic, readonly) _Bool displayAsBookmarked;
@property (nonatomic, readonly) _Bool displayAsDownvoted;
@property (nonatomic, readonly) TFNTwitterStatusConversationContext *conversationContext;
@property (nonatomic, readonly) id <TFNTwitterStatusConversationTreeContext> conversationTreeContext;
@property (nonatomic, readonly) _Bool isConversationStatus;
@property (nonatomic, readonly) _Bool isConversationAncestor;
@property (nonatomic, readonly) _Bool isConversationRoot;
@property (nonatomic, readonly) _Bool isConversationPrecededByAncestor;
@property (nonatomic, readonly) _Bool selfThreadTweet;
@property (nonatomic, readonly) _Bool selfThreadTweet;
@property (nonatomic, readonly) _Bool isSelfThreadStatus;
@property (nonatomic, readonly) long long selfThreadID;
@property (nonatomic, readonly) _Bool isConversationSingleBranchedReplyStatus;
@property (nonatomic, readonly) _Bool isReplyAndShouldShowSocialContext;
@property (nonatomic, readonly) NSString *conversationSection;
@property (nonatomic, readonly) _Bool isConversationMuted;
@property (nonatomic, readonly) _Bool isLeaveConversationEnabled;
@property (nonatomic, readonly) _Bool isViewerUnmentioned;
@property (nonatomic, readonly) _Bool isIncompleteQuotedStatus;
@property (nonatomic, readonly) _Bool hasForwardPivot;
@property (nonatomic, readonly) _Bool hasSoftIntervention;
@property (nonatomic, readonly) _Bool hasAppealableWarning;
@property (nonatomic, readonly) _Bool hasImageInterstitial;
@property (nonatomic, readonly) TFSTwitterConversationAnnotation *conversationAnnotation;
@property (nonatomic, readonly) NSString *entryID;
@property (nonatomic, readonly) long long timelineModuleItemIndex;
@property (nonatomic, readonly) _Bool isFromUserProtected;
@property (nonatomic, readonly) _Bool isFromUserVerified;
@property (nonatomic, readonly) _Bool isFromUserBlueVerified;
@property (nonatomic, readonly) long long fromUserIdentityType;
@property (nonatomic, readonly) _Bool isFromUserWithAccountLabel;
@property (nonatomic, readonly) _Bool isFromUserUsernameless;
@property (nonatomic, readonly) long long fromUserTranslatorType;
@property (nonatomic, readonly) TFSTwitterUserDesignatorInfo *fromUserHighlightedDesignatorInfo;
@property (nonatomic, readonly) _Bool isTweetedByAuthenticatedAccount;
@property (nonatomic, readonly) _Bool didPrepare;
@property (nonatomic, readonly) id <TAVPlayerFactoryIdentifiable> playerFactoryIdentifiable;
@property (nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSString *designatorString;
@property (nonatomic, readonly) NSString *designatorImageUrl;
@property (nonatomic, readonly) long long designatorIconType;
@property (nonatomic, readonly) long long designatorLabelType;
@property (nonatomic, readonly) NSString *designatorUrl;
@property (nonatomic, readonly) _Bool hasParodyProfileLabel;
@property (nonatomic, readonly) TFSPCFLabel *parodyCommentaryFanLabel;
@property (nonatomic, readonly) _Bool adPreviewTweet;
@property (nonatomic, readonly) _Bool adPreviewTweet;
@property (nonatomic, readonly) long long draftTweetID;
@property (nonatomic, readonly) _Bool fillerTweet;
@property (nonatomic, readonly) _Bool fillerTweet;
@property (nonatomic, readonly) _Bool shouldOmitCardLink;
@property (nonatomic, readonly) TFSTwitterVideoMonetizationSettings *videoMonetizationSettings;
@property (nonatomic, readonly) _Bool isTranslatable;
@property (nonatomic, readonly) UIDragItem *dragItem;
@property (nonatomic, readonly) _Bool hasEditHistory;
@property (nonatomic, readonly) _Bool isInEditableTimeWindow;
@property (nonatomic, readonly) _Bool isLatestEdit;
@property (nonatomic, readonly) _Bool isEditEligible;
@property (nonatomic, readonly) _Bool isStaleTweet;
@property (nonatomic, readonly) _Bool isEditable;
@property (nonatomic, readonly) long long latestTweetID;
@property (nonatomic, readonly) NSArray *editedTweetIDs;
@property (nonatomic, readonly) _Bool isTrending;
@property (nonatomic, readonly) _Bool hasPaidPromotionDisclosure;
@property (nonatomic, readonly) _Bool hasAIGeneratedDisclosure;

/* required instance methods */
- (_Bool)isPossiblySensitiveViewModelForAccount:(id)account;
- (_Bool)isPossiblySensitiveViewModelForAccount:(id)account;
- (_Bool)displaySensitiveContentAppealForAccount:(id)account;
- (_Bool)displaySensitiveContentAppealForAccount:(id)account;
- (void)syncLastDisplayCounts;
- (void)syncLastAggregatedDisplayCounts;
- (id)socialContextBannerText;
- (id)accessibilitySocialContextBannerText;
- (id)socialContextLinkText;
- (id)socialBadgeName;
- (_Bool)displayAsSelfThreadTweet;
- (_Bool)displayAsSelfThreadTweet;
- (void)updateTombstoneWithRichText:(id)text richRevealText:(id)text tombstoneDismissed:(_Bool)dismissed tweetMatchesReportedStatus:(_Bool)status quoteTweetMatchesReportedStatus:(_Bool)status;
- (void)updateTombstoneWithRichText:(id)text richRevealText:(id)text tombstoneDismissed:(_Bool)dismissed tweetMatchesReportedStatus:(_Bool)status quoteTweetMatchesReportedStatus:(_Bool)status;
- (_Bool)hasEngagementNudgeFor:(long long)_for;
- (_Bool)hasEngagementNudgeFor:(long long)_for;
- (id)engagementNudgeFor:(long long)_for;
- (id)engagementNudgeFor:(long long)_for;
- (_Bool)isAttachmentTypePhotoOrVideo:(unsigned long long)video;
- (_Bool)isAdPreviewTweet;
- (_Bool)isAdPreviewTweet;
- (_Bool)isFillerTweet;
- (_Bool)isFillerTweet;
- (_Bool)hasTwitterMediaIncludingPartners:(unsigned long long)partners forAccount:(id)account;
- (_Bool)hasTwitterMediaIncludingPartners:(unsigned long long)partners forAccount:(id)account;
- (id)updatedScribeParameters:(id)parameters;

@optional

@end

#endif /* TTACoreStatusViewModel_Protocol_h */
