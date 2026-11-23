//
#ifndef _TtC14GraphQLActions33RegisterUserlessPushTokenMutation_h
#define _TtC14GraphQLActions33RegisterUserlessPushTokenMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, GraphQLScalars.NumericString ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.RegisterUserlessPushTokenMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String appReleaseVersion;
    GraphQLScalars.NumericString appVersion;
    GraphQLScalars.NumericString ? clientApplicationID;
    GraphQLScalars.NumericString guestID;
    GraphQLScalars.NumericString ? lastSeenTimestampMs;
    Swift.String? osVersion;
    Swift.String pushToken;
}

@end

#endif /* _TtC14GraphQLActions33RegisterUserlessPushTokenMutation_h */
