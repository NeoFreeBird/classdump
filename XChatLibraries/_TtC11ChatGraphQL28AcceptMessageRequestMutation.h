//
#ifndef _TtC11ChatGraphQL28AcceptMessageRequestMutation_h
#define _TtC11ChatGraphQL28AcceptMessageRequestMutation_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels39AddEncryptedConversationKeyRequestInputVMn ?, _$s13GraphQLModels39XChatSendMessageCreateEventRequestInputVMn ?, _$s14GraphQLScalars13NumericStringVMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.AcceptMessageRequestMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString targetUserId;
    nominal type descriptor for GraphQLModels.XChatSendMessageCreateEventRequestInput ? sendMce;
    nominal type descriptor for GraphQLModels.AddEncryptedConversationKeyRequestInput ? addCkey;
}

@end

#endif /* _TtC11ChatGraphQL28AcceptMessageRequestMutation_h */
