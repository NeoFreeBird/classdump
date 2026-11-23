//
#ifndef _TtC25TwitterCommunitiesGraphQL37UpdateCommunityPinnedHashtagsMutation_h
#define _TtC25TwitterCommunitiesGraphQL37UpdateCommunityPinnedHashtagsMutation_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSaySSG, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface TwitterCommunitiesGraphQL.UpdateCommunityPinnedHashtagsMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString communityID;
    [Swift.String] hashtags;
}

@end

#endif /* _TtC25TwitterCommunitiesGraphQL37UpdateCommunityPinnedHashtagsMutation_h */
