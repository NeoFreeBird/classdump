//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
