//
#ifndef _TtC13GraphQLModels30TimelineTimelineModuleFragment_h
#define _TtC13GraphQLModels30TimelineTimelineModuleFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.TimelineModuleDisplayType, GraphQLModels.TimelineClientEventInfoFragment ?, GraphQLModels.TimelineFeedbackInfoFragment ?, GraphQLModels.TimelineTimelineModuleFragment.Footer ?, GraphQLModels.TimelineTimelineModuleFragment.Header ?, GraphQLModels.TimelineTimelineModuleFragment.Metadata ?, GraphQLModels.Union GraphQLModels.TimelineTimelineModuleFragment.ShowMoreBehavior ?, _$sSa -> GraphQLModels.TimelineModuleItemFragment ?, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineTimelineModuleFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.TimelineClientEventInfoFragment ? clientEventInfo;
    GraphQLModels.Enumeration GraphQLScalars.TimelineModuleDisplayType displayType;
    GraphQLModels.TimelineFeedbackInfoFragment ? feedbackInfo;
    GraphQLModels.TimelineTimelineModuleFragment.Footer ? footer;
    GraphQLModels.TimelineTimelineModuleFragment.Header ? header;
    Swift.Array -> GraphQLModels.TimelineModuleItemFragment ? items;
    GraphQLModels.TimelineTimelineModuleFragment.Metadata ? metadata;
    GraphQLModels.Union GraphQLModels.TimelineTimelineModuleFragment.ShowMoreBehavior ? showMoreBehavior;
}

@end

#endif /* _TtC13GraphQLModels30TimelineTimelineModuleFragment_h */
