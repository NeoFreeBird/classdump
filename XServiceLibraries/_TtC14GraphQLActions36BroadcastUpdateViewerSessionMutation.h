//
#ifndef _TtC14GraphQLActions36BroadcastUpdateViewerSessionMutation_h
#define _TtC14GraphQLActions36BroadcastUpdateViewerSessionMutation_h
@import Foundation;

@class GraphQLScalars.BroadcastViewerSessionActionInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.BroadcastUpdateViewerSessionMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String lifecycleToken;
    GraphQLScalars.BroadcastViewerSessionActionInput action;
}

@end

#endif /* _TtC14GraphQLActions36BroadcastUpdateViewerSessionMutation_h */
