//
#ifndef _TtC14GraphQLActions28GrokEditConversationMutation_h
#define _TtC14GraphQLActions28GrokEditConversationMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.GrokEditConversationMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString conversationId;
    Swift.String? newTitle;
}

@end

#endif /* _TtC14GraphQLActions28GrokEditConversationMutation_h */
