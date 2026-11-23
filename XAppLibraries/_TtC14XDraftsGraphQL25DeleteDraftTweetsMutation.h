//
#ifndef _TtC14XDraftsGraphQL25DeleteDraftTweetsMutation_h
#define _TtC14XDraftsGraphQL25DeleteDraftTweetsMutation_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSa -> _$s14GraphQLScalars13NumericStringVMn, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XDraftsGraphQL.DeleteDraftTweetsMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.Array -> nominal type descriptor for GraphQLScalars.NumericString draftTweetIDs;
}

@end

#endif /* _TtC14XDraftsGraphQL25DeleteDraftTweetsMutation_h */
