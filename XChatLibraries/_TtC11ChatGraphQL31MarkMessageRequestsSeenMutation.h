//
#ifndef _TtC11ChatGraphQL31MarkMessageRequestsSeenMutation_h
#define _TtC11ChatGraphQL31MarkMessageRequestsSeenMutation_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.MarkMessageRequestsSeenMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString seenUntilSequenceID;
}

@end

#endif /* _TtC11ChatGraphQL31MarkMessageRequestsSeenMutation_h */
