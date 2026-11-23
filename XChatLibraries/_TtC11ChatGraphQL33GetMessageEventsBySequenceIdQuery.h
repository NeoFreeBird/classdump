//
#ifndef _TtC11ChatGraphQL33GetMessageEventsBySequenceIdQuery_h
#define _TtC11ChatGraphQL33GetMessageEventsBySequenceIdQuery_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSaySSG, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.GetMessageEventsBySequenceIdQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    [Swift.String] sequenceIDs;
}

@end

#endif /* _TtC11ChatGraphQL33GetMessageEventsBySequenceIdQuery_h */
