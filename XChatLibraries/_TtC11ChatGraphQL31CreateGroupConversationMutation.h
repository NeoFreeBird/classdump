//
#ifndef _TtC11ChatGraphQL31CreateGroupConversationMutation_h
#define _TtC11ChatGraphQL31CreateGroupConversationMutation_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn ?, _$s14GraphQLScalars19XChatGroupTypeInputOMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _$sSa -> _$s13GraphQLModels20ActionSignatureInputVMn ?, _$sSa -> _$s13GraphQLModels34ApiConversationParticipantKeyInputVMn ?, _$sSa -> _$s14GraphQLScalars13NumericStringVMn, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.CreateGroupConversationMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.Array -> nominal type descriptor for GraphQLScalars.NumericString adminUserIDs;
    Swift.Array -> nominal type descriptor for GraphQLScalars.NumericString memberUserIDs;
    nominal type descriptor for GraphQLScalars.NumericString ? conversationKeyVersion;
    Swift.Array -> nominal type descriptor for GraphQLModels.ApiConversationParticipantKeyInput ? conversationParticipantKeys;
    Swift.String? base64EncodedKeyRotation;
    Swift.String? groupTitle;
    Swift.String? avatarURL;
    Swift.Array -> nominal type descriptor for GraphQLModels.ActionSignatureInput ? actionSignatures;
    Swift.String conversationID;
    nominal type descriptor for GraphQLScalars.NumericString ? ttlMsec;
    nominal type descriptor for GraphQLScalars.XChatGroupTypeInput ? groupType;
}

@end

#endif /* _TtC11ChatGraphQL31CreateGroupConversationMutation_h */
