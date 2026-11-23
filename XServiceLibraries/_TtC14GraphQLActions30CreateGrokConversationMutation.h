//
#ifndef _TtC14GraphQLActions30CreateGrokConversationMutation_h
#define _TtC14GraphQLActions30CreateGrokConversationMutation_h
@import Foundation;

@class GraphQLModels.CreateGrokConversationRequestInput ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CreateGrokConversationMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String? fromShare;
    GraphQLModels.CreateGrokConversationRequestInput ? fromUniversalSearch;
}

@end

#endif /* _TtC14GraphQLActions30CreateGrokConversationMutation_h */
