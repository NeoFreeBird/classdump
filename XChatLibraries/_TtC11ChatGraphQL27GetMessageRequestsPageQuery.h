//
#ifndef _TtC11ChatGraphQL27GetMessageRequestsPageQuery_h
#define _TtC11ChatGraphQL27GetMessageRequestsPageQuery_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels27XChatPageQuerySettingsInputVMn ?, _$s13GraphQLModels46XChatGetMessageRequestsPageContinueCursorInputVMn, _$s14GraphQLScalars23MessageRequestTypeInputOMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.GetMessageRequestsPageQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLModels.XChatGetMessageRequestsPageContinueCursorInput cursor;
    nominal type descriptor for GraphQLModels.XChatPageQuerySettingsInput ? querySettings;
    nominal type descriptor for GraphQLScalars.MessageRequestTypeInput ? inboxType;
}

@end

#endif /* _TtC11ChatGraphQL27GetMessageRequestsPageQuery_h */
