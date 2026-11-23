//
#ifndef _TtC13GraphQLModels32TimelinePromotedMetadataFragment_h
#define _TtC13GraphQLModels32TimelinePromotedMetadataFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.TimelineDisclosureType ?, GraphQLModels.TimelinePromotedMetadataFragment.AdMetadataContainer ?, GraphQLModels.TimelinePromotedMetadataFragment.ClickTrackingInfo ?, GraphQLModels.TimelinePromotedMetadataFragment.PromotedTrend ?, GraphQLModels.TimelinePromotedMetadataFragment.RtbAdMetadata ?, GraphQLModels.UserResultsFragment, _$sSSSg, _$sSa -> GraphQLModels.TimelinePromotedMetadataFragment.ExperimentValues ?, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelinePromotedMetadataFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.TimelinePromotedMetadataFragment.AdMetadataContainer ? adMetadataContainer;
    Swift.String? advertiserName;
    GraphQLModels.UserResultsFragment advertiserResults;
    GraphQLModels.TimelinePromotedMetadataFragment.ClickTrackingInfo ? clickTrackingInfo;
    GraphQLModels.Enumeration GraphQLScalars.TimelineDisclosureType ? disclosureType;
    Swift.Array -> GraphQLModels.TimelinePromotedMetadataFragment.ExperimentValues ? experimentValues;
    Swift.String? impressionId;
    Swift.String? impressionString;
    GraphQLModels.TimelinePromotedMetadataFragment.PromotedTrend ? promotedTrend;
    Swift.String? promotedTrendDescription;
    Swift.String? promotedTrendName;
    Swift.String? promotedTrendQueryTerm;
    GraphQLModels.TimelinePromotedMetadataFragment.RtbAdMetadata ? rtbAdMetadata;
}

@end

#endif /* _TtC13GraphQLModels32TimelinePromotedMetadataFragment_h */
