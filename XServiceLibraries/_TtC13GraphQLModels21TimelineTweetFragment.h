//
#ifndef _TtC13GraphQLModels21TimelineTweetFragment_h
#define _TtC13GraphQLModels21TimelineTweetFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.TimelineTweetDisplayType, GraphQLModels.TimelineConversationAnnotationFragment ?, GraphQLModels.TimelineForwardPivotFragment ?, GraphQLModels.TimelinePromotedMetadataFragment ?, GraphQLModels.TimelineSspMetadataFragment ?, GraphQLModels.TimelineTombstoneInfoFragment ?, GraphQLModels.TimelineTweetComposerFragment ?, GraphQLModels.TimelineTweetContextFragment ?, GraphQLModels.TimelineTweetFacepileFragment ?, GraphQLModels.TimelineTweetFragment.Highlights ?, GraphQLModels.TimelineTweetFragment.PrerollMetadata ?, GraphQLModels.TimelineTweetFragment.QuotePivot ?, GraphQLModels.TimelineTweetFragment.TimelinesScoreInfo ?, GraphQLModels.TweetResultsFragment, GraphQLModels.Union GraphQLModels.TimelineSocialContextFragment ?, GraphQLModels.Union GraphQLModels.TimelineTweetFragment.PreviewMetadata ?, _$sSa -> GraphQLModels.TimelineTweetReactiveTriggerFragment ?, _$sSbSg, _$ss5Int16VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineTweetFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.TimelineConversationAnnotationFragment ? conversationAnnotation;
    GraphQLModels.TimelineForwardPivotFragment ? forwardPivot;
    Swift.Bool? hasModeratedReplies;
    GraphQLModels.TimelineTweetFragment.Highlights ? highlights;
    GraphQLModels.TimelineForwardPivotFragment ? innerForwardPivot;
    GraphQLModels.TimelineTombstoneInfoFragment ? innerTombstoneInfo;
    nominal type descriptor for Swift.Int16 ? minSpacing;
    GraphQLModels.TimelineTweetFragment.PrerollMetadata ? prerollMetadata;
    GraphQLModels.Union GraphQLModels.TimelineTweetFragment.PreviewMetadata ? previewMetadata;
    GraphQLModels.TimelinePromotedMetadataFragment ? promotedMetadata;
    GraphQLModels.TimelineTweetFragment.QuotePivot ? quotePivot;
    GraphQLModels.Union GraphQLModels.TimelineSocialContextFragment ? socialContext;
    GraphQLModels.TimelineSspMetadataFragment ? sspMetadata;
    GraphQLModels.Enumeration GraphQLScalars.TimelineTweetDisplayType timelineTweetDisplayType;
    GraphQLModels.TimelineTweetFragment.TimelinesScoreInfo ? timelinesScoreInfo;
    GraphQLModels.TimelineTweetComposerFragment ? tweetComposer;
    GraphQLModels.TimelineTweetContextFragment ? tweetContext;
    GraphQLModels.TimelineTweetFacepileFragment ? tweetFacepile;
    Swift.Array -> GraphQLModels.TimelineTweetReactiveTriggerFragment ? tweetReactiveTriggers;
    GraphQLModels.TweetResultsFragment tweetResults;
}

@end

#endif /* _TtC13GraphQLModels21TimelineTweetFragment_h */
