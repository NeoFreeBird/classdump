//
#ifndef _TtC11ChatGraphQL36UpdateXChatNumberPermissionsMutation_h
#define _TtC11ChatGraphQL36UpdateXChatNumberPermissionsMutation_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars16XNumberPrivilegeOMn, _$s14GraphQLScalars17XNumberVisibilityOMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.UpdateXChatNumberPermissionsMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.Bool enabled;
    nominal type descriptor for GraphQLScalars.XNumberPrivilege privilege;
    nominal type descriptor for GraphQLScalars.XNumberVisibility ? visibility;
}

@end

#endif /* _TtC11ChatGraphQL36UpdateXChatNumberPermissionsMutation_h */
