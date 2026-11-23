//
#ifndef _TtC14GraphQLActions29UpdatePinnedTimelinesMutation_h
#define _TtC14GraphQLActions29UpdatePinnedTimelinesMutation_h
@import Foundation;

@class Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSa -> GraphQLModels.PinnedTimelineItemInput, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UpdatePinnedTimelinesMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.Array -> GraphQLModels.PinnedTimelineItemInput pinnedTimelineItems;
    Swift.Bool includeCanPay;
    Swift.Bool includeDmMuting;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeProfessional;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC14GraphQLActions29UpdatePinnedTimelinesMutation_h */
