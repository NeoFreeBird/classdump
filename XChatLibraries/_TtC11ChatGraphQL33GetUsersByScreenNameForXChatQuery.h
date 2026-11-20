//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGraphQL33GetUsersByScreenNameForXChatQuery_h
#define _TtC11ChatGraphQL33GetUsersByScreenNameForXChatQuery_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSaySSG, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.GetUsersByScreenNameForXChatQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    [Swift.String] screenNames;
    Swift.Bool? includeUserPublicKeys;
    Swift.Bool includeUsernameChange;
    Swift.Bool? includeJuiceboxTokens;
    Swift.Bool includeCanPay;
    Swift.Bool includeDmMuting;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeProfessional;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC11ChatGraphQL33GetUsersByScreenNameForXChatQuery_h */
