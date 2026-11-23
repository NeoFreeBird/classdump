//
#ifndef _TtC13GraphQLModels27ViewerUserOperationResponse_h
#define _TtC13GraphQLModels27ViewerUserOperationResponse_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.AltTextPromptType ?, GraphQLModels.Enumeration GraphQLScalars.UserType ?, GraphQLModels.ViewerUserOperationResponse.ViewerV2 ?, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.ViewerUserOperationResponse : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.Enumeration GraphQLScalars.AltTextPromptType ? authenticatedUserAltTextPromptPreference;
    Swift.Bool? canAccessPayments;
    Swift.Bool? isSuperFollowSubscriber;
    GraphQLModels.Enumeration GraphQLScalars.UserType ? userType;
    GraphQLModels.ViewerUserOperationResponse.ViewerV2 ? viewerV2;
    Swift.Bool? xpaymentsEnrolled;
}

@end

#endif /* _TtC13GraphQLModels27ViewerUserOperationResponse_h */
