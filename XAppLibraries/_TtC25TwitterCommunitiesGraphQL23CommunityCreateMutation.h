//
#ifndef _TtC25TwitterCommunitiesGraphQL23CommunityCreateMutation_h
#define _TtC25TwitterCommunitiesGraphQL23CommunityCreateMutation_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars24CommunityJoinPolicyInputOMn ?, _$s14GraphQLScalars27CommunityInvitesPolicyInputOMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface TwitterCommunitiesGraphQL.CommunityCreateMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String? description;
    Swift.String? question;
    Swift.String name;
    nominal type descriptor for GraphQLScalars.CommunityInvitesPolicyInput ? invitesPolicy;
    nominal type descriptor for GraphQLScalars.CommunityJoinPolicyInput ? joinPolicy;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeProfessional;
    Swift.Bool includeCanPay;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC25TwitterCommunitiesGraphQL23CommunityCreateMutation_h */
