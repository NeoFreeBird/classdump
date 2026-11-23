//
#ifndef _TtC11ChatGraphQL25AddXChatPublicKeyMutation_h
#define _TtC11ChatGraphQL25AddXChatPublicKeyMutation_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels19XChatPublicKeyInputVMn, _$s14GraphQLScalars13NumericStringVMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.AddXChatPublicKeyMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString version;
    Swift.Bool? generateVersion;
    nominal type descriptor for GraphQLModels.XChatPublicKeyInput publicKey;
}

@end

#endif /* _TtC11ChatGraphQL25AddXChatPublicKeyMutation_h */
