//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCanonicalStatus_h
#define TFNTwitterCanonicalStatus_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TCMCommunitiesContext.h"
#include "TCMCommunityModel.h"
#include "TFCCardData.h"
#include "TFNTwitterStatusTextRangeSet.h"
#include "TFNTwitterUser.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSObject, NSSet, NSString, TFSCallbackDispatcher, TFSJetfuelAttachment, TFSModelContext, TFSTweetConversationDetails, TFSTwitterArticle, TFSTwitterBirdwatchPivot, TFSTwitterCommunityMembership, TFSTwitterCommunityReference, TFSTwitterContentDisclosures, TFSTwitterConversationControl, TFSTwitterEditControl, TFSTwitterEditPerspective, TFSTwitterEntitySet, TFSTwitterEntityURL, TFSTwitterForwardPivot, TFSTwitterGeotag, TFSTwitterGrokAnnotation, TFSTwitterGrokTranslation, TFSTwitterLiveEventPostContext, TFSTwitterMediaInfo, TFSTwitterNoteTweet, TFSTwitterPostCtaViewModel, TFSTwitterPreviousCounts, TFSTwitterReactionContext, TFSTwitterSportsPostContext, TFSTwitterStatusQuickPromoteEligibility, TFSTwitterSuperFollowInfo, TFSTwitterUnifiedCard, TFSTwitterUnmentionInfo, TFSTwitterUserCommunityRelationshipRole, TFSTwitterViewCountInfo, TFSTwitterVoiceInfo;

@interface TFNTwitterCanonicalStatus : NSObject <NSCoding> {
    /* instance variables */
    _Bool _didCacheMediaInfo;
    NSSet *_withheldInCountriesSet;
    struct { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; struct atomic_flag { _Atomic _Bool _Value; } predicate; } _statusIDStringToken;
}

