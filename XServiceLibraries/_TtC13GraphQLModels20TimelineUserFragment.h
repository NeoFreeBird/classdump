//
#ifndef _TtC13GraphQLModels20TimelineUserFragment_h
#define _TtC13GraphQLModels20TimelineUserFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.TimelineUserDisplayType, GraphQLModels.TimelinePromotedMetadataFragment ?, GraphQLModels.TimelineUserReactiveTriggersFragment ?, GraphQLModels.Union GraphQLModels.TimelineSocialContextFragment ?, GraphQLModels.UserResultsFragment, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineUserFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.Enumeration GraphQLScalars.TimelineUserDisplayType displayType;
    Swift.Bool? enableReactiveBlending;
    GraphQLModels.TimelinePromotedMetadataFragment ? promotedMetadata;
    GraphQLModels.Union GraphQLModels.TimelineSocialContextFragment ? socialContext;
    GraphQLModels.TimelineUserReactiveTriggersFragment ? userReactiveTriggers;
    GraphQLModels.UserResultsFragment userResults;
}

@end

#endif /* _TtC13GraphQLModels20TimelineUserFragment_h */
