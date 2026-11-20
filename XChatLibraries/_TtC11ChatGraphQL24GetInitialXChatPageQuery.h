//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGraphQL24GetInitialXChatPageQuery_h
#define _TtC11ChatGraphQL24GetInitialXChatPageQuery_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels27XChatPageQuerySettingsInputVMn ?, _$s14GraphQLScalars13NumericStringVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.GetInitialXChatPageQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString ? maxLocalSequenceID;
    nominal type descriptor for GraphQLModels.XChatPageQuerySettingsInput ? querySettings;
    nominal type descriptor for Swift.Int32 ? messagePullVersion;
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

#endif /* _TtC11ChatGraphQL24GetInitialXChatPageQuery_h */