@property (nonatomic) long long conversationID;
@property (nonatomic) long long selfThreadID;
@property (retain, nonatomic) TFSModelContext *modelContext;
@property (retain, nonatomic) id statusObserver;
@property (retain, nonatomic) id cardObserver;
@property (retain, nonatomic) id conversationObserver;
@property (retain, nonatomic) TCMCommunitiesContext *communitiesContext;
@property (retain, nonatomic) id communityObserver;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (retain, nonatomic) TFNTwitterUser *fromUser;
@property (retain, nonatomic) TFCCardData *cardData;
@property (readonly, nonatomic) long long statusID;
@property (readonly, copy, nonatomic) NSString *originalText;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long fromUserID;
@property (readonly, nonatomic) long long inReplyToStatusID;
@property (readonly, nonatomic) long long inReplyToUserID;
@property (readonly, copy, nonatomic) NSString *inReplyToUsername;
@property (readonly, nonatomic) long long retweetedStatusID;
@property (readonly, nonatomic) long long quotedStatusID;
@property (readonly, nonatomic) TFSTwitterEntityURL *quotedStatusPermalinkEntity;
@property (readonly, nonatomic) TFNTwitterStatusTextRangeSet *textRangeSet;
@property (readonly, nonatomic) TFSTwitterGeotag *geotag;
@property (readonly, nonatomic) TFSTwitterEntitySet *entities;
@property (readonly, nonatomic) NSString *cardDataURL;
@property (readonly, nonatomic) TFSTwitterUnifiedCard *unifiedCard;
@property (readonly, nonatomic) NSNumber *conversationMuted;
@property (readonly, nonatomic) TFSTwitterUnmentionInfo *unmentionInfo;
@property (readonly, nonatomic) _Bool isPossiblySensitive;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSArray *withheldInCountries;
@property (readonly, copy, nonatomic) NSString *withheldScope;
@property (readonly, copy, nonatomic) NSString *withheldText;
@property (readonly, nonatomic) TFSTwitterEntitySet *withheldEntities;
@property (readonly, nonatomic) long long retweetID;
@property (readonly, nonatomic) long long retweetCount;
@property (readonly, nonatomic) long long favoriteCount;
@property (readonly, nonatomic) long long bookmarkCount;
@property (readonly, nonatomic) long long replyCount;
@property (readonly, nonatomic) long long quoteCount;
@property (readonly, nonatomic) NSArray *limitedActions;
@property (readonly, nonatomic) TFSTwitterVoiceInfo *voiceInfo;
@property (readonly, nonatomic) _Bool isTranslatable;
@property (readonly, nonatomic) TFSTwitterForwardPivot *forwardPivot;
@property (readonly, nonatomic) _Bool hasBirdwatchNotes;
@property (readonly, nonatomic) TFSTwitterBirdwatchPivot *birdwatchPivot;
@property (readonly, nonatomic) TFSTwitterBirdwatchPivot *birdwatchTombstonePivot;
@property (readonly, nonatomic) TFSTwitterReactionContext *reactionContext;
@property (readonly, nonatomic) _Bool isVideoReaction;
@property (readonly, nonatomic) long long reactedToPostID;
@property (readonly, nonatomic) long long reactedToUserID;
@property (readonly, nonatomic) NSArray *grokAnalysisFollowups;
@property (readonly, nonatomic) _Bool grokAnalysisButton;
@property (readonly, nonatomic) TFSTwitterGrokTranslation *grokTranslatedPost;
@property (readonly, nonatomic) TFSTwitterGrokAnnotation *grokAnnotations;
@property (readonly, nonatomic) TFSJetfuelAttachment *jetfuelAttachment;
@property (readonly, nonatomic) TFSTwitterSportsPostContext *sportsPostContext;
@property (readonly, nonatomic) TFSTwitterLiveEventPostContext *liveEventPostContext;
@property (readonly, nonatomic) TFSTwitterViewCountInfo *viewCountInfo;
@property (readonly, nonatomic) TFSTwitterArticle *article;
@property (readonly, nonatomic) TFSTwitterNoteTweet *noteTweet;
@property (readonly, nonatomic) NSString *communityID;
@property (readonly, nonatomic) TFSTwitterCommunityReference *communityReference;
@property (readonly, nonatomic) TFSTwitterCommunityMembership *communityMembership;
@property (readonly, nonatomic) TFSTwitterUserCommunityRelationshipRole *authorCommunityRelationship;
@property (readonly, nonatomic) TFSTweetConversationDetails *conversationDetails;
@property (readonly, nonatomic) TFSTwitterConversationControl *conversationControl;
@property (readonly, nonatomic) TFSTwitterEditControl *editControl;
@property (readonly, nonatomic) TFSTwitterPreviousCounts *previousCounts;
@property (readonly, nonatomic) TFSTwitterEditPerspective *editPerspective;
@property (readonly, nonatomic) _Bool isTrending;
@property (readonly, nonatomic) TFSTwitterPostCtaViewModel *postCtaViewModel;
@property (readonly, nonatomic) TFSTwitterContentDisclosures *contentDisclosures;
@property (readonly, nonatomic) _Bool hasPaidPromotionDisclosure;
@property (readonly, nonatomic) _Bool hasAIGeneratedDisclosure;
@property (readonly, copy, nonatomic) NSString *composerSource;
@property (readonly, nonatomic) unsigned long long displayTextOffset;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } displayTextRange;
@property (readonly, nonatomic) _Bool favoritedByLoadingAccount;
@property (readonly, nonatomic) _Bool downvotedByLoadingAccount;
@property (readonly, nonatomic) _Bool bookmarkedByLoadingAccount;
@property (readonly, nonatomic) _Bool retweetedByLoadingAccount;
@property (readonly, nonatomic) _Bool seenAsRetweeted;
@property (readonly, nonatomic) _Bool includeInProfileTimeline;
@property (readonly, nonatomic) TFSTwitterStatusQuickPromoteEligibility *quickPromoteEligibility;
@property (readonly, nonatomic) TFSTwitterSuperFollowInfo *superFollowInfo;
@property (readonly, copy, nonatomic) NSArray *inlineMediaInfos;
@property (readonly, nonatomic) TFSTwitterMediaInfo *primaryMediaInfo;
@property (readonly, nonatomic) unsigned long long primaryMediaType;
@property (readonly, nonatomic) NSArray *omittedJetfuelURLEntities;
@property (readonly, nonatomic) long long primaryCardType;
@property (readonly, copy, nonatomic) NSString *displayText;
@property (readonly, nonatomic) NSNumber *statusIDNumber;
@property (readonly, nonatomic) NSString *statusIDString;
@property (readonly, nonatomic) NSDictionary *extraScribeItem;
@property (readonly, nonatomic) _Bool isWithheld;
@property (readonly, nonatomic) _Bool isSelfThreadStatus;
@property (readonly, nonatomic) TFSCallbackDispatcher *updateEventDispatcher;
@property (readonly, nonatomic) TCMCommunityModel *communityModel;

