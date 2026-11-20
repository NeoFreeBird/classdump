//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCCC13GraphQLModels41PostReminderNotificationOperationResponse24PostReminderNotification12Subscription_h
#define _TtCCC13GraphQLModels41PostReminderNotificationOperationResponse24PostReminderNotification12Subscription_h
@import Foundation;

@class GraphQLScalars.DateTime ?, GraphQLScalars.NumericString ?, Swift.Bool, _TtCs12_SwiftObject;

@interface GraphQLModels.PostReminderNotificationOperationResponse.PostReminderNotification.Subscription : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool isNotificationEnabled;
    Swift.Bool isNotificationSubscribed;
    GraphQLScalars.DateTime ? notificationAt;
    GraphQLScalars.NumericString ? notificationId;
    GraphQLScalars.DateTime ? pushSentAt;
}

@end

#endif /* _TtCCC13GraphQLModels41PostReminderNotificationOperationResponse24PostReminderNotification12Subscription_h */
