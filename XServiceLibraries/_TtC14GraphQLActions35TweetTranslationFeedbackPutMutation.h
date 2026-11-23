//
#ifndef _TtC14GraphQLActions35TweetTranslationFeedbackPutMutation_h
#define _TtC14GraphQLActions35TweetTranslationFeedbackPutMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, GraphQLScalars.TranslationFeedbackEnumInput, GraphQLScalars.TranslationSourceInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.TweetTranslationFeedbackPutMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.TranslationFeedbackEnumInput feedbackEnum;
    GraphQLScalars.TranslationSourceInput source;
    GraphQLScalars.NumericString tweetID;
}

@end

#endif /* _TtC14GraphQLActions35TweetTranslationFeedbackPutMutation_h */
