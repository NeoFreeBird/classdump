//
#ifndef _TtC11CallGraphQL22XChatStartCallMutation_h
#define _TtC11CallGraphQL22XChatStartCallMutation_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface CallGraphQL.XChatStartCallMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String? conversationID;
    Swift.Bool? audioOnly;
    Swift.String? callID;
    Swift.String? mediaSessionID;
    Swift.String? mediaPayload;
}

@end

#endif /* _TtC11CallGraphQL22XChatStartCallMutation_h */
