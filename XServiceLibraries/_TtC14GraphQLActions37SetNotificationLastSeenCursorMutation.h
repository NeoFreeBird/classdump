//
#ifndef _TtC14GraphQLActions37SetNotificationLastSeenCursorMutation_h
#define _TtC14GraphQLActions37SetNotificationLastSeenCursorMutation_h
@import Foundation;

@class GraphQLScalars.NotificationTimelineTypeInput ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.SetNotificationLastSeenCursorMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String cursor;
    GraphQLScalars.NotificationTimelineTypeInput ? timelineType;
}

@end

#endif /* _TtC14GraphQLActions37SetNotificationLastSeenCursorMutation_h */
