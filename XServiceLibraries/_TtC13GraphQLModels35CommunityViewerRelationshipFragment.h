//
#ifndef _TtC13GraphQLModels35CommunityViewerRelationshipFragment_h
#define _TtC13GraphQLModels35CommunityViewerRelationshipFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.CommunityRole, GraphQLModels.Union GraphQLModels.CommunityUserModerationStateFragment, _$sSS, _TtCs12_SwiftObject;

@interface GraphQLModels.CommunityViewerRelationshipFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String id;
    GraphQLModels.Union GraphQLModels.CommunityUserModerationStateFragment moderationState;
    GraphQLModels.Enumeration GraphQLScalars.CommunityRole role;
}

@end

#endif /* _TtC13GraphQLModels35CommunityViewerRelationshipFragment_h */
