//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC25TwitterCommunitiesGraphQL48CommunitiesEligibleForProfileSpotlightSliceQuery_h
#define _TtC25TwitterCommunitiesGraphQL48CommunitiesEligibleForProfileSpotlightSliceQuery_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$sSbSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface TwitterCommunitiesGraphQL.CommunitiesEligibleForProfileSpotlightSliceQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for Swift.Int32 ? count;
    Swift.String? cursor;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeProfessional;
    Swift.Bool includeCanPay;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC25TwitterCommunitiesGraphQL48CommunitiesEligibleForProfileSpotlightSliceQuery_h */
