//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GraphQLActions29UserResultsByScreenNamesQuery_h
#define _TtC14GraphQLActions29UserResultsByScreenNamesQuery_h
@import Foundation;

@class Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSaySSG, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UserResultsByScreenNamesQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    [Swift.String] screenNames;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeProfessional;
    Swift.Bool includeCanPay;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC14GraphQLActions29UserResultsByScreenNamesQuery_h */
