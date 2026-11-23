//
#ifndef _TtC11ChatGraphQL34InitializeXChatMediaUploadMutation_h
#define _TtC11ChatGraphQL34InitializeXChatMediaUploadMutation_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.InitializeXChatMediaUploadMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String conversationID;
    Swift.String messageID;
    nominal type descriptor for GraphQLScalars.NumericString totalBytes;
    Swift.Bool? isPublic;
    Swift.String? contentType;
}

@end

#endif /* _TtC11ChatGraphQL34InitializeXChatMediaUploadMutation_h */
