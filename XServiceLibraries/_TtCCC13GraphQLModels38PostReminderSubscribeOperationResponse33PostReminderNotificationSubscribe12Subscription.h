//
#ifndef _TtCCC13GraphQLModels38PostReminderSubscribeOperationResponse33PostReminderNotificationSubscribe12Subscription_h
#define _TtCCC13GraphQLModels38PostReminderSubscribeOperationResponse33PostReminderNotificationSubscribe12Subscription_h
@import Foundation;

@class GraphQLScalars.DateTime ?, GraphQLScalars.NumericString ?, Swift.Bool, _TtCs12_SwiftObject;

@interface GraphQLModels.PostReminderSubscribeOperationResponse.PostReminderNotificationSubscribe.Subscription : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool isNotificationEnabled;
    Swift.Bool isNotificationSubscribed;
    GraphQLScalars.DateTime ? notificationAt;
    GraphQLScalars.NumericString ? notificationId;
    GraphQLScalars.DateTime ? pushSentAt;
}

@end

#endif /* _TtCCC13GraphQLModels38PostReminderSubscribeOperationResponse33PostReminderNotificationSubscribe12Subscription_h */
