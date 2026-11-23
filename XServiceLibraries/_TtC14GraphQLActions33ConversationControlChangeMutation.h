//
#ifndef _TtC14GraphQLActions33ConversationControlChangeMutation_h
#define _TtC14GraphQLActions33ConversationControlChangeMutation_h
@import Foundation;

@class GraphQLScalars.ConversationControlModeInput, GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSa -> GraphQLScalars.ConversationControlModeInput ?, _$sSaySSGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.ConversationControlChangeMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    [Swift.String]? allowedCountryCodes;
    GraphQLScalars.ConversationControlModeInput mode;
    Swift.Array -> GraphQLScalars.ConversationControlModeInput ? modes;
    GraphQLScalars.NumericString tweetID;
}

@end

#endif /* _TtC14GraphQLActions33ConversationControlChangeMutation_h */
