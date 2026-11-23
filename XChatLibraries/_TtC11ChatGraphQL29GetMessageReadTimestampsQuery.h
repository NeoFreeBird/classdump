//
#ifndef _TtC11ChatGraphQL29GetMessageReadTimestampsQuery_h
#define _TtC11ChatGraphQL29GetMessageReadTimestampsQuery_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.GetMessageReadTimestampsQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String conversationID;
    nominal type descriptor for GraphQLScalars.NumericString sequenceID;
}

@end

#endif /* _TtC11ChatGraphQL29GetMessageReadTimestampsQuery_h */
