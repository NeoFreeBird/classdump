//
#ifndef _TtC11CallGraphQL21XChatJoinCallMutation_h
#define _TtC11CallGraphQL21XChatJoinCallMutation_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface CallGraphQL.XChatJoinCallMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String callID;
    Swift.Bool? audioOnly;
    Swift.String? mediaSessionID;
    Swift.String? mediaPayload;
    Swift.String? publisherFeedID;
}

@end

#endif /* _TtC11CallGraphQL21XChatJoinCallMutation_h */
