//
#ifndef _TtC14GraphQLActions49UserBusinessModuleUpdateEnabledForDisplayMutation_h
#define _TtC14GraphQLActions49UserBusinessModuleUpdateEnabledForDisplayMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UserBusinessModuleUpdateEnabledForDisplayMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString userID;
    GraphQLScalars.NumericString moduleID;
    Swift.Bool enabledForDisplay;
}

@end

#endif /* _TtC14GraphQLActions49UserBusinessModuleUpdateEnabledForDisplayMutation_h */
