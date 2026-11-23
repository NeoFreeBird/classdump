//
#ifndef _TtC11ChatGraphQL19TypeaheadXChatQuery_h
#define _TtC11ChatGraphQL19TypeaheadXChatQuery_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars21TypeaheadSurfaceInputOMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _$sSbSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.TypeaheadXChatQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String query;
    Swift.Bool? includeGroupCheck;
    Swift.String? convID;
    nominal type descriptor for GraphQLScalars.TypeaheadSurfaceInput ? surface;
    nominal type descriptor for Swift.Int32 ? maxCount;
    Swift.Bool includeUserPublicKeys;
    Swift.Bool includeUsernameChange;
    Swift.Bool includeJuiceboxTokens;
    Swift.Bool includeCanPay;
    Swift.Bool includeDmMuting;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeProfessional;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC11ChatGraphQL19TypeaheadXChatQuery_h */
