//
#ifndef _TtC11ChatGraphQL25GetMessageEventsPageQuery_h
#define _TtC11ChatGraphQL25GetMessageEventsPageQuery_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels27XChatPageQuerySettingsInputVMn ?, _$s13GraphQLModels44XChatGetMessageEventsPageContinueCursorInputVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.GetMessageEventsPageQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLModels.XChatGetMessageEventsPageContinueCursorInput ? continueCursor;
    nominal type descriptor for GraphQLModels.XChatPageQuerySettingsInput ? querySettings;
}

@end

#endif /* _TtC11ChatGraphQL25GetMessageEventsPageQuery_h */
