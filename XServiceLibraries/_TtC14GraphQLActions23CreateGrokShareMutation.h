//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GraphQLActions23CreateGrokShareMutation_h
#define _TtC14GraphQLActions23CreateGrokShareMutation_h
@import Foundation;

@class GraphQLScalars.GrokShareSourceInput ?, GraphQLScalars.NumericString, GraphQLScalars.NumericString ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CreateGrokShareMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString conversationID;
    Swift.Bool? isConversationShare;
    GraphQLScalars.NumericString ? rangeEnd;
    GraphQLScalars.NumericString ? rangeStart;
    GraphQLScalars.GrokShareSourceInput ? shareSource;
}

@end

#endif /* _TtC14GraphQLActions23CreateGrokShareMutation_h */
