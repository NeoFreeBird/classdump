//
#ifndef _TtC11ChatGraphQL33GetInboxPageConversationDataQuery_h
#define _TtC11ChatGraphQL33GetInboxPageConversationDataQuery_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSaySSG, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.GetInboxPageConversationDataQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    [Swift.String] conversationIDs;
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

#endif /* _TtC11ChatGraphQL33GetInboxPageConversationDataQuery_h */
