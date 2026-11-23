//
#ifndef _TtC14GraphQLActions26GrokCreateFeedbackMutation_h
#define _TtC14GraphQLActions26GrokCreateFeedbackMutation_h
@import Foundation;

@class GraphQLModels.BasicGrokConversationFeedbackInput, GraphQLModels.ContextualGrokConversationFeedbackInput ?, GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.GrokCreateFeedbackMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString grokConversationID;
    GraphQLScalars.NumericString grokConversationItemID;
    Swift.String modelVersion;
    GraphQLModels.BasicGrokConversationFeedbackInput basicFeedback;
    GraphQLModels.ContextualGrokConversationFeedbackInput ? contextualFeedback;
}

@end

#endif /* _TtC14GraphQLActions26GrokCreateFeedbackMutation_h */
