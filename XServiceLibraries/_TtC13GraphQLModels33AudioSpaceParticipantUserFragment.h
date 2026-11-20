//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels33AudioSpaceParticipantUserFragment_h
#define _TtC13GraphQLModels33AudioSpaceParticipantUserFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.CommunityRole ?, GraphQLModels.UserResultsFragment ?, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.AudioSpaceParticipantUserFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.Enumeration GraphQLScalars.CommunityRole ? communityRole;
    Swift.Bool? isMutedByAdmin;
    Swift.Bool? isMutedByGuest;
    Swift.String? raiseHandEmoji;
    Swift.String? userId;
    GraphQLModels.UserResultsFragment ? userResults;
}

@end

#endif /* _TtC13GraphQLModels33AudioSpaceParticipantUserFragment_h */
