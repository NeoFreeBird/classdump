//
#ifndef _TtCCCC13GraphQLModels34TweetWithVisibilityResultsFragment5Tweet6Legacy16WithheldEntities_h
#define _TtCCCC13GraphQLModels34TweetWithVisibilityResultsFragment5Tweet6Legacy16WithheldEntities_h
@import Foundation;

@class _$sSa -> GraphQLModels.ApiMediaEntityFragment ?, _$sSa -> GraphQLModels.ApiMentionEntityFragment ?, _$sSa -> GraphQLModels.ApiTagEntityFragment ?, _$sSa -> GraphQLModels.ApiTimestampEntityFragment ?, _$sSa -> GraphQLModels.UrlsEntityFragment ?, _TtCs12_SwiftObject;

@interface GraphQLModels.TweetWithVisibilityResultsFragment.Tweet.Legacy.WithheldEntities : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> GraphQLModels.ApiTagEntityFragment ? hashtags;
    Swift.Array -> GraphQLModels.ApiMediaEntityFragment ? media;
    Swift.Array -> GraphQLModels.ApiTagEntityFragment ? smarttags;
    Swift.Array -> GraphQLModels.ApiTagEntityFragment ? symbols;
    Swift.Array -> GraphQLModels.ApiTimestampEntityFragment ? timestamps;
    Swift.Array -> GraphQLModels.UrlsEntityFragment ? urls;
    Swift.Array -> GraphQLModels.ApiMentionEntityFragment ? userMentions;
}

@end

#endif /* _TtCCCC13GraphQLModels34TweetWithVisibilityResultsFragment5Tweet6Legacy16WithheldEntities_h */
