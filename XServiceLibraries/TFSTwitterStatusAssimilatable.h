//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterStatusAssimilatable_h
#define TFSTwitterStatusAssimilatable_h
@import Foundation;

@class NSObject;

@interface TFSTwitterStatusAssimilatable : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 statusID;
    B24@0:8@"NSString"16 cardDataURL;
    B24@0:8@"NSString"16 originalText;
    B24@0:8@"NSString"16 legacyTextRange;
    B24@0:8@"NSString"16 date;
    B24@0:8@"NSString"16 fromUserID;
    B24@0:8@"NSString"16 inReplyToStatusID;
    B24@0:8@"NSString"16 updatedTimestamp;
    B24@0:8@"NSString"16 withheldScope;
    B24@0:8@"NSString"16 withheldInCountries;
    B24@0:8@"NSString"16 inReplyToUsername;
    B24@0:8@"NSString"16 isPossiblySensitive;
    B24@0:8@"NSString"16 language;
    B24@0:8@"NSString"16 quotedStatusID;
    B24@0:8@"NSString"16 inReplyToUserID;
    B24@0:8@"NSString"16 location;
    B24@0:8@"NSString"16 place;
    B24@0:8@"NSString"16 retweetState;
    B24@0:8@"NSString"16 retweetCount;
    B24@0:8@"NSString"16 retweetedStatusID;
    B24@0:8@"NSString"16 replyCount;
    B24@0:8@"NSString"16 favoriteCount;
    B24@0:8@"NSString"16 favoritedByLoadingAccount;
    B24@0:8@"NSString"16 downvotedByLoadingAccount;
    B24@0:8@"NSString"16 bookmarkCount;
    B24@0:8@"NSString"16 bookmarkedByLoadingAccount;
    B24@0:8@"NSString"16 conversationID;
    B24@0:8@"NSString"16 conversationControl;
    B24@0:8@"NSString"16 conversationMuted;
    B24@0:8@"NSString"16 selfThreadID;
    B24@0:8@"NSString"16 entities;
    B24@0:8@"NSString"16 withheldText;
    B24@0:8@"NSString"16 withheldEntities;
    B24@0:8@"NSString"16 includeInProfileTimeline;
    B24@0:8@"NSString"16 composerSource;
    B24@0:8@"NSString"16 quotedStatusPermalinkEntity;
    B24@0:8@"NSString"16 limitedActions;
    B24@0:8@"NSString"16 quoteCount;
    B24@0:8@"NSString"16 voiceInfo;
    B24@0:8@"NSString"16 unmentionInfo;
    B24@0:8@"NSString"16 isTranslatable;
    B24@0:8@"NSString"16 forwardPivot;
    B24@0:8@"NSString"16 hasBirdwatchNotes;
    B24@0:8@"NSString"16 birdwatchPivot;
    B24@0:8@"NSString"16 birdwatchTombstonePivot;
    B24@0:8@"NSString"16 grokAnalysisFollowups;
    B24@0:8@"NSString"16 grokAnalysisButton;
    B24@0:8@"NSString"16 grokTranslatedPost;
    B24@0:8@"NSString"16 grokAnnotations;
    B24@0:8@"NSString"16 jetfuelAttachment;
    B24@0:8@"NSString"16 viewCountInfo;
    B24@0:8@"NSString"16 article;
    B24@0:8@"NSString"16 noteTweet;
    B24@0:8@"NSString"16 authorCommunityRelationship;
    B24@0:8@"NSString"16 communityID;
    B24@0:8@"NSString"16 conversationDetails;
    B24@0:8@"NSString"16 quickPromoteEligibility;
    B24@0:8@"NSString"16 superFollowInfo;
    B24@0:8@"NSString"16 unifiedCardID;
    B24@0:8@"NSString"16 editControl;
    B24@0:8@"NSString"16 previousCounts;
    B24@0:8@"NSString"16 editPerspective;
    B24@0:8@"NSString"16 isTrending;
    B24@0:8@"NSString"16 postCtaViewModel;
    B24@0:8@"NSString"16 contentDisclosures;
    B24@0:8@"NSString"16 reactionContext;
    B24@0:8@"NSString"16 sportsPostContext;
    B24@0:8@"NSString"16 liveEventPostContext;
}

/* instance methods */
- (id)initWithStatusID:(long long)id cardDataURL:(id)url originalText:(id)text legacyTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range date:(id)date fromUserID:(long long)id inReplyToStatusID:(long long)id location:(id)location place:(id)place updatedTimestamp:(id)timestamp withheldScope:(id)scope withheldInCountries:(id)countries inReplyToUsername:(id)username isPossiblySensitive:(_Bool)sensitive language:(id)language quotedStatusID:(long long)id inReplyToUserID:(long long)id retweetID:(long long)id retweetCount:(id)count retweetedStatusID:(id)id replyCount:(long long)count favoriteCount:(id)count favoritedByLoadingAccount:(id)account downvotedByLoadingAccount:(id)account bookmarkCount:(id)count bookmarkedByLoadingAccount:(id)account conversationID:(id)id conversationControl:(id)control conversationMuted:(id)muted selfThreadID:(long long)id entities:(id)entities withheldText:(id)text withheldEntities:(id)entities includeInProfileTimeline:(_Bool)timeline composerSource:(id)source quotedStatusPermalinkEntity:(id)entity quoteCount:(long long)count limitedActions:(id)actions voiceInfo:(id)info unmentionInfo:(id)info isTranslatable:(_Bool)translatable forwardPivot:(id)pivot hasBirdwatchNotes:(_Bool)notes birdwatchPivot:(id)pivot birdwatchTombstonePivot:(id)pivot grokAnalysisFollowups:(id)followups grokAnalysisButton:(_Bool)button grokTranslatedPost:(id)post grokAnnotations:(id)annotations jetfuelAttachment:(id)attachment viewCountInfo:(id)info article:(id)article noteTweet:(id)tweet authorCommunityRelationship:(id)relationship communityID:(id)id conversationDetails:(id)details quickPromoteEligibility:(id)eligibility superFollowInfo:(id)info unifiedCardID:(id)id editControl:(id)control previousCounts:(id)counts editPerspective:(id)perspective isTrending:(id)trending postCtaViewModel:(id)model contentDisclosures:(id)disclosures reactionContext:(id)context sportsPostContext:(id)context liveEventPostContext:(id)context;
- (id)init;

@end

#endif /* TFSTwitterStatusAssimilatable_h */
