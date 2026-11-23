//
#ifndef _TtC14GraphQLActions49UpdateUserNotificationsEmailNotificationsMutation_h
#define _TtC14GraphQLActions49UpdateUserNotificationsEmailNotificationsMutation_h
@import Foundation;

@class GraphQLModels.EmailNotificationSettingsInput, GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UpdateUserNotificationsEmailNotificationsMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString userID;
    GraphQLModels.EmailNotificationSettingsInput settings;
}

@end

#endif /* _TtC14GraphQLActions49UpdateUserNotificationsEmailNotificationsMutation_h */