/* class methods */
+ (unsigned long long)_tfn_mediaTypeFromCardType:(long long)type;
+ (id)assimilationFiltersNoActualChangeNotificationsFeatureSwitch;
+ (void)setAssimilationFiltersNoActualChangeNotificationsBlock:(id /* block */)block;
+ (_Bool)assimilationFiltersNoActualChangeNotifications;

/* instance methods */
- (id)initWithStatusBundle:(id)bundle;
- (id)initWithStatusID:(long long)id cardData:(id)data originalText:(id)text fromUserID:(long long)id date:(id)date;
- (id)initWithCS2Status:(id)status conversationMuted:(id)muted cardData:(id)data unifiedCard:(id)card communityMembership:(id)membership;
- (id)initWithStatusID:(long long)id cardData:(id)data unifiedCard:(id)card composerSource:(id)source conversationControl:(id)control conversationID:(long long)id conversationMuted:(id)muted date:(id)date entities:(id)entities favoriteCount:(long long)count favoritedByLoadingAccount:(_Bool)account downvotedByLoadingAccount:(_Bool)account bookmarkCount:(long long)count bookmarkedByLoadingAccount:(_Bool)account fromUserID:(long long)id geotag:(id)geotag includeInProfileTimeline:(_Bool)timeline inReplyToStatusID:(long long)id inReplyToUserID:(long long)id inReplyToUsername:(id)username isPossiblySensitive:(_Bool)sensitive language:(id)language originalText:(id)text quotedStatusID:(long long)id quotedStatusPermalinkEntity:(id)entity quoteCount:(long long)count replyCount:(long long)count retweetCount:(long long)count retweetID:(long long)id retweetedStatusID:(long long)id selfThreadID:(long long)id textRangeSet:(id)set withheldEntities:(id)entities withheldInCountries:(id)countries withheldScope:(id)scope withheldText:(id)text limitedActions:(id)actions voiceInfo:(id)info unmentionInfo:(id)info isTranslatable:(_Bool)translatable forwardPivot:(id)pivot hasBirdwatchNotes:(_Bool)notes birdwatchPivot:(id)pivot birdwatchTombstonePivot:(id)pivot grokAnalysisFollowups:(id)followups grokAnalysisButton:(_Bool)button grokTranslatedPost:(id)post grokAnnotations:(id)annotations jetfuelAttachment:(id)attachment viewCountInfo:(id)info article:(id)article noteTweet:(id)tweet authorCommunityRelationship:(id)relationship communityMembership:(id)membership conversationDetails:(id)details quickPromoteEligibility:(id)eligibility superFollowInfo:(id)info editControl:(id)control previousCounts:(id)counts editPerspective:(id)perspective isTrending:(_Bool)trending postCtaViewModel:(id)model contentDisclosures:(id)disclosures reactionContext:(id)context;
- (id)init;
- (_Bool)_tfn_shouldGetMediaTypeFromCardType:(long long)type;
- (id)_tfn_computeOmittedJetfuelURLEntities;
- (void)_tfn_cacheMediaInfo;
- (id)mediaUserWithUserIDIsTaggedIn:(long long)in;
- (void)_tfn_observeCommunity;
- (void)_tfn_communityDidUpdate:(id)update;
- (void)setModelContext:(id)context cs2Transaction:(id)transaction;
- (void)_tfn_observeCard;
- (void)_tfn_observeConversation;
- (id)assimilatable;
- (id)assimilatableIncludeConversationMuted:(_Bool)muted;
- (void)assimilateCS2Status:(id)status pureStatus:(id)status;
- (void)_tfn_assimilateCS2Status:(id)status pureStatus:(id)status;
- (id)assimilateCanonicalStatus:(id)status;
- (id)_tfn_assimilateCanonicalStatus:(id)status;
- (_Bool)_tfn_assimilateCardData:(id)data cardDataURL:(id)url;
- (_Bool)_tfn_assimilateOriginalText:(id)text entities:(id)entities;
- (_Bool)_tfn_assimilateTextRangeSet:(struct _NSRange { unsigned long long x0; unsigned long long x1; })set;
- (_Bool)_tfn_assimilateEntities:(id)entities;
- (_Bool)_tfn_assimilateConversationID:(id)id;
- (_Bool)_tfn_assimilateConversationControl:(id)control;
- (_Bool)_tfn_assimilateSelfThreadID:(id)id;
- (_Bool)_tfn_assimilateReplyCount:(long long)count;
- (_Bool)_tfn_assimilateFavoriteCount:(long long)count;
- (_Bool)_tfn_assimilateFavoritedByLoadingAccount:(_Bool)account;
- (_Bool)_tfn_assimilateDownvotedByLoadingAccount:(_Bool)account;
- (_Bool)_tfn_assimilateBookmarkCount:(long long)count;
- (_Bool)_tfn_assimilateBookmarkedByLoadingAccount:(_Bool)account;
- (_Bool)_tfn_assimilateRetweetCount:(long long)count;
- (_Bool)_tfn_assimilateRetweetID:(id)id;
- (_Bool)_tfn_assimilateWithheldText:(id)text withheldEntities:(id)entities withheldScope:(id)scope withheldInCountries:(id)countries;
- (_Bool)_tfn_assimilateIncludeInProfileTimeline:(_Bool)timeline;
- (_Bool)_tfn_assimilateComposerSource:(id)source;
- (_Bool)_tfn_assimilateQuotedStatusPermalinkEntity:(id)entity;
- (_Bool)_tfn_assimilateQuoteCount:(long long)count;
- (_Bool)_tfn_assimilateLimitedActions:(id)actions;
- (_Bool)_tfn_assimilateVoiceInfo:(id)info;
- (_Bool)_tfn_assimilateUnmentionInfo:(id)info;
- (_Bool)_tfn_assimilateIsPossiblySensitive:(_Bool)sensitive;
- (_Bool)_tfn_assimilateLocation:(id)location coordinate:(id)coordinate place:(id)place;
- (_Bool)_tfn_assimilateLanguage:(id)language;
- (_Bool)_tfn_assimilateIsTranslatable:(_Bool)translatable;
- (_Bool)_tfn_assimilateForwardPivot:(id)pivot;
- (_Bool)_tfn_assimilatehasBirdwatchNotes:(_Bool)notes;
- (_Bool)_tfn_assimilateBirdwatchPivot:(id)pivot;
- (_Bool)_tfn_assimilateBirdwatchTombstonePivot:(id)pivot;
- (_Bool)applyBirdwatchTombstonePivot:(id)pivot;
- (_Bool)_tfn_assimilateGrokAnalysisFollowups:(id)followups;
- (_Bool)_tfn_assimilateGrokTranslatedPost:(id)post;
- (_Bool)_tfn_assimilateGrokAnnotations:(id)annotations;
- (_Bool)_tfn_assimilateGrokAnalysisButton:(_Bool)button;
- (_Bool)_tfn_assimilateJetfuelAttachment:(id)attachment;
- (_Bool)_tfn_assimilateSportsPostContext:(id)context;
- (_Bool)_tfn_assimilateLiveEventPostContext:(id)context;
- (_Bool)_tfn_assimilateViewCountInfo:(id)info;
- (_Bool)_tfn_assimilateArticle:(id)article;
- (_Bool)_tfn_assimilateNoteTweet:(id)tweet;
- (_Bool)_tfn_assimilateConversationDetails:(id)details;
- (_Bool)_tfn_assimilateCommunityID:(id)id;
- (_Bool)_tfn_assimilateAuthorCommunityRelationship:(id)relationship;
- (_Bool)_tfn_assimilateCommunityMembership:(id)membership;
- (id)canonicalTextForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (_Bool)_tfn_assimilateQuickPromoteEligibility:(id)eligibility;
- (_Bool)_tfn_assimilateSuperFollowInfo:(id)info;
- (_Bool)_tfn_assimilateEditControl:(id)control;
- (_Bool)_tfn_assimilatePreviousCounts:(id)counts;
- (_Bool)_tfn_assimilateEditPerspective:(id)perspective;
- (_Bool)_tfn_assimilateIsTrending:(_Bool)trending;
- (_Bool)_tfn_assimilatePostCtaViewModel:(id)model;
- (_Bool)_tfn_assimilateContentDisclosures:(id)disclosures;
- (_Bool)_tfn_assimilateReactionContext:(id)context;
- (void)_tfn_postUpdateNotification;
- (void)_tfn_postUpdateNotificationWithUserInfo:(id)info;
- (_Bool)isEqualToCanonicalStatus:(id)status differentProperties:(out id *)properties;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFNTwitterCanonicalStatus_h */
