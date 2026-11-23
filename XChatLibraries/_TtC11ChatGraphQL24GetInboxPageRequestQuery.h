//
#ifndef _TtC11ChatGraphQL24GetInboxPageRequestQuery_h
#define _TtC11ChatGraphQL24GetInboxPageRequestQuery_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels27XChatPageQuerySettingsInputVMn ?, _$s13GraphQLModels36XChatGetInboxPageContinueCursorInputVMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.GetInboxPageRequestQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLModels.XChatGetInboxPageContinueCursorInput continueCursor;
    nominal type descriptor for GraphQLModels.XChatPageQuerySettingsInput ? querySettings;
    Swift.Bool includeUserPublicKeys;
    Swift.Bool includeUsernameChange;
    Swift.Bool includeJuiceboxTokens;
    Swift.Bool includeAllGroupMemberUserObjects;
    Swift.Bool includeParticipantsResultsForInboxPreview;
    Swift.Bool includeCanPay;
    Swift.Bool includeDmMuting;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeProfessional;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC11ChatGraphQL24GetInboxPageRequestQuery_h */
