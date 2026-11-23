//
#ifndef _TtC14GraphQLActions25DelegationGroupsListQuery_h
#define _TtC14GraphQLActions25DelegationGroupsListQuery_h
@import Foundation;

@class GraphQLScalars.DelegationInvitationStatusInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSa -> GraphQLScalars.DelegationRoleInput ?, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.DelegationGroupsListQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.Array -> GraphQLScalars.DelegationRoleInput ? roles;
    GraphQLScalars.DelegationInvitationStatusInput status;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeProfessional;
    Swift.Bool includeCanPay;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC14GraphQLActions25DelegationGroupsListQuery_h */
