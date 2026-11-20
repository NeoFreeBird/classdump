//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels27CommunityMembershipFragment_h
#define _TtC13GraphQLModels27CommunityMembershipFragment_h
@import Foundation;

@class GraphQLModels.CommunityBannerMediaFragment, GraphQLModels.CommunityBannerMediaFragment ?, GraphQLModels.CommunityMembershipFragment.Actions, GraphQLModels.Enumeration GraphQLScalars.CommunityInvitesPolicy, GraphQLModels.Enumeration GraphQLScalars.CommunityJoinPolicy, GraphQLModels.Enumeration GraphQLScalars.CommunityRole, GraphQLScalars.NumericString, _$sSS, _TtCs12_SwiftObject;

@interface GraphQLModels.CommunityMembershipFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.CommunityMembershipFragment.Actions actions;
    GraphQLModels.CommunityBannerMediaFragment ? customBannerMedia;
    GraphQLModels.CommunityBannerMediaFragment defaultBannerMedia;
    GraphQLModels.Enumeration GraphQLScalars.CommunityInvitesPolicy invitesPolicy;
    GraphQLModels.Enumeration GraphQLScalars.CommunityJoinPolicy joinPolicy;
    Swift.String name;
    GraphQLScalars.NumericString restId;
    GraphQLModels.Enumeration GraphQLScalars.CommunityRole role;
}

@end

#endif /* _TtC13GraphQLModels27CommunityMembershipFragment_h */
