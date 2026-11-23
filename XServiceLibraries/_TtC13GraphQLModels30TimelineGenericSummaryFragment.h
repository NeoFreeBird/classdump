//
#ifndef _TtC13GraphQLModels30TimelineGenericSummaryFragment_h
#define _TtC13GraphQLModels30TimelineGenericSummaryFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.TimelineGenericSummaryDisplayType, GraphQLModels.TimelineGenericSummaryFragment.Context ?, GraphQLModels.TimelineGenericSummaryFragment.OnClickAction ?, GraphQLModels.TimelineMediaFragment ?, GraphQLModels.TimelinePromotedMetadataFragment ?, GraphQLModels.TimelineRichTextFragment, GraphQLScalars.DateTime ?, _$sSa -> GraphQLModels.UserResultsFragment, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineGenericSummaryFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.TimelineGenericSummaryFragment.Context ? context;
    GraphQLModels.TimelineRichTextFragment headline;
    GraphQLModels.TimelineMediaFragment ? media;
    GraphQLModels.TimelineGenericSummaryFragment.OnClickAction ? onClickAction;
    GraphQLModels.TimelinePromotedMetadataFragment ? promotedMetadata;
    GraphQLModels.Enumeration GraphQLScalars.TimelineGenericSummaryDisplayType summaryDisplayType;
    GraphQLScalars.DateTime ? timestamp;
    Swift.Array -> GraphQLModels.UserResultsFragment userAttributionResults;
}

@end

#endif /* _TtC13GraphQLModels30TimelineGenericSummaryFragment_h */
