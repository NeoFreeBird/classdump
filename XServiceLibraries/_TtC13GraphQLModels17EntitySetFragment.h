//
#ifndef _TtC13GraphQLModels17EntitySetFragment_h
#define _TtC13GraphQLModels17EntitySetFragment_h
@import Foundation;

@class _$sSa -> GraphQLModels.ApiMentionEntityFragment ?, _$sSa -> GraphQLModels.ApiTagEntityFragment ?, _$sSa -> GraphQLModels.ApiTimestampEntityFragment ?, _$sSa -> GraphQLModels.UrlsEntityFragment ?, _TtCs12_SwiftObject;

@interface GraphQLModels.EntitySetFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> GraphQLModels.ApiTagEntityFragment ? hashtags;
    Swift.Array -> GraphQLModels.ApiTagEntityFragment ? smarttags;
    Swift.Array -> GraphQLModels.ApiTagEntityFragment ? symbols;
    Swift.Array -> GraphQLModels.ApiTimestampEntityFragment ? timestamps;
    Swift.Array -> GraphQLModels.UrlsEntityFragment ? urls;
    Swift.Array -> GraphQLModels.ApiMentionEntityFragment ? userMentions;
}

@end

#endif /* _TtC13GraphQLModels17EntitySetFragment_h */
