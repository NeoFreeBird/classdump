//
#ifndef _TtC14GraphQLActions24LiveChatSendChatMutation_h
#define _TtC14GraphQLActions24LiveChatSendChatMutation_h
@import Foundation;

@class GraphQLModels.LiveChatSendChatGqlInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.LiveChatSendChatMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLModels.LiveChatSendChatGqlInput input;
}

@end

#endif /* _TtC14GraphQLActions24LiveChatSendChatMutation_h */
