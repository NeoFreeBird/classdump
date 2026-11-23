//
#ifndef _TtC14XDraftsGraphQL22EditDraftTweetMutation_h
#define _TtC14XDraftsGraphQL22EditDraftTweetMutation_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels21PostTweetRequestInputVMn, _$s14GraphQLScalars13NumericStringVMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XDraftsGraphQL.EditDraftTweetMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString draftTweetID;
    nominal type descriptor for GraphQLModels.PostTweetRequestInput postTweetRequest;
}

@end

#endif /* _TtC14XDraftsGraphQL22EditDraftTweetMutation_h */
