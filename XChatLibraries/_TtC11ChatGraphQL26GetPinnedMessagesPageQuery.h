//
#ifndef _TtC11ChatGraphQL26GetPinnedMessagesPageQuery_h
#define _TtC11ChatGraphQL26GetPinnedMessagesPageQuery_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels45XChatGetPinnedMessagesPageContinueCursorInputVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.GetPinnedMessagesPageQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String conversationID;
    nominal type descriptor for GraphQLModels.XChatGetPinnedMessagesPageContinueCursorInput ? cursor;
}

@end

#endif /* _TtC11ChatGraphQL26GetPinnedMessagesPageQuery_h */
