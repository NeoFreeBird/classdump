//
#ifndef _TtCCC13GraphQLModels40TweetWithVisibilityResultsFieldsFragment5Tweet6Legacy_h
#define _TtCCC13GraphQLModels40TweetWithVisibilityResultsFieldsFragment5Tweet6Legacy_h
@import Foundation;

@class GraphQLModels.ApiConversationControlFragment ?, GraphQLModels.ApiGeoFeatureFragment ?, GraphQLModels.ApiPlaceFragment ?, GraphQLModels.EntitySetFragment ?, GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.CurrentUserRetweet ?, GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.ExtendedEntities ?, GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.QuotedStatusPermalink ?, GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.RetweetedStatusResults ?, GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.Scopes ?, GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.SelfThread ?, GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.WithheldEntities ?, _$sSSSg, _$sSa -> _$ss5Int64VMn ?, _$sSaySSGSg, _$sSbSg, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int64 ? bookmarkCount;
    Swift.String? composerSource;
    GraphQLModels.ApiConversationControlFragment ? conversationControl;
    Swift.String? conversationIdStr;
    Swift.Bool? conversationMuted;
    GraphQLModels.ApiGeoFeatureFragment ? coordinates;
    Swift.String? createdAt;
    GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.CurrentUserRetweet ? currentUserRetweet;
    Swift.Array -> nominal type descriptor for Swift.Int64 ? displayTextRange;
    GraphQLModels.EntitySetFragment ? entities;
    GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.ExtendedEntities ? extendedEntities;
    nominal type descriptor for Swift.Int64 ? favoriteCount;
    Swift.String? fullText;
    Swift.String? inReplyToStatusIdStr;
    Swift.Bool? isQuoteStatus;
    Swift.String? lang;
    GraphQLModels.ApiPlaceFragment ? place;
    Swift.Bool? possiblySensitive;
    Swift.Bool? possiblySensitiveEditable;
    nominal type descriptor for Swift.Int64 ? quoteCount;
    Swift.String? quotedStatusIdStr;
    GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.QuotedStatusPermalink ? quotedStatusPermalink;
    nominal type descriptor for Swift.Int64 ? replyCount;
    nominal type descriptor for Swift.Int64 ? retweetCount;
    Swift.Bool? retweeted;
    GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.RetweetedStatusResults ? retweetedStatusResults;
    GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.Scopes ? scopes;
    GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.SelfThread ? selfThread;
    Swift.String? userIdStr;
    GraphQLModels.TweetWithVisibilityResultsFieldsFragment.Tweet.Legacy.WithheldEntities ? withheldEntities;
    [Swift.String]? withheldInCountries;
    Swift.String? withheldScope;
    Swift.String? withheldText;
}

@end

#endif /* _TtCCC13GraphQLModels40TweetWithVisibilityResultsFieldsFragment5Tweet6Legacy_h */
