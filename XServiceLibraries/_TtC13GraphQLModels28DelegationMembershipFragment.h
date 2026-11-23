//
#ifndef _TtC13GraphQLModels28DelegationMembershipFragment_h
#define _TtC13GraphQLModels28DelegationMembershipFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.DelegationInvitationStatus ?, GraphQLModels.Enumeration GraphQLScalars.DelegationRole ?, GraphQLModels.UserResultsFragment ?, GraphQLScalars.NumericString, _$sSS, _TtCs12_SwiftObject;

@interface GraphQLModels.DelegationMembershipFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String id;
    GraphQLScalars.NumericString restId;
    GraphQLModels.Enumeration GraphQLScalars.DelegationRole ? role;
    GraphQLModels.Enumeration GraphQLScalars.DelegationInvitationStatus ? status;
    GraphQLModels.UserResultsFragment ? userResults;
}

@end

#endif /* _TtC13GraphQLModels28DelegationMembershipFragment_h */
