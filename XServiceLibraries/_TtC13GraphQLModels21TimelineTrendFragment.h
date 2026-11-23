//
#ifndef _TtC13GraphQLModels21TimelineTrendFragment_h
#define _TtC13GraphQLModels21TimelineTrendFragment_h
@import Foundation;

@class GraphQLModels.TimelinePromotedMetadataFragment ?, GraphQLModels.TimelineTrendFragment.ThumbnailImage ?, GraphQLModels.TimelineTrendFragment.TrendMetadata ?, GraphQLModels.TimelineUrlFragment, GraphQLModels.Union GraphQLModels.TimelineSocialContextFragment ?, _$sSS, _$sSSSg, _$sSa -> GraphQLModels.CardFragment ?, _$sSa -> GraphQLModels.TimelineGroupedTrendFragment ?, _$sSa -> GraphQLModels.TimelineTrendFragment.Images ?, _$sSa -> GraphQLModels.TweetResultsFragment ?, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineTrendFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> GraphQLModels.CardFragment ? associatedCards;
    Swift.Array -> GraphQLModels.TweetResultsFragment ? associatedTweetsResults;
    Swift.String? description;
    Swift.Array -> GraphQLModels.TimelineGroupedTrendFragment ? groupedTrends;
    Swift.Array -> GraphQLModels.TimelineTrendFragment.Images ? images;
    Swift.String name;
    GraphQLModels.TimelinePromotedMetadataFragment ? promotedMetadata;
    Swift.String? rank;
    GraphQLModels.Union GraphQLModels.TimelineSocialContextFragment ? socialContext;
    GraphQLModels.TimelineTrendFragment.ThumbnailImage ? thumbnailImage;
    GraphQLModels.TimelineTrendFragment.TrendMetadata ? trendMetadata;
    GraphQLModels.TimelineUrlFragment trendUrl;
}

@end

#endif /* _TtC13GraphQLModels21TimelineTrendFragment_h */
